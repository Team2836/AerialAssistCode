#ifndef HARVESTERANGLE_H
#define HARVESTERANGLE_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "AnalogPotentiometer.h"

/**
 *
 *
 * @author Patrick
 */
class BCTHarvesterAngle: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	
	DigitalInput *LimitSwitch1;
	DigitalInput *LimitSwitch2;
	Talon *BCTTalonAngle;
	AnalogChannel *Pots1;
	
public:
	BCTHarvesterAngle();
	void InitDefaultCommand();
	void TopValue();
	void MedValue();
	void LowValue();
};

#endif
