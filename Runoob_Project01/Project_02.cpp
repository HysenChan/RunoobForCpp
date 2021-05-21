#include<iostream>

using namespace std;

//Pointer
void PointFunc()
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

int main()
{
	PointFunc();

	return 0;
}