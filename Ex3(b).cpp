#include<iostream>
#define MAX 1000
using namespace std; 
class stack { 
    int top; 
public: 
    int a[MAX]; 
    stack() {top=-1;} 
    bool push(int x); 
    int pop();  
    bool isEmpty(); 
}; 
bool stack::push(int x) 
{ 
    if (top>=(MAX - 1)) { 
        cout<<"stack Overflow"; 
        return false; 
    } 
    else { 
        a[++top] = x; 
        cout<<x<<"Pushed into the stack"; 
        return true; 
    } 
} 
int stack::pop() 
{ 
    if (top < 0) { 
        cout<<"stack Underflow"; 
        return 0; 
    } 
    else { 
        int x=a[top--]; 
        return x; 
    } 
} 
bool stack::isEmpty() 
{ 
    return (top<0); 
}
void copy(stack s1,stack s2)
{
	while(!s1.isEmpty()){
		int a=0;
		int b=0;
		if(s2.isEmpty()){
		a=s1.top();
		s1.pop();
		b=s1.pop();
		s1.pop();
		s1.push(b);
		s2.push(a);
		}
		else{
			a=s2.top();
			s2.pop();
			s2.push(s1.top());
			s2.pop();
			b=s2.top();
			s2.pop();
			s2.push(s1.top());
			s2.push(b);
			s2.push(a);
			s1.pop();
		}
	}
}
main()
{
	class stack s,s4; 
    s.push(1); 
    s.push(4); 
    s.push(3);
    copy(s,s4);
	
}	
