#pragma once
#include <iostream>
#include<stdio.h>
#include<vector>
#include<string>

// ��������
extern int a, b;
extern int c;
extern float f;

//Ԥ����
#define LENGTH 10
#define WIDTH 5

//const����
const float PI = 3.1416;
const int R = 4;

//mutable
thread_local int x;
class X
{
	static thread_local string s;//���static��Ա����
};
thread_local string X::s;

void foo()
{
	thread_local vector<int> v;
}