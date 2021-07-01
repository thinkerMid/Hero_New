#include "CGfxPostProcessBlitter.h"

CGfxPostProcessBlitter* g_pCGfxPostProcessBlitter;


CGfxPostProcessBlitter::~CGfxPostProcessBlitter()
{
	CGfxPostProcessBlitter** ppCGfxPostProcessBlitter; // r1
	CGfxPostProcessBlitter* v2; // r3

	ppCGfxPostProcessBlitter = &g_pCGfxPostProcessBlitter;
	
	while (1)
	{
		v2 = *ppCGfxPostProcessBlitter;
		if (*ppCGfxPostProcessBlitter == this)
			break;
		ppCGfxPostProcessBlitter = &this->Next;
		if (!v2)
			return;
	}
	*ppCGfxPostProcessBlitter = this->Next;
}
