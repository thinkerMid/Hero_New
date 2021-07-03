#include "CGfxPitchLinePatch.h"
#include "defs.h"

int CGfxPitchLinePatch::IsBlank()
{
	return LOBYTE(this->field_5C);
}


int CGfxPitchLinePatch::GetTransform()
{
	return LOBYTE(this->field_48);
}

int CGfxPitchLinePatch::GetUV(float *a2, float *a3, float *a4, int *a5)
{
	int Ret; // r0

	*a2 = this->field_4C;
	*a3 = this->field_50;
	*a4 = this->field_54;
	Ret = this->field_58;
	*a5 = Ret;
	return Ret;
}


CGfxPitchLinePatch * CGfxPitchLinePatch::GetDimensions(CGfxPitchLinePatch *result, CGfxPitchLines *a2)
{
	double v2; // d16

	v2 = a2->field_14;
	result->field_8 = a2->field_1C;
	result->field_0 = v2;
	return result;
}


CGfxPitchLines *__fastcall CGfxPitchLines::GetPatch( unsigned int a2, unsigned int a3)
{
	return (CGfxPitchLines *)(this->field_0 + 0x60 * (unsigned int)(float)((float)a3 + (float)((float)a2 * 62.0)));
}


CGfxPitchLinePatch * CGfxPitchLinePatch::GetCentre(CGfxPitchLines *a2)
{
	double v2; // d16

	v2 = a2->field_8;
	this->field_8 = a2->field_10;
	this->field_0 = v2;
	return this;
}
