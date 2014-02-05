#include "BCTHarvesterAngleLow.h"

BCTHarvesterAngleLow::BCTHarvesterAngleLow() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(bctharvesterangle);
}

// Called just before this Command runs the first time
void BCTHarvesterAngleLow::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void BCTHarvesterAngleLow::Execute() {
	bctharvesterangle->LowValue();
	
}

// Make this return true when this Command no longer needs to run execute()
bool BCTHarvesterAngleLow::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void BCTHarvesterAngleLow::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BCTHarvesterAngleLow::Interrupted() {
	
}
