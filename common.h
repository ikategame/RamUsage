#include "includes.h"

class my_class
{
public:
	MEMORYSTATUSEX memInfo;

	void paint(int x)
	{
		std::cout << x << std::endl;
	}
};