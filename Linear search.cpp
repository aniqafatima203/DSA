#include<iostream>
using namespace std;

int main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int loc=-1;
	
	int n,i;
	cout<<"Enter the number which you wanted to search:";
	cin>>n;
	
	for(i=0;i<10;i++)
	{
		if(arr[i]==n)
		loc=i;
		if(loc==-1)
		cout<<"Value is not found"<<endl;
		else
		cout<<"Value found at index:"<<loc;
	}
	
	return 0;
}
