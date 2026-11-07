#include "common.h"
#include "Range3D.h"
#include "General.h"

CRange3D::CRange3D(CVector _min, CVector _max) : range3dmin(_min), range3dmax(_max) {}

bool
CRange3D::IsInRange(CVector vec)
{
	return range3dmin.x < vec.x && range3dmax.x > vec.x 
	&& range3dmin.y < vec.y && range3dmax.y > vec.y 
	&& range3dmin.z < vec.z && range3dmax.z > vec.z;
}

void
CRange3D::DebugShowRange(float, int)
{
}

CVector
CRange3D::GetRandomPointInRange()
{
	int distX = Abs(range3dmax.x - range3dmin.x);
	int distY = Abs(range3dmax.y - range3dmin.y);
	int distZ = Abs(range3dmax.z - range3dmin.z);

	float outX = CGeneral::GetRandomNumber() % distX + range3dmin.x;
	float outY = CGeneral::GetRandomNumber() % distY + range3dmin.y;
	float outZ = CGeneral::GetRandomNumber() % distZ + range3dmin.z;

	return CVector(outX, outY, outZ);
}
