#ifndef BCTHARVESTERANGLETOP_H
#define BCTHARVESTERANGLETOP_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Patrick
 */
class BCTHarvesterAngleTop: public CommandBase {
public:
	BCTHarvesterAngleTop();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
