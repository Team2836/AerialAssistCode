#include "PBTSub.h"
#include "../Robotmap.h"

PBTSub::PBTSub() : Subsystem("PBTSub") {
	PBTTalon = new Talon(1);
	LimitSwitch1 = new DigitalInput(1);
	LimitSwitch2 = new DigitalInput(2);
}
    
void PBTSub::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void PBTSub::PBTForwardMethod()
{
	bool LimitSwitchBool1 = LimitSwitch2->Get();
	PBTTalon->Set(1.0);
	if(LimitSwitchBool1 == true)
	{
		PBTTalon->Set(0.0);
	}
}

void PBTSub::PBTBackwardMethod()
{
	bool LimitSwitchBool2 = LimitSwitch1->Get();
	PBTTalon->Set(-1.0);
	if(LimitSwitchBool2 == true)
	{
		PBTTalon->Set(0.0);
	}
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
