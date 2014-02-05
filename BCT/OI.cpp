#include "OI.h"
#include "Commands/BCTHarvesterAngleTop.h"
#include "Commands/BCTHarvesterAngleMed.h"
#include "Commands/BCTHarvesterAngleLow.h"

OI::OI() {
	// Process operator interface input here.
	joystick3 = new Joystick(3);
	
	button7 = new JoystickButton(joystick3, 7);
	button7->WhenPressed(new BCTHarvesterAngleTop());
	
	button9 = new JoystickButton(joystick3, 9);
	button9->WhenPressed(new BCTHarvesterAngleMed());
	
	button11 = new JoystickButton(Joystick3, 11);
	button11->WhenPressed(new BCTHarvesterAngleLow());
	
}
