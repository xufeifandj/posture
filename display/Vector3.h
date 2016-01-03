
#ifndef __VECTOR_H__
#define __VECTOR_H__

#include "stdafx.h"

/** ������ */
class Vector3
{
public:
	/** ���캯�� */
	Vector3()  { x = 0.0; y = 0.0; z = 0.0; }
	Vector3(float xx, float yy, float zz)
	{
		x = xx;
		y = yy;
		z = zz;
	}
	Vector3(const Vector3& vec)
	{
		x = vec.x;
		y = vec.y;
		z = vec.z;
	}

	/** ��Ա���� */
	inline float length();                       /**< ������������ */
	Vector3 normalize();                         /**< ��λ������ */
	float dotProduct(const Vector3& v);          /**< ������ */
	Vector3 crossProduct(const Vector3& v);      /**< ������ */

	/** ���ز����� */
	Vector3 operator + (const Vector3& v);
	Vector3 operator - (const Vector3& v);
	Vector3 operator * (float scale);
	Vector3 operator / (float scale);
	Vector3 operator - ();

public:
	float x, y, z;

};

#endif //__VECTOR_H__