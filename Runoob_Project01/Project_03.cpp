#include<iostream>

using namespace std;

void simpleQuote()
{
	//声明简单的变量
	int i;
	double d;

	//声明引用变量
	int& r = i;
	double& s = d;

	i = 5;
	cout << "i:" << i << endl;
	cout << "r:" << r << endl;

	d = 11.7;
	cout << "d:" << d << endl;
	cout << "s:" << s << endl;
}

void swap(int& x, int& y);

void quoteForParam()
{
	int a = 10;
	int b = 20;

	cout << "a for origin:" << a << endl;
	cout << "b for origin" << b << endl;

	swap(a, b);
	cout << "a after swap:" << a << endl;
	cout << "b after swap" << b << endl;
}

int main()
{
	//simpleQuote();
	quoteForParam();

	return 0;
}

void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	return;
}
