import UIKit

public class FlokView: UIView
{
    //-----------------------------------------------------------------------------------------------------
    //Property
    //-----------------------------------------------------------------------------------------------------
    public var spots: [FlokSpot] = []

    //Either root or a spot
    public weak var parentView: UIView!
    
    weak var engine: FlokEngine!
    
    public var name: String!

    //Returns a auto-created spot if there is no spot
    public func spotWithName(name: String) -> FlokSpot! {
        //Did the spot exist already?
        for e in spots {
            if e.name == name { return e }
        }
        
        //Create a view
        let spot = FlokSpot()
        spot.translatesAutoresizingMaskIntoConstraints = false
        spot.name = name
        self.addSubview(spot)
        spots.append(spot)
        return spot
    }
    public var bp: Int!  //View base-pointer
    
    //'controller' portion of the view, which is really just event handling & context loading code
    public var cbp: Int?                     //Controller base-pointer
    public var context: [String:AnyObject]! //Initialization context
    
    //Constructors
    //-----------------------------------------------------------------------------------------------------
    required public override init(frame: CGRect) {
        super.init(frame: frame)
        defaultInit()
    }
    
    public required init(coder: NSCoder) {
        super.init(coder: coder)!
        defaultInit()
    }
    
    public func defaultInit() {
        self.backgroundColor = UIColor.whiteColor()
    }
    
    public convenience init() {
        self.init(frame: CGRectZero)
        defaultInit()
    }
    
    public func didLoad() {
    }
    
    override public func layoutSubviews() {
        super.layoutSubviews()
    }
    
    override public func updateConstraints() {
        super.updateConstraints()
    }
    
    public class func preload() {
    }
    
    public func didSwitchFromAction(from: String?, toAction to: String?) {
        puts("Not handling action from \(from) => \(to) for controller \(self.name)")
    }
    
    public func emit(name: String, withInfo info: [String:AnyObject]=[:]) {
        engine.int_dispatch([3, "int_event", cbp!, name, info])
    }
    
    //-----------------------------------------------------------------------------------------------------
    //Drawing helpers
    //-----------------------------------------------------------------------------------------------------
}
