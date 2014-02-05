#include "MRTCommand.h"

MRTCommand::MRTCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(mrtsub);
}

// Called just before this Command runs the first time
void MRTCommand::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void MRTCommand::Execute() {
	mrtsub->LDrive(oi->joystick1->GetY());
	mrtsub->RDrive(oi->joystick2->GetY());
}

// Make this return true when this Command no longer needs to run execute()
bool MRTCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void MRTCommand::End() {
	mrtsub->LDrive(0);
	mrtsub->RDrive(0);
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MRTCommand::Interrupted() {
}
