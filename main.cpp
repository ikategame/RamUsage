// RamUsage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "includes.h"
class my_class
{
public:
	MEMORYSTATUSEX memInfo;
};

void RamUsage()
{
	my_class e;
	e.memInfo.dwLength = sizeof(MEMORYSTATUSEX);
	GlobalMemoryStatusEx(&e.memInfo);
	while (true)
	{
		std::cout << "MEM: " << e.memInfo.dwMemoryLoad << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}

int main()
{
	RamUsage();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
