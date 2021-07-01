#include "CFTTRenderHelper.h"

CFTTRenderHelper::CFTTRenderHelper(CFTTRenderHelper_InitParams&)
{

}

CFTTRenderHelper::~CFTTRenderHelper()
{
}

VERTICES_INFO* CFTTRenderHelper::LockVertices()
{
	return nullptr;
}

int CFTTRenderHelper::UnlockVertices(int count)
{
	return 1;
}

void CFTTRenderHelper::SetVertices(void const*, int)
{
}

void CFTTRenderHelper::LockIndices()
{
}

void CFTTRenderHelper::UnlockIndices(int)
{
}

void CFTTRenderHelper::SetIndices(short const*, int)
{
}

void CFTTRenderHelper::Render(CFTTMatrix32 const* pMatrix, int a3, int a4, int a5)
{
}
