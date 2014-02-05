#ifndef MRTCOMMAND_H
#define MRTCOMMAND_H
#include "WPILib.h"
#include "../CommandBase.h"

/**
 *
 *
 * @author Luke Garceau
 */
class MRTCommand: public CommandBase {
public:
	MRTCommand();
virtual void Initialize();
virtual void Execute();
virtual bool IsFinished();
virtual void End();
virtual void Interrupted();
};

#endif
