#include<iostream>
using namespace std;
class stack{
	private:
		int top;
		int arr[5];
	public:
		stack()
		{
			top=-1
			for(int i=0;i<5;i++){
				arr[i]=0;
			}
			}
			bool isempty()
			{
				if(top==-1)
				{
					return true;
				}
				else{
					return false;
				}
			}
			bool isfull()
			{
				if(top==4)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			void push(int val)
			{
				if(isfull())
				{
					cout<<"Stack overflow"<<endl;
				}
				else
				{
					top++;
					arr[top]=val;
				}
			}
			int top()
			{
				if(isempty())
				{
					cout<<"stack underflow"
				}
				else
				{
					int popvalue=arr[top];
					arr[top]=0;
					top--;
					return popvalue;
				}
			}
};

main()
{
	stack s,s1,s2;
	s.push(1);
	s.push(2);
	s.push(3);
	while(!s.empty()){
		s1.push(s.top());
		s.pop();
	}
	while(!s1.isempty()){
		s2.push(s1.pop());
	}
	while(!s2.isempty()){
		s.push(s2.pop());
	}
	cout<<"Stack has been reversed"<<endl;
	}

