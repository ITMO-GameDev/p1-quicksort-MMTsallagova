#include "Allocator.h"

int main() {
	CH test{ 1024 };
	test.init();
	test.dumpStat();
	test.dumpCH();
	void* a1 = test.alloc(100);
	test.dumpStat();
	test.dumpCH();
	test.free(a1);
	test.dumpStat();
	test.dumpCH();
	test.free(a1);
	test.dumpStat();
	test.dumpCH();


	FSA test2{ 256, 5 };
	test2.init();
	test2.dumpStat();
	void* b1 = test2.alloc(100);
	fs.dumpStat();
	void* b2 = test2.alloc(100);
	void* b3 = test2.alloc(100);
	test2.dumpStat();
	test2.free(b2);
	test2.dumpStat();
	void* b4 = test2.alloc(200);
	fs.dumpStat();
	fs.free(b1);
	fs.dumpStat();
	void* b5 = fs.alloc(100);
	test2.dumpStat();
	test2.free(b3);
	test2.dumpStat();
	test2.free(b4);
	test2.dumpStat();
	test2.free(b5);
	test2.dumpStat();

	return 0;
}