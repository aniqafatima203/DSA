#include<iostream>
using namespace std;

struct node{				//NOTE: Making struct is compalsory in linked list
	int data;
	node *next;
};

//Single Linked List
class linkedlist{			
	public:
	node *head, *curr;
		
linkedlist(){				//NOTE: Default constructor to put head and curr at null
	head = NULL;
	curr = NULL;
}

//Insert node at start
void insertAtStart(int data){		
	node *newnode;
	newnode = new node;
	newnode->data = data;
	
	newnode->next = head;
	head = newnode;
}

//Insert node at end
void insertAtEnd(int data){		
	node *newnode;
	newnode = new node;
	newnode->data = data;
	
	newnode->next = NULL;
	curr=head;
	while(curr->next != NULL){		//Traversal
		curr=curr->next;
	}
	curr->next=newnode;
}

//Insert node at the given position
void insertAtPosition(int data, int pos){
	node *newnode;
	newnode = new node;
	newnode->data = data;
	
	newnode->next = NULL;
	int i=1;				//NOTE: As counter that stops if match with given position
	curr=head;
	while(curr->next != NULL && i!=pos){
		curr=curr->next;
		i+=1;
	}
	newnode->next=curr->next;
	curr->next=newnode;
}

//Delete node from start
void deleteAtStart(){
	node *temp;
	
	temp=head;
	head=head->next;
	temp->next=NULL;
	delete temp;
}

//Delete node from end
void deleteAtEnd(){
	node *temp;
	
	curr=head;
	while(curr->next->next != NULL){
		curr=curr->next;
	}
	temp=curr->next;
	curr->next= curr->next->next;
	temp->next=NULL;
	delete temp;
}

//Delete node from the given position
void deleteAtPosition(int pos){
	node *temp;
	
	int i=1;
	curr=head;
	while(curr->next != NULL && i !=pos){
		curr=curr->next;
		i+=1;
	}
	temp=curr->next;
	curr->next= curr->next->next;
	temp->next=NULL;
	delete temp;
}

void display(){
	curr=head;
	while(curr){
		cout<<curr->data<<"->";
		curr=curr->next;
	}
	cout<<"NULL";
}	
};


main(){
	linkedlist obj;
	obj.insertAtStart(4); 
	obj.insertAtStart(3);
	obj.insertAtStart(2);
	
	obj.insertAtEnd(5);
	obj.insertAtEnd(6);
	
	obj.insertAtPosition(80,3);
	
	obj.deleteAtStart();
	obj.deleteAtEnd();
	obj.deleteAtPosition(2);
	
	obj.display();		//NOTE: Traverses and outputs all nodes data
}
