#pragma once
#include "CGfxplayer.h"

namespace CPlayerShader
{


	int SetQuality(int A1, int A2);
	int CreateMat(int instance, int index, float*);
	//int InitBatchManager(); 这个函数应该是在父类中实现的

	static int s_tInstance;
	static int ms_pInstance;
};

