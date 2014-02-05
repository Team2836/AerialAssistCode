#include "OI.h"
#include "Commands/DisengageKickerSquaredCommand.h"
#include "Commands/EngageKickerSquaredCommand.h"
#include "Commands/KickerMotorBackCommand.h"
#include "Commands/BCTHarvesterAngleTop.h"
#include "Commands/BCTHarvesterAngleMed.h"
#include "Commands/BCTHarvesterAngleLow.h"

OI::OI() {
	// Process operator interface input here.
	joystick1 = new Joystick(1);
	joystick2 = new Joystick(2);
	joystick3 = new Joystick(3);
		
		button2 = new JoystickButton(joystick3, 2);
		button2->WhileHeld(new KickerMotorBackCommand());
		
		button3 = new JoystickButton(joystick3, 3);
		button3->WhileHeld(new EngageKickerSquaredCommand());
		
		button1 = new JoystickButton(joystick3, 1);
		button1->WhileHeld(new DisengageKickerSquaredCommand());
		
		button7 = new JoystickButton(joystick3, 7);
		button7->WhenPressed(new BCTHarvesterAngleTop());
			
		button9 = new JoystickButton(joystick3, 9);
		button9->WhenPressed(new BCTHarvesterAngleMed());
			
		button11 = new JoystickButton(joystick3, 11);
		button11->WhenPressed(new BCTHarvesterAngleLow());
}
