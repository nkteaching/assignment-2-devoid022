#include<iostream>
#define MAX 1000
using namespace std; 
class stack { 
    int top1; 
public: 
    int a[MAX]; 
    stack() {top1=-1;} 
    bool push(int x); 
    int pop();  
    bool isEmpty(); 
}; 
bool stack::push(int x) 
{ 
    if (top1>=(MAX-1)) { 
        cout<<"stack Overflow"; 
        return false; 
    } 
    else { 
        a[++top1]=x; 
        cout <<x<<" pushed into stack\n"; 
        return true; 
    } 
} 
int stack::pop() 
{ 
    if (top1<0) { 
        cout<<"stack Underflow"; 
        return 0; 
    } 
    else { 
        int x=a[top1--]; 
        return x; 
    } 
} 
bool stack::isEmpty() 
{ 
    return (top1<0); 
} 	
stack sortStack(stack &a) 
{ 
    stack tmpStack; 
    while (!a.isEmpty()) 
    { 
        int tmp=a.top(); // the top function is not working for some reason
        a.pop(); 
        while (!tmpStack.isEmpty() && tmpStack.top()>tmp) 
        { 
            a.push(tmpStack.top(); 
            tmpStack.pop(); 
        } 
        tmpStack.push(tmp); 
    } 
    return tmpStack; 
} 
main()
{
	class stack s; 
    s.push(1); 
    s.push(4); 
    s.push(3);
    sortstack(s);
}
