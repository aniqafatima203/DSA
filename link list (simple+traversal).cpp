#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

main()
{
	node *head;
	head=NULL;
	
	node *newnode;
	newnode=new node;
	newnode->data=5;
	newnode->next=NULL;
	head=newnode;
	
	node *newn;
	newn=new node;
	newn->data=6;
	newn->next=NULL;
	head->next=newn;
		
	node *newno;
	newno=new node;
	newno->data=6;
	newno->next=NULL;
	newn->next=newno;
	
	
	node *curr;
	curr=head;
	
	while(curr)
	{
		cout<<curr->data<<endl;
		curr=curr->next;
	}
}
