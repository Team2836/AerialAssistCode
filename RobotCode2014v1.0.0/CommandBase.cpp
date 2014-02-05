#include "CommandBase.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Commands/Scheduler.h"
#include "Subsystems/MRTSub.h"
#include "Subsystems/PBTSub.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
ExampleSubsystem* CommandBase::examplesubsystem = NULL;
OI* CommandBase::oi = NULL;
MRTSub* CommandBase::mrtsub = NULL;
PBTSub* CommandBase::pbtsub =NULL;
BCTHarvesterAngle* CommandBase::bctharvesterangle = NULL;
BCTRooler* CommandBase::bctrooler = NULL;



void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	examplesubsystem = new ExampleSubsystem();
	mrtsub = new MRTSub();
	pbtsub = new PBTSub();
	bctharvesterangle = new BCTHarvesterAngle();
	bctrooler = new BCTRooler();
	oi = new OI();
}
