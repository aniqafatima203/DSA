#include<iostream>
using namespace std;

//Double LinkedList
struct node{
	int data;
	node *next, *curr, *prev;
};

class doubleLinkedList{
	
public:
	node *head, *curr, *tail;
doubleLinkedList(){
	head = NULL;
	curr = NULL;
	tail = NULL;
}

//Insert node at start
void insertAtStart(int data){
	node *newnode;
	newnode = new node;
	newnode->data=data;
	newnode->next=NULL;
	newnode->prev=NULL;
	
	if(head==NULL){
		head=newnode;
		tail=newnode;
	}
	
	else{
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
	}
}

//Insert node at end
void insertAtEnd(int data){
	node *newnode;
	newnode= new node;
	newnode->data= data;
	newnode->next=NULL;
	newnode->prev=NULL;
	
	if(head==NULL){
		head=newnode;
		tail=newnode;
	}
	
	else{
		newnode->prev=tail;
		tail->next=newnode;
		tail=newnode;
	}
}

//Insert node at given position
void insertAtPosition(int data, int pos){
	node *newnode;
	newnode=new node;
	newnode->data=data;
	newnode->next=NULL;
	newnode->prev=NULL;
	
	curr=head;
	int i=1;
	
	while(curr->next != NULL && i !=pos){
		curr=curr->next;
		i+=1;
	}
	newnode->next=curr->next;
	curr->next->prev=newnode;
	curr->next=newnode;
	newnode->prev=curr;
}

//Delete node from start
void deleteAtStart(){
	node *temp;
	
	temp=head;
	head=head->next;
	head->prev=NULL;
	temp->next=NULL;
	delete temp;
}		

//Delete node from end
void deleteAtEnd(){
	node *temp;
	
	temp=tail;
	tail=tail->prev;
	tail->next=NULL;
	temp->prev=NULL;
	delete temp;
}

//Delete node from the given position
void deleteAtPosition(int pos){
	node *temp;
	
	curr=head;
	int i=1;
	while(curr->next != NULL && i!=pos){
		curr=curr->next;
		i+=1;
	}
	temp=curr->next;
	curr->next=curr->next->next;
	curr->next->prev=curr;
	temp->next=NULL;
	temp->prev=NULL;
	delete temp;
}

void displayForward(){
	curr=head;
	while(curr){
		cout<<curr->data<<"->";
		curr=curr->next;
	}
	cout<<"NULL";
}

void displayReverse(){
	curr=tail;
		while(curr){
		cout<<curr->data<<"->";
		curr=curr->prev;
	}
	cout<<"NULL";
}
};

main(){
	doubleLinkedList obj;
	obj.insertAtStart(5);
	obj.insertAtStart(4);
	obj.insertAtStart(3);
	
	obj.insertAtEnd(6);
	obj.insertAtEnd(7);
	obj.insertAtEnd(8);
	
	obj.insertAtPosition(888,3);
	
	obj.displayForward();
	cout<<"\nAfter delete at position 3:"<<endl;
	obj.deleteAtPosition(3);
	obj.displayForward();
	
	cout<<"\nAfter delete at start:\n";
	obj.deleteAtStart();
	obj.displayForward();
	
	cout<<"\nAfter delete at end:\n";
	obj.deleteAtEnd();
	obj.displayForward();
}
