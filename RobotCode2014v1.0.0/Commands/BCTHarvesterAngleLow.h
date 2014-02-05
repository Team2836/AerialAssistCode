#ifndef BCTHARVESTERANGLELOW_H
#define BCTHARVESTERANGLELOW_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Patrick
 */
class BCTHarvesterAngleLow: public CommandBase {
public:
	BCTHarvesterAngleLow();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
