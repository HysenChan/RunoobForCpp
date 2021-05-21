#include "Project_01.h"
using namespace std;

//extern
void externFunc()
{
	//变量定义
	int a, b;
	int c;
	float f;

	//实际初始化
	a = 10;
	b = 20;
	c = a + b;

	cout << c << endl;

	f = 70.0 / 3.0;
	cout << f << endl;
}

int supportCount;
extern void write_extern();
void externForSupport()
{
	supportCount = 5;
	write_extern();
}

void displayArea(string name, float area)
{
	cout << name << " area is:" << area << endl;
}

//define
void defineFunc()
{
	int area;
	area = LENGTH * WIDTH;
	displayArea("Rectangle", area);
}

//const
void constFunc()
{
	int area;
	area = R * R * PI;
	displayArea("Circle", area);
}

//unsigned和int
void twoDifferentInt()
{
	short int i;//有符号短整数
	short unsigned int j;//无符号短整数
	j = 50000;
	i = j;
	cout << i << " " << j;
}

//static变量
static int varCount = 10;
void func()
{
	static int i = 5;
	i++;
	cout << "变量i为：" << i;
	cout << "，变量count为：" << varCount << endl;
}

void staticFunc()
{
	while (varCount--)
	{
		func();
	}
}

int main()
{
	//externFunc();
	//defineFunc();
	//twoDifferentInt();
	//staticFunc();
	externForSupport();
	return 0;
}