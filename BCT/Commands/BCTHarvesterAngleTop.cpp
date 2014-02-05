#include "BCTHarvesterAngleTop.h"

BCTHarvesterAngleTop::BCTHarvesterAngleTop() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(bctharvesterangle);
}

// Called just before this Command runs the first time
void BCTHarvesterAngleTop::Initialize() {
	
	
}

// Called repeatedly when this Command is scheduled to run
void BCTHarvesterAngleTop::Execute() {
	bctharvester->TopValue();
	
}

// Make this return true when this Command no longer needs to run execute()
bool BCTHarvesterAngleTop::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void BCTHarvesterAngleTop::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BCTHarvesterAngleTop::Interrupted() {
}
