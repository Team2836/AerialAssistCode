#include "BCTHarvesterAngleMed.h"

BCTHarvesterAngleMed::BCTHarvesterAngleMed() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(bctharvesterangle);
}

// Called just before this Command runs the first time
void BCTHarvesterAngleMed::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void BCTHarvesterAngleMed::Execute() {
	bctharvesterangle->MedValue();
	
}

// Make this return true when this Command no longer needs to run execute()
bool BCTHarvesterAngleMed::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void BCTHarvesterAngleMed::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BCTHarvesterAngleMed::Interrupted() {
}
