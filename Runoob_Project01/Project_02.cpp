#include<iostream>
#include "Project_02.h"

using namespace std;

//Pointer
void pointFunc()
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

const int MAX = 3;

void arrayIncrease(int*& ptr, int  var[3],const int &MAX)
{
	//ָ���е������ַ
	ptr = var;
	cout << "Increase:" << endl;
	for (int i = 0; i < MAX; i++)
	{
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;

		cout << "Values of var[" << i << "] = ";
		cout << *ptr << endl;

		ptr++;//�ƶ�����һ��λ��
	}
}

void arrayDecrease(int*& ptr, int  var[3], const int& MAX)
{
	//ָ�������һ��Ԫ�صĵ�ַ
	ptr = &var[MAX - 1];
	cout << "Decrease:" << endl;
	for (int i = MAX; i > 0; i--)
	{
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;

		cout << "Values of var[" << i << "] = ";
		cout << *ptr << endl;

		ptr--;//�ƶ�����һ��λ��
	}
}

void pointerArray()
{
	int var[MAX] = { 10,100,200 };
	int* ptr;

	arrayIncrease(ptr, var,MAX);//����
	arrayDecrease(ptr, var, MAX);//�ݼ�
}

void twoPointerFunc()
{
	int var;
	int* ptr;
	int** pptr;

	var = 3000;

	//��ȡvar�ĵ�ַ
	ptr = &var;

	//ʹ�������&��ȡptr�ĵ�ַ
	pptr = &ptr;

	//ʹ��pptr��ȡֵ
	cout << "varֵΪ��" << var << endl;
	cout << "*ptrֵΪ��" << *ptr << endl;
	cout << "**pptrֵΪ��" << **pptr << endl;

	//��ȡ��ַ  pptr->ptr->var;	pptr=&ptr;	ptr=&var
	//����2����ַ��ͬ
	cout << "&var��ַΪ��" << &var << endl;
	cout << "ptr��ַΪ��" << ptr<< endl;
	//����2����ַ��ͬ
	cout << "&ptr��ַΪ��" << &ptr << endl;
	cout << "pptr��ַΪ��" << pptr << endl;
}

int main()
{
	//pointFunc();
	//pointerArray();
	twoPointerFunc();
	return 0;
}