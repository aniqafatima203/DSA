#include<iostream>
using namespace std;

struct node         //In linked list,we must have to create struct first
{
	int data;
	node *next;
};

class linkedlist   //Step 1:Create class
{
	node *head;   //Step 2:Create 2 pointers
	node *curr;
	
	public:
		linklist()              //Constructor
		{
			head=NULL;
			curr=NULL;
		}
		
		void insert(int data)   //Member function
		{
			node *newnode;
			newnode=new node;
			
			newnode->data=data;
			newnode->next=NULL;
			
			if(head==NULL){
				head=newnode;
			}
			else{
				curr=head;
				while(curr->next !=NULL){
					curr=curr->next;
				}
				curr->next=newnode;
			}
		}
		
		void display()
		{
			curr=head;
			while(curr){
				cout<<curr->data<<endl;
				curr=curr->next;
			}
			cout<<"NULL";
			
		}
};

main()
{
	linkedlist obj;     //Create object of class
	obj.insert(55);
	obj.insert(3);
	obj.insert(93);
	obj.insert(18);
	
	obj.display();
}
