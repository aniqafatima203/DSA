#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
class Queue{
	node *front, *curr;
	public:
		Queue(){
			front=NULL;
			curr=NULL;
		}
		void EnQueue(int data){
			node *newnode=new node;
			newnode->data=data;
			newnode->next=NULL;
			if(front==NULL){
				front=newnode;
			}
			else{
				curr=front;
				while(curr->next!=NULL){
					curr=curr->next;
				}
				curr->next=newnode;
			}
		}
		void DeQueue(){
			node *temp;
			temp=front;
			front=front->next;
			temp->next=NULL;
			delete temp;
		}
		void display(){
			curr=front;
			while(curr){
				cout<<curr->data<<"->";
				curr=curr->next;
			}
			cout<<"NULL";
		}
};
int main(){
	Queue l;
	l.EnQueue(1);
	l.EnQueue(2);
	l.EnQueue(3);
	l.DeQueue();
	
	l.display();
	return 0;                // Comment
}
