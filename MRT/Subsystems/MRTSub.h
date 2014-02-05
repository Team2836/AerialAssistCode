#ifndef MRTSUB_H
#define MRTSUB_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Luke Garceau
 */
class MRTSub: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Talon *LeftDriveTalon;
	Talon *RightDriveTalon;
public:
	MRTSub();
	void InitDefaultCommand();
	void LDrive (float speed);
	void RDrive (float speed);
};

#endif
