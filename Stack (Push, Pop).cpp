#include<iostream>
using namespace std;

//Array based

int stack[10], top=-1;      

void push(int data) {                  //Push: Use to insert data in stack
	if(top>=10)
	{
		cout<<"Stack is full"<<endl;
	}
	else{ 
	top++;
	stack[top]=data;
	}
}

void pop(){                            //Pop: Use to delete data in stack
	if(top<0)
	{
		cout<<"Stack underflow"<<endl;
	}
	else{
		stack[top]=0;
		top--;
	}
}
void display(){                        //Display: Show output after push and pop
	for(int i=top;i>=0;i--)
	{
		cout<<stack[i]<<endl;
	}
}

main(){
	push(55);
	push(66);
	push(77);
	push(88);
	push(21);
	push(65);
	push(57);
	push(32);
	push(67);
	push(95);
	push(45);
	cout<<"Data after push:"<<endl;
	display();
	
	pop();
	cout<<"Data after pop 45:"<<endl;
	display();
	
	
}
