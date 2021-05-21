#include<iostream>

extern int supportCount;
void write_extern()
{
	std::cout << "supportCount:" << supportCount << std::endl;
}