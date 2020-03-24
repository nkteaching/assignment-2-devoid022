#include <iostream>
using namespace std;
int l=0;
struct node
{
    int data;
    node *next;
};
class linklist
{
private:
    node *head,*tail;
public:
    linklist()
    {
        head=NULL;
        tail=NULL;
    }

    void addnode(int n)
    {
        node *tmp=new node;
        tmp->data=n;
        tmp->next=NULL;

        if(head==NULL)
        {
            head=tmp;
            tail=tmp;
        }
        else
        {
            tail->next=tmp;
            tail=tail->next;
        }
    }
};
int length(node *temp)  
{
	if(temp==NULL)
		return l;
	else
	{
		l=l+1;
		length(temp->next);
	}
}

int main()
{
	node *head=NULL;
	int len;
    linklist a;
    a.addnode(1);
    a.addnode(2);
    len=length(head);
    cout<<len;
}


