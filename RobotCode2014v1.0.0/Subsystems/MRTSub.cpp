#include "MRTSub.h"
#include "../Robotmap.h"
#include "../Commands/MRTCommand.h"

MRTSub::MRTSub() : Subsystem("MRTDirvetrain") {
	LeftDriveTalon = new Talon(1);
	RightDriveTalon = new Talon(2);
}
    
void MRTSub::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new MRTCommand());
}
void MRTSub::LDrive(float speed){
	LeftDriveTalon->Set(speed);
}
void MRTSub::RDrive(float speed){
	RightDriveTalon->Set(-speed);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
