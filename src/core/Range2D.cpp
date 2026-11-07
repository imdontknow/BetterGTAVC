#include "common.h"
#include "Range2D.h"
#include "General.h"

CRange2D::CRange2D(CVector2D _min, CVector2D _max) : range2dmin(_min), range2dmax(_max) {}

bool
CRange2D::IsInRange(CVector2D vec)
{
	return range2dmin.x < vec.x && range2dmax.x > vec.x 
	&& range2dmin.y < vec.y && range2dmax.y > vec.y;
}

void
CRange2D::DebugShowRange(float, int)
{
}

CVector2D
CRange2D::GetRandomPointInRange()
{
	int distX = Abs(range2dmax.x - range2dmin.x);
	int distY = Abs(range2dmax.y - range2dmin.y);

	float outX = CGeneral::GetRandomNumber() % distX + range2dmin.x;
	float outY = CGeneral::GetRandomNumber() % distY + range2dmin.y;

	return CVector2D(outX, outY);
}
