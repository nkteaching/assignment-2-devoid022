#include<iostream>
#define MAX 1000
int s1[MAX],s2[MAX],s3[MAX];
int sizeA=0,sizeB=0,sizeC=0;
using namespace std; 
class stack { 
    int top; 
public: 
    int a[MAX]; 
    stack() {top=-1;} 
    bool push(int x,int sz); 
    int pop(int sz1);  
    bool isEmpty(); 
}; 
bool stack::push(int x,int sz) 
{ 
    if (sz>=(MAX-1)) { 
        cout<<"stack Overflow"; 
        return false; 
    } 
    else { 
        a[sz] = x; 
        cout<<x<<"Pushed into the stack"; 
        return true; 
    } 
} 
int stack::pop(int sz1) 
{ 
    if (sz1<0) { 
        return -1; 
    } 
    else { 
        int x=a[sz1-1];
		sz1--; 
        return x; 
    } 
} 
bool stack::isEmpty() 
{ 
    return (top<0); 
} 
void copy()
{
	int x1;
	while(sizeof(s1)>0)
	{
		x1=stack::pop(sizeof(s1));
		stack::push(x1,sizeof(s2));
	}
	while(sizeof(s1)>0)
	{
		x=pop(s2,sizeof(s2));
		push(s3,x1,sizeof (s3));
	}
	cout<<"The elements have been copied"<<endl;
}
int main()
{
	int size,iter,item;
	scanf("%d",&size);
 
	for(iter=0;iter<size;iter++)
	{
		cin>>item;
		Push(item, &sizeA);
	}
	copy();
}
	

