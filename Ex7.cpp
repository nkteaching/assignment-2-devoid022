#include <iostream>
#include <queue>
using namespace std;
class Stack
{
	queue<int> q;
public:
	void push(int x) {
		q.push(x);
	}
	int pop()
	{
		if (q.empty()) {
			cout << "Underflow!!";
			exit(0);
		}
		int front = q.front();
		q.pop();
		return front;
	}
};
int main()
{
	int a[6];
	Stack s;
	for (int i=0;i<5;i++) {
		cin>>a[i];
	}

	for (int i=0;i<5;i++)
		cout<<s.pop()<<endl;;

	return 0;
}
