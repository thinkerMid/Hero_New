#include "CFTTBatchModelManager.h"
#include "CFTTBatchModelBin.h"
#include "CGfxPlayer.h"

typedef int(*pfun)();

CFTTBatchModelManager::CFTTBatchModelManager(int, bool, int, unsigned int, bool, bool)
{
	//do somethings
}

int CFTTBatchModelManager::SetFlushOnFullCB(int(CGfxPlayer::*func)(), int)
{

	return 0;
}

int CFTTBatchModelManager::AddBin(CFTTBatchModelBin * BatchModel_Info, int, unsigned int, char, int, bool, bool)
{
	return 0;
}




