#include<iostream>

using namespace std;

//Pointer
void PointFunc()
{
	int var = 20;//ʵ�ʱ���������
	int* ip;//ָ�����������
	ip = &var;
	
	cout << "Value of var variable:";
	cout << var << endl;//20

	//�����ָ������д洢�ĵ�ַ
	cout << "Address stored in ip variable:";
	cout << ip << endl;//��&*ip��ͬ
	cout << &ip << endl;//ip����ĵ�ַ
	cout << &*ip << endl;

	//���ָ���е�ַ��ֵ
	cout << "Value of *ip variable:";
	cout << *ip << endl;//20
}

int main()
{
	PointFunc();

	return 0;
}