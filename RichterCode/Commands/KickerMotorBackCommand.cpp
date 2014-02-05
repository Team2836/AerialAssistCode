#include "KickerMotorBackCommand.h"

KickerMotorBackCommand::KickerMotorBackCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void KickerMotorBackCommand::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void KickerMotorBackCommand::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool KickerMotorBackCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void KickerMotorBackCommand::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void KickerMotorBackCommand::Interrupted() {
}
