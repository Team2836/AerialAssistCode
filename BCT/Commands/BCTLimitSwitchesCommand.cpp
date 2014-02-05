#include "BCTLimitSwitchesCommand.h"

BCTLimitSwitchesCommand::BCTLimitSwitchesCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(limitswitches);
	
}

// Called just before this Command runs the first time
void BCTLimitSwitchesCommand::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void BCTLimitSwitchesCommand::Execute() {
	limitswitches->ServoMotorMethodForward();
	
}

// Make this return true when this Command no longer needs to run execute()
bool BCTLimitSwitchesCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void BCTLimitSwitchesCommand::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BCTLimitSwitchesCommand::Interrupted() {
	limitswitches->ServoMotorStop();
}
