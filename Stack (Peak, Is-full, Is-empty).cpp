#include<iostream>
using namespace std;

//Array Based

int stack[10], top=-1;

void push(int data){                     //Push: Use to insert data in stack
	if(top>=10){
		cout<<"Stack is full"<<endl;
	}
	else{
		top++;
		stack[top]=data;
	}
}

void display(){                          //Display: Use to display stack
	for(int i=top;i>=0;i--)
	{
		cout<<stack[i]<<endl;
	}
}

bool isfull(){                          //Isfull: Use to check that the stack is full or not
	if(top>=10)
	return true;
	else
	return false;
}

int peak(){                            //Peak/top: Use to display the top value in stack
	return stack[top];
}

bool isempty(){                        //Isempty: Use to check that the stack is empty or not
	if(top<0)
	return true;
	else
	return false;
}

main(){
	push(55);
	push(66);
	push(77);
	cout<<"Pushed data in stack:"<<endl;
	display();
	
	cout<<"Stack is full or not:"<<isfull()<<endl;
	cout<<"Top/Peak value in stack:"<<peak()<<endl;
	cout<<"Stack is empty or not:"<<isempty()<<endl;
	
	//Isfull and Isempty display 1 for true and diplay 0 for false
}
