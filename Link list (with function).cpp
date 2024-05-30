#include<iostream>
using namespace std;   

struct node          //Step 1:Create struct
{
	int data;       
	node *next;      //Step 2:Take data and a pointer
};

void insert(node *curr, int data)    //Step 3:Take function to input data
{
	while(curr->next != NULL){       //Step 4:For traversal
		curr=curr->next;
	}
	
	node *newn;         //Step 5:Take 2nd pointer
	newn= new node;
	
	newn->data= data;  //Step 6:Get values through parameters
	newn->next=NULL;
	
	curr->next= newn;
}

void display(node *curr)      //Step 7:Take function to display data
{
	while(curr){
		cout<<curr->data<<"->";
		curr=curr->next;
	}
}

main()
{
	node *head;       //Step 8:Set head and curr to null by making pointer
	head=NULL;
	
	node *curr;
	curr=NULL;
	
	node *newnode;    //Step 9:Set head to first node
	newnode=new node;
	
	newnode->data=5;
	newnode->next=NULL;
	
	head=newnode;
	curr=head;
	
	insert(curr, 89);   //Function call
	curr=head;
	insert(curr, 54);
	
	display(curr);
}
