#include "OI.h"

OI::OI() {
	// Process operator interface input here.
	joystick1 = new Joystick(1);
	joystick2 = new Joystick(2);
}
