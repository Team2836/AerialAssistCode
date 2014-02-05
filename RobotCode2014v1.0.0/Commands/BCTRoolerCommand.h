#ifndef BCTROOLERCOMMAND_H
#define BCTROOLERCOMMAND_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Patrick
 */
class BCTRoolerCommand: public CommandBase {
public:
	BCTRoolerCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
