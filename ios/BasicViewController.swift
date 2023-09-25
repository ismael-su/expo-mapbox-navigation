//
//  BasicViewController.swift
//  ExpoMapboxNavigation
//
//  Created by ismael on 23/9/2023.
//

import MapboxCoreNavigation
import MapboxNavigation
import MapboxDirections

class BasicViewController: UIViewController {
    var simulationIsEnabled = false
    
    var origin: CLLocationCoordinate2D!
    var destination: CLLocationCoordinate2D!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        //start()
        
        
    }
    
    func start(destination: CLLocationCoordinate2D){
        origin = CLLocationCoordinate2DMake(destination.latitude-0.09, destination.longitude)
        //origin = CLLocationCoordinate2DMake(37.77440680146262, -122.43539772352648)
        //destination = CLLocationCoordinate2DMake(37.76556957793795, -122.42409811526268)
        
        let options = NavigationRouteOptions(coordinates: [origin, destination])
        
        Directions.shared.calculate(options) { [weak self] (_, result) in
            switch result {
            case .failure(let error):
                print(error.localizedDescription)
            case .success(let response):
                guard let strongSelf = self else {
                    return
                }
                
                // For demonstration purposes, simulate locations if the Simulate Navigation option is on.
                // Since first route is retrieved from response `routeIndex` is set to 0.
                let indexedRouteResponse = IndexedRouteResponse(routeResponse: response, routeIndex: 0)
                let navigationService = MapboxNavigationService(indexedRouteResponse: indexedRouteResponse,
                                                                customRoutingProvider: NavigationSettings.shared.directions,
                                                                credentials: NavigationSettings.shared.directions.credentials,
                                                                simulating: self!.simulationIsEnabled ? .always : .onPoorGPS)
                
                let navigationOptions = NavigationOptions(navigationService: navigationService)
                let navigationViewController = NavigationViewController(for: indexedRouteResponse,
                                                                        navigationOptions: navigationOptions)
                navigationViewController.modalPresentationStyle = .fullScreen
                // Render part of the route that has been traversed with full transparency, to give the illusion of a disappearing route.
                navigationViewController.routeLineTracksTraversal = true
                
                strongSelf.present(navigationViewController, animated: true, completion: nil)
            }
        }
    }
}
