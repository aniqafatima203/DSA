#include<iostream>
using namespace std;

int fact(int n){
	if(n==0)
	{
		return 1;                    //Base case	
	}
	else
	{
		return n*fact(n-1);         //Recursion call
	}
}

int main(){
	int num;
	cout<<"Enter positive number:";
	cin>>num;
	cout<<"Factorial of "<<num<<"  is:"<<fact(num);
	
	return 0;
}
