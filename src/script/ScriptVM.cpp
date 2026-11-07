#include "Script.h"
#include "ScriptVars.h"

#if _64BITS
int64
CScript::NewThread(int64 hash)
{ 
	return int64(); 
}
#else
int32 CScript::NewThread(int32 hash)
{ 
	return int64(); 
}
#endif