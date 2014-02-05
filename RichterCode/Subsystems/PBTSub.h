47
  
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
public:
	PBTSub();
	void InitDefaultCommand();
};

#endif
