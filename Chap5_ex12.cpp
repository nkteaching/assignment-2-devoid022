#include<iostream>
using namespace std;
int a=2;
int n=0;
int cube(int m)
{
	if(!a)
	{
		cout<<m/n;
		return m;
	}
	else{
		a--;
		return cube(m*m);
	}
}
main()
{
	cout<<"Enter a number"<<endl;
	cin>>n;
	cube(n);
}

