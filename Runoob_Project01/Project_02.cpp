#include<iostream>
#include "Project_02.h"

using namespace std;

//Pointer
void pointFunc()
{
	int var = 20;//实际变量的声明
	int* ip;//指针变量的声明
	ip = &var;
	
	cout << "Value of var variable:";
	cout << var << endl;//20

	//输出在指针变量中存储的地址
	cout << "Address stored in ip variable:";
	cout << ip << endl;//与&*ip相同
	cout << &ip << endl;//ip自身的地址
	cout << &*ip << endl;

	//输出指针中地址的值
	cout << "Value of *ip variable:";
	cout << *ip << endl;//20
}

const int MAX = 3;

void arrayIncrease(int*& ptr, int  var[3],const int &MAX)
{
	//指针中的数组地址
	ptr = var;
	cout << "Increase:" << endl;
	for (int i = 0; i < MAX; i++)
	{
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;

		cout << "Values of var[" << i << "] = ";
		cout << *ptr << endl;

		ptr++;//移动到下一个位置
	}
}

void arrayDecrease(int*& ptr, int  var[3], const int& MAX)
{
	//指针中最后一个元素的地址
	ptr = &var[MAX - 1];
	cout << "Decrease:" << endl;
	for (int i = MAX; i > 0; i--)
	{
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;

		cout << "Values of var[" << i << "] = ";
		cout << *ptr << endl;

		ptr--;//移动到下一个位置
	}
}

void pointerArray()
{
	int var[MAX] = { 10,100,200 };
	int* ptr;

	arrayIncrease(ptr, var,MAX);//递增
	arrayDecrease(ptr, var, MAX);//递减
}

int main()
{
	//pointFunc();
	pointerArray();
	return 0;
}