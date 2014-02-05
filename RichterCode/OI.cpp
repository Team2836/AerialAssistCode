#include "OI.h"
#include "Commands/DisengageKickerSquaredCommand.h"
#include "Commands/EngageKickerSquaredCommand.h"
#include "KickerMotorBackCommand.h"

OI::OI() {
	// Process operator interface input here.
	joystick3 = new Joystick(3);
	
	button2 = new JoystickButton(joystick3, 2);
	button2->WhileHeld(new KickerMotorBackCommand());
	
	button3 = new JoystickButton(joystick3, 3);
	button3->WhileHeld(new EngageKickerSquaredCommand());
	
	button1 = new JoystickButton(joystick3, 1);
	button1->WhileHeld(new DisengageKickerSquaredCommand());
}
