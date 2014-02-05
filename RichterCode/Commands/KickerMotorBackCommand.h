#ifndef KICKERMOTORBACKCOMMAND_H
#define KICKERMOTORBACKCOMMAND_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Administrator
 */
class KickerMotorBackCommand: public CommandBase {
public:
	KickerMotorBackCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
