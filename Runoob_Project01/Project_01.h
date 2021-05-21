#pragma once
#include <iostream>
#include<stdio.h>
#include<vector>
#include<string>

// 变量声明
extern int a, b;
extern int c;
extern float f;

//预处理
#define LENGTH 10
#define WIDTH 5

//const常量
const float PI = 3.1416;
const int R = 4;

//mutable
thread_local int x;
class X
{
	static thread_local string s;//类的static成员变量
};
thread_local string X::s;

void foo()
{
	thread_local vector<int> v;
}