#include "core/common.h"
class CScript
{
#if _64BITS
	int64 NewThread(int64 hash);

#else
	int32 NewThread(int32 hash);
#endif // _64BITS
	
public:
	
};

#define OPCODE_REGISTER_RELEASE(name,hash,func)\
		#name;\
		##hash;\
		return(func);
#define OPCODE_REGISTER_UNUSED