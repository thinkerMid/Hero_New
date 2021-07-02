#include "CGfxPitchLines.h"
#include "CCircle2dShader.h"
#include "CPlayerShader.h"




CGfxPitchLines::CGfxPitchLines()
{
	this->field_10 = 2.0;
	this->field_58 = 0;
	*(double *)&this->field_14 = 0LL;
	*(double *)&this->field_1C = 0LL;
	this->field_24 = 2.0;
	*(double *)&this->field_28 = 0LL;
	*(double *)&this->field_30 = 0LL;
	this->field_38 = 2.0;
	*(double *)&this->field_3C = 0LL;
	*(double *)&this->field_44 = 0LL;
	this->field_4C = 2.0;
	*(double *)&this->field_0 = 0LL;
	*(double *)&this->field_8 = 0LL;
	this->field_5C = CCircle2dShader::CreateMat();

}

int CGfxPitchLines::Get()
{
	return CPlayerShader::ms_pInstance;//这个不知道是CGfxPitchLines类的成员变量 还是一个静态变量  
}
