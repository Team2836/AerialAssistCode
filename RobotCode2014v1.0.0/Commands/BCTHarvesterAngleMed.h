#ifndef BCTHARVESTERANGLEMED_H
#define BCTHARVESTERANGLEMED_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Patrick
 */
class BCTHarvesterAngleMed: public CommandBase {
public:
	BCTHarvesterAngleMed();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
