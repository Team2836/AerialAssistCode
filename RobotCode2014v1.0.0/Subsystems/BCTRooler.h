#ifndef BCTROOLER_H
#define BCTROOLER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Patrick
 */
class BCTRooler: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Talon *RoolerTalon;
public:
	BCTRooler();
	void InitDefaultCommand();
	void DriveFeeder(float FeederSpeed);
};
//The quick brown fox jumped over the lazy dog.
#endif
