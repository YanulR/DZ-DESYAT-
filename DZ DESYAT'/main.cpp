#include <iostream>
#include <string>
#include <windows.h>
#include "STUDENTBOSS.h"
using namespace std;
int main()
{
	Student S("OLEG", "RYBLEV", "SHAKALOV", 18, 0);
	S.print();
	cout << endl;
	Boss B("BIG", "MAMA", "OLEGOVNA", 40, 10);
	B.print();
	S.~Student();
	B.~Boss();
}