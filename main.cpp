#include <iostream>
#include <Windows.h>
#include <thread>

void RamUsage()
{
	while (true)
	{
		MEMORYSTATUSEX memInfo;
		memInfo.dwLength = sizeof(MEMORYSTATUSEX);
		GlobalMemoryStatusEx(&memInfo);
		std::cout << "MEM: " << memInfo.dwMemoryLoad << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}

int main()
{
	SetConsoleTitle("IKategame");
	RamUsage();
}


