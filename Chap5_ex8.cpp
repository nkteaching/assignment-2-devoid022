#include<iostream>
using namespace std;
int mul(int a,int b);
main()
{
	int a,b;
	cin>>a;
	cin>>b;
	cout<<mul(a,b);
}
int mul(int a,int b)
{
	if(b==0)
	{
		return 0;
	}
	if(a==0)
	{
		return 0;
	}
	else{
	return (a+mul(a,b-1));
	}
}
