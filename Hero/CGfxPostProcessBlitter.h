#pragma once
#include "CGfxPostProcess.h"
class CGfxPostProcessBlitter :public CGfxPostProcess
{
public:
	virtual ~CGfxPostProcessBlitter();



	CGfxPostProcessBlitter* Next;
};



