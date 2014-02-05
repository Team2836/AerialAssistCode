#include "BCTHarvesterAngle.h"
#include "../Robotmap.h"


BCTHarvesterAngle::BCTHarvesterAngle() : Subsystem("BCTHarvesterAngle") 
{
	
	BCTTalonAngle = new Talon(1);
	LimitSwitch1 = new DigitalInput(1);
	LimitSwitch2 = new DigitalInput(2);
	Pots1 = new AnalogChannel(5);
	
}
    
void BCTHarvesterAngle::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void BCTHarvesterAngle::TopValue()
{
		double potvalue = Pots1->GetValue();
		if (potvalue>900){
			BCTTalonAngle->Set(-1.0);
		}
		else if (potvalue<900){
			BCTTalonAngle->Set(1.0);
		}
}	


void BCTHarvesterAngle::MedValue()
{
		double potvalue = Pots1->GetValue();
		if (potvalue>700){
			BCTTalonAngle->Set(-1.0);
		}
		else if (potvalue>700){
			BCTTalonAngle->Set(1.0);
		}
}

void BCTHarvesterAngle::LowValue()
{
		double potvalue = Pots1->GetValue();
		if (potvalue>300){
			BCTTalonAngle->Set(-1.0);
		}
		else if (potvalue<300){
			BCTTalonAngle->Set(1.0);
		}
}
	
	
// Put methods for controlling this subsystem
// here. Call these from Commands.
