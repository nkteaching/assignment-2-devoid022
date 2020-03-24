#include<iostream>
using namespace std;
double sumseries(double n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return ((1/n)+sumseries(n-1));
	}
}
main()
{
	double x;
	cin>>x;
	cout<<sumseries(x);
}

