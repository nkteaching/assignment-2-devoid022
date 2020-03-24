#include<iostream>
using namespace std;
void printcommas(unsigned long n)
{
	int th=1000;
	if(n<th)
	{
		cout<<n;
	}
	else
	{
		int rem=n%th;
		printcommas(n/th);
		cout<<","<<rem;
	}
}
main()
{
	unsigned long int n=123456789;
	printcommas(n);
}

