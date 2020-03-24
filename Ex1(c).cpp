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
void reverse(stack s) {
  stack tmp_stack;
  int tmp;
  for(int i=1; i<s.size(); ++i){
    int j=0;
    while(j++ < i){
      tmp_stack.push(s.top());
      s.pop();
    }
    tmp=s.top();
    s.pop();
    while(tmp_stack.size()) {
      s.push(tmp_stack.top());
      tmp_stack.pop();
    }
    s.push(tmp);
  }
}
int main() 
{ 
    class stack s; 
    s.push(1); 
    s.push(2); 
    s.push(3); 
    
    reverse(s); 

} 
