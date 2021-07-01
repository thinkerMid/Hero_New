#include "CGfxPostProcess.h"
#include "CFTTGraphicsDevice.h"

CFTTGraphicsDevice  *g_pGraphicsDevice;


CGfxPostProcess:: ~CGfxPostProcess()
{
	__debugbreak();//IDA 反编译出来就是这个东西

}

int CGfxPostProcess::SetupFullScreenQuadVerts(CFTTRenderHelper* a2, unsigned int a3)
{
	VERTICES_INFO* VerticesInfo; // r6

	VerticesInfo = (VERTICES_INFO*)CFTTRenderHelper::LockVertices();
	VerticesInfo->field_0 = 0;
	VerticesInfo->field_4 = 0;
	VerticesInfo->field_8 = 0.5;
	VerticesInfo->field_10 = 0;
	VerticesInfo->field_14 = 0;
	VerticesInfo->field_C = g_pGraphicsDevice->ARGBToPlatformU32_2(a3);
	VerticesInfo->field_18 = 1.0;
	VerticesInfo->field_1C = 0;
	VerticesInfo->field_20 = 0.5;
	VerticesInfo->field_28 = 1.0;
	VerticesInfo->field_2C = 0;
	VerticesInfo->field_24 = g_pGraphicsDevice->ARGBToPlatformU32_2(a3);
	VerticesInfo->field_30 = 0;
	VerticesInfo->field_34 = 1.0;
	VerticesInfo->field_38 = 0.5;
	VerticesInfo->field_40 = 0.0078125;
	VerticesInfo->field_3C = g_pGraphicsDevice->ARGBToPlatformU32_2(a3);
	VerticesInfo->field_48 = 1.0;
	VerticesInfo->field_4C = 1.0;
	VerticesInfo->field_50 = 0.5;
	VerticesInfo->field_58 = 1.0;
	VerticesInfo->field_5C = 1.0;
	VerticesInfo->field_54 = g_pGraphicsDevice->ARGBToPlatformU32_2(a3);
	return CFTTRenderHelper::UnlockVertices(0xFFFFFFFF);



	return 0;
}
