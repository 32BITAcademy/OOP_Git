#include<iostream>
#include"Miron.h"
#include"Misha.h"
#include"Vanya.h"

using namespace std;

int main()
{
	int a, b;
	char c;

	cin >> a >> c >> b;

	int res;
	switch (c)
	{
	case '+': res = add(a, b); break;
	case '-': res = sub(a,b); break;
	case '*': res = multiply(a,b); break;
	}

	cout << "Result = " << res << endl;

	return 0;
}