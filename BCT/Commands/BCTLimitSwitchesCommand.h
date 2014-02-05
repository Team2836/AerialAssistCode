#ifndef BCTLIMITSWITCHESCOMMAND_H
#define BCTLIMITSWITCHESCOMMAND_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Patrick
 */
class BCTLimitSwitchesCommand: public CommandBase {
public:
	BCTLimitSwitchesCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
