#include<iostream>
using namespace std;
int series(int n)
{
	if(n==10)
	{
		return 0;
	}
	else
	{
		cout<<n;
		return series(n+1);
	}
}
main()
{
	series(1);
}
