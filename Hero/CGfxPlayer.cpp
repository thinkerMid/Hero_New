#include "CGfxPlayer.h"
#include "CPlayerShader.h"
#include "CFTTBatchModelManager.h"
#include "CFTTBatchModelBin.h"
#include "VERTICES_INFO.h"

CFTTBatchModelManager *GFXPLAYER_pBatch;
int InitBatchManagerBuf[50];
CFTTBatchModelBin *GFXPLAYER_spBatchBins[8];
GFXSPEC_pSpec *GFXSPEC_pSpecification;
int GFXPLAYER_spBatchBinMats[2] = { 0xFFFFFFFF, 0xFFFFFFFF };
int s_ePerCharacterMat[8] = { 2, 2, 2, 2, 0, 1, 2, 2 };

typedef int(*pfun)() ;

int CGfxPlayer::InitBatchManager()
{
	CFTTBatchModelManager *BatchModel_Info; // r0
	int v2; // r7
	CFTTBatchModelManager *v3; // r0
	int iindex; // r8
	unsigned int i; // r9
	int v6; // r0
	CFTTBatchModelBin *BatchModel_Info_A; // r0
	unsigned char *v8; // r10
	int v9; // r0
	char v10; // r6
	unsigned int v11; // r3
	char v12; // r4
	int v13; // r2
	int v14; // r6
	bool v16; // [sp+Ch] [bp-B4h]
	CFTTBatchModelBin *BatchModel_Info_B; // [sp+54h] [bp-6Ch]
	float v18[13]; // [sp+8Ch] [bp-34h] BYREF

	//BatchModel_Info = (CFTTBatchModelManager *)operator new(0x4EC, 0, 0);
	
	v2 = 2;
	BatchModel_Info = new CFTTBatchModelManager(8, 1, 0x10000, 0x2FFFFFu, 0, 1);
	
	GFXPLAYER_pBatch = BatchModel_Info;

	int(CGfxPlayer::*func)() = &CGfxPlayer::FlushPlayerSkins;

	BatchModel_Info->SetFlushOnFullCB(func, 0);
	iindex = 1;
	for (i = 0; i != 0x20; i += 4)
	{
		v6 = InitBatchManagerBuf[v2 - 2];
		if (v6 == 0xFFFFFFFF)
			BatchModel_Info_A = 0;
		else
			BatchModel_Info_A = GFXPLAYER_spBatchBins[v6];
		BatchModel_Info_B = BatchModel_Info_A;
		v8 = (unsigned char *)&InitBatchManagerBuf[5 * i / 4];
		v18[0] = 0.0;
		v18[1] = 0.0;
		v18[2] = 0.0;
		v18[3] = 1.0;
		v9 = CPlayerShader::CreateMat(CPlayerShader::s_tInstance, iindex, v18);
		v10 = v8[0xD];
		v11 = InitBatchManagerBuf[v2];
		v12 = v8[0xC];
		v13 = v8[1];
		GFXPLAYER_spBatchBinMats[i / 4] = v9;
		v16 = v10;
		v14 = 0;
		if ((unsigned int)(s_ePerCharacterMat[i / 4] - 1) < 2)
			v14 = 0x21;
		++iindex;
		v2 += 5;
		GFXPLAYER_spBatchBins[i / 4] = (CFTTBatchModelBin *)BatchModel_Info->AddBin(BatchModel_Info_B,v13,
			v11,
			v9,
			v14,
			v12,
			v16);
	}
	return CPlayerShader::SetQuality((int)&CPlayerShader::s_tInstance, GFXSPEC_pSpecification->field_44);
}

int CGfxPlayer::FlushPlayerSkins()
{
	return 0;
}

