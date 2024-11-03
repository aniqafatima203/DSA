#include<iostream>
using namespace std;

 int queue[5];   
int front = 0;       
int rear = -1;     
    

bool isFull() {
    return (rear == 5 - 1);
}

bool isEmpty()
 {
    return (front > rear);
}

// Enqueue
void enQueue(int data) 
{
	 if (isFull()) 
	{
        cout << "Queue is full!\n";
    }
    else
	{
        queue[++rear] = data;
    } 
}

void deQueue()
 {
  
	if (isEmpty())
	 {
        cout << "Queue is empty!\n";
    }
     else 
	{
        front++; 
    }
}

void display() 
{
    if (isEmpty()) 
	{
        cout << "Queue is empty!\n";
        return;
    }
    for (int i = front; i <= rear; i++) 
	{
        cout << queue[i] <<endl;
    }
}

int main()
 {
    cout << "Data in Queue:" << endl;
    enQueue(45);
    enQueue(81);
    enQueue(9);
    display();

    cout << "After delete:" << endl;
    deQueue();
    display();

    return 0;
}
	