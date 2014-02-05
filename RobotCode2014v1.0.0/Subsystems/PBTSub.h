#ifndef PBTSUB_H
#define PBTSUB_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Richter35
 */
class PBTSub: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Talon *PBTTalon;
	DigitalInput *LimitSwitch1;
	DigitalInput *LimitSwitch2;
public:
	PBTSub();
	void InitDefaultCommand();
	void PBTForwardMethod();
	void PBTBackwardMethod();
};

#endif
