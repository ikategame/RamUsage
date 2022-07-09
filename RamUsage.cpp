#include "includes.h"



void RamUsage()
{
	my_class myclass;
	myclass.memInfo.dwLength = sizeof(MEMORYSTATUSEX);
	GlobalMemoryStatusEx(&myclass.memInfo);
	while (true)
	{
		std::cout << "MEM: " << myclass.memInfo.dwMemoryLoad << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}