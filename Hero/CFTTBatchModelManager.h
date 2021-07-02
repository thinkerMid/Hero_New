#pragma once
#include "CGfxPlayer.h"
#include "CFTTBatchModelBin.h"


class CFTTBatchModelManager
{
public:
	CFTTBatchModelManager(int, bool, int, unsigned int, bool, bool);

	int SetFlushOnFullCB(int(CGfxPlayer::*func)(), int);

	int  AddBin(CFTTBatchModelBin *BatchModel_Info, int, unsigned int, char, int, bool, bool);
	
public:	
	char field_0[1259];
	char field_4EB;
};

