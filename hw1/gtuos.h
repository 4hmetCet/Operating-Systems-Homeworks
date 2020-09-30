#ifndef H_GTUOS
#define H_GTUOS

#include "8080emuCPP.h"

#define PRINT_B    4
#define PRINT_MEM  3
#define READ_B     7
#define READ_MEM   2
#define PRINT_STR  1
#define READ_STR   8

#define PRINT_B_CYCLES    10
#define PRINT_MEMB_CYCLES 10
#define READ_B_CYCLES     10
#define READ_MEM_CYCLES   10
#define PRINT_STR_CYCLES_PER_CHAR  10
#define READ_STR_CYCLES_PER_CHAR   10


class GTUOS{
	public:
		GTUOS();
		uint64_t handleCall(const CPU8080 & cpu);
		bool writeMemoryToFile(const CPU8080 & cpu);
	private:
		uint64_t getCyclesTime();
		uint64_t cycles;

};

#endif
