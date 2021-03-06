#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/ExampleSubsystem.h"
#include "OI.h"
#include "Subsystems/BCTHarvesterAngle.h"

/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	 void init();
	// Create a single  instance of all of your subsystems
	 ExampleSubsystem *examplesubsystem;
	 BCTHarvesterAngle *bctharvesterangle;
	 OI *oi;
};

#endif
