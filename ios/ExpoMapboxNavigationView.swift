import ExpoModulesCore

// This view will be used as a native component. Make sure to inherit from `ExpoView`
// to apply the proper styling (e.g. border radius and shadows).
class ExpoMapboxNavigationView: ExpoView {
    //private let myViewController = BasicViewController()
    private let myViewController = CustomNavigationCameraViewController()
        
    var destination: CLLocationCoordinate2D!

    

    
    required init(appContext: AppContext? = nil) {
        super.init(appContext: appContext)
        clipsToBounds = true
        myViewController.view.frame = bounds
        
        addSubview(myViewController.view)
        //self.myViewController.destination = destination
        //self.myViewController.start()
        
        //myViewController.didMove(toParent: self)
    }
    
    func start(){
        //self.myViewController.removeFromParent()
       self.myViewController.destination = destination
       self.myViewController.start()
    }
    
    
    func setDestination(dest: [Double]){
        NSLog("ISMAEL " + String(dest[0]))
        if (dest.count != 2){
            return
        }
        destination = CLLocationCoordinate2D(latitude: dest[0], longitude: dest[1])
        self.start()
    }
}
