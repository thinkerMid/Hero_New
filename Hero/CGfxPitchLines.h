#pragma once
#include "math.h"

class CGfxPitchLines
{
public:
	CGfxPitchLines();
	int Get();

public:
	int field_0;
	float field_4;
	int field_8;
	int field_C;
	float field_10;
	int field_14;
	int field_18;
	int field_1C;
	int field_20;
	float field_24;
	int field_28;
	int field_2C;
	int field_30;
	int field_34;
	float field_38;
	int field_3C;
	int field_40;
	int field_44;
	int field_48;
	float field_4C;
	int field_50;
	int field_54;
	int field_58;
	int field_5C;
	int field_60;
	int field_64;
	int field_68;

	
};


//这个函数 应该是math 里面的c++ 标准函数
float SquareMagnitude(float *a1)
{
	return (float)((float)(a1[1] * a1[1]) + (float)(*a1 * *a1)) + (float)(a1[2] * a1[2]);
}


float Normalize(float *a1, float *a2)
{
	float result; // r0
	float v5; // s0
	float v6; // s2
	float v7; // s4
	float v8; // s0

	result = SquareMagnitude(a2);
	if (result == 0.0)
		v5 = 0.0;
	else
		v5 = 1.0 / sqrtf(result);
	v6 = v5 * *a2;
	v7 = v5 * a2[1];
	v8 = v5 * a2[2];
	*a1 = v6;
	a1[1] = v7;
	a1[2] = v8;
	return result;
}
