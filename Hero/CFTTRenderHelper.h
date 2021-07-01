#pragma once
#include "CFTTRenderHelper_InitParams.h"
#include "CFTTGraphicsBuffer.h"
#include "VERTICES_INFO.h"
#include "CFTTMatrix32.h"


class CFTTRenderHelper {
public:
	CFTTRenderHelper(CFTTRenderHelper_InitParams&);                   //0020123C
	~CFTTRenderHelper();                                                //002012AC
	static VERTICES_INFO* LockVertices();                                     //002012E0
	static int UnlockVertices(int count);                                    //002012EE
	void SetVertices(void const*, int);                               //00201304
	void LockIndices();                                                //00201320
	void UnlockIndices(int);                                           //0020132E
	void SetIndices(short const*, int);                              //00201342
	void Render(CFTTMatrix32 const* pMatrix, int a3, int a4, int a5);  //0020135C

	FTTPRIMTYPE eFTTPRIMTYPE_0;
	int field_4;
	int field_8;
	int len_indices_C;
	CFTTGraphicsBuffer* pGraphicsBuffer_10;
	CFTTGraphicsBuffer* pGraphicsBuffer_14;
	bool byte_18;
	int field_1C;
	int vert_size_20;
	int vert_count_24;
	int len_Indices_28;
};

