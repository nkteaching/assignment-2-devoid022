#include <iostream>

#define MAX 1000
using namespace std;
void dm();
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

main()
{
    int t;
    cout<<"Enter number of entries";
    cin>>t;

    for (int i = 0; i < t; i++) {
        dm();
    }
}

void dm()
{
    stack a;
    string s;
    cout << "Enter the string"<<endl;
    cin >> s;
    int flag=0;
    for (int i=0;i<s.length();i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
            a.push(s[i]);
            flag = 1;
        }
        if (!a.isEmpty()) {
            if (s[i] == '}') {
                if (a.top() == '{')
                {
                    a.pop();
                    continue;
                }
                else
                    break;
            }
            if (s[i] == ']') {
                if (a.top() == '[') {
                    a.pop();
                    continue;
                }
                else
                    break;
            }
            if (s[i] == ')') {
                if (a.top() == '(') {
                    a.pop();
                    continue;
                }
                else
                    break;
            }
        }
        else {
            break;
        }
    }
    if ((a.isEmpty()) && (flag == 1))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

