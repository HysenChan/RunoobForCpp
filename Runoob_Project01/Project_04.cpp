#include<iostream>
#include<string>
#include<stdio.h>
#include<ctime>

using namespace std;

//asctime
void asctimeFunc()
{
	struct tm t;
	char stemp[32];

	t.tm_sec = 10;
	t.tm_min = 10;
	t.tm_hour = 6;
	t.tm_mday = 25;
	t.tm_mon = 2;
	t.tm_year = 89;
	t.tm_wday = 6;

	asctime_s(stemp, &t);
	cout << stemp << endl;
}

int main()
{
	asctimeFunc();

	return(0);
}