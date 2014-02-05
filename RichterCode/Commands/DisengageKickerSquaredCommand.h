#ifndef DISENGAGEKICKERSQUAREDCOMMAND_H
#define DISENGAGEKICKERSQUAREDCOMMAND_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Richter35
 */
class DisengageKickerSquaredCommand: public CommandBase {
public:
	DisengageKickerSquaredCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
