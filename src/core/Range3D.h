#ifndef __GTA_RANGE3D_H__
#define __GTA_RANGE3D_H__

class CRange3D
{
	CVector range3dmin, range3dmax;
public:
	CRange3D(CVector _min, CVector _max);
	bool IsInRange(CVector vec);
	void DebugShowRange(float, int);
	CVector GetRandomPointInRange();
};

#endif // __GTA_RANGE3D_H__
