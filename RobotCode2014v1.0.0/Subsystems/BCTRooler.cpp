#include "BCTRooler.h"
#include "../Robotmap.h"
#include "../Commands/BCTRoolerCommand.h"

BCTRooler::BCTRooler() : Subsystem("BCTRooler") {
	RoolerTalon = new Talon(3);
}
    
void BCTRooler::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	//SetDefaltCommand(new BCTRoolerCommand());
}
void BCTRooler::DriveFeeder(float FeederSpeed){
	RoolerTalon->Set(FeederSpeed);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
