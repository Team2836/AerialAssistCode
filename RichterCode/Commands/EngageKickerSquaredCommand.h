#ifndef ENGAGEKICKERSQUAREDCOMMAND_H
#define ENGAGEKICKERSQUAREDCOMMAND_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Richter35
 */
class EngageKickerSquaredCommand: public CommandBase {
public:
	EngageKickerSquaredCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
