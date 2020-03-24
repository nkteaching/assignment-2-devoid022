#include<iostream>
using namespace std;
void show(int stack[],int size,int top)
{
	int i;
	for(i=0i<size;i++)
	{
		cout<<"Value at top is "<<stack[top];
		top=top-1;
	}
}
void reverse(int stack[],int que[],int *top,int *rear,int *front)
{
	*front=0;
	while(*top>-1)
	{
		*rear=*rear+1;
		que[*rear]=stack[*top];
		*top=*top-1;
	 } 
	 while(*front<=*rear)
	 {
	 	*top=*top+1;
	 	stack[*top]=que[*front];
	 	*f=*f+1;
	 }
}

main()
{
	int size,max;
	int item,t,i;
	int stack[max];
	int qu[max];
	int t=-1,f=-1,r=-1
	cout<<"Enter the size of the stack"<<endl;
	cin>>size;
	for(i=0;i<size;i++)
	{
		t=t+1;
		cout<<"Enter the value for position of top"<<endl;
		cin>>item;
		stack[top]=item;
	}
	show(stack,size,top);
	reverse(stack,que,t,r,f);
	cout<<"After reversal"<<endl;
	show(stack,size,top);
}

