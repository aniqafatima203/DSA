#include<iostream>
using namespace std;
struct node {
	int data;
	node *next;
};
int main()
{
	node *head;
	head=NULL;
	
	node *newnode;
	newnode=new node;
	newnode->data=1;
	newnode->next=NULL;
	head=newnode;
	
	node *newn;
	newn=new node;
	newn->data=2;
	newn->next=NULL;
	newnode->next=newn;
	
	node *newno;
	newno=new node;
	newno->data=3;
	newno->next=NULL;
	newn->next=newno;
	
	node *curr;
	curr=head;
	
	while(curr->next!=NULL)
	{
	    curr=curr->next;
	}
	node *ptr;
	curr->next=ptr;
	curr->next=NULL;
	delete curr->next;
	cout<<curr;
	return 0;
}
