#include<iostream>
using namespace std;

int main()
{
    int arr[9]={2,9,77,4,8,10,3,9,55};
    int n;
    int loc=-1;
    cout<<"Enter a number that you wanted to search:";
    cin>>n;
    
    for(int i=0;i<9;i++)
    {
        if(arr[i]==n)
            loc=i;
    }
    if(loc==-1)
        cout<<"This number is not found.";
    else
		cout<<"This number is found at index "<<loc;
		
	return 0;
}
