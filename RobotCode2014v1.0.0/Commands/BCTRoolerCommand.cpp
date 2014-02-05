#include "BCTRoolerCommand.h"

BCTRoolerCommand::BCTRoolerCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(bctrooler);
}

// Called just before this Command runs the first time
void BCTRoolerCommand::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void BCTRoolerCommand::Execute() {
	bctrooler->DriveFeeder(oi->joystick3->GetY());
	
}

// Make this return true when this Command no longer needs to run execute()
bool BCTRoolerCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void BCTRoolerCommand::End() {
	bctrooler->DriveFeeder(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BCTRoolerCommand::Interrupted() {
}
