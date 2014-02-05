#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:

public:
	OI();
	Joystick *joystick1;
	Joystick *joystick2;
	Joystick *joystick3;
		JoystickButton *button1;
		JoystickButton *button2;
		JoystickButton *button3;
		JoystickButton *button7;//harvester angle top
		JoystickButton *button9;//harvester angle med
		JoystickButton *button11;//harvester angle low
};

#endif
