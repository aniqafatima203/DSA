#include<iostream>
using namespace std;

int main()
{
	int arr[9]={2,9,77,4,8,10,3,9,55};
	int loc=-1;
	int start=0;
	int end=8;
	
	int n,mid;
	cout<<"Enter a number:";    //Enter number that you wanted to search from given array
	cin>>n;
	
	while(start<=end)
	{
		mid=(start+end)/2;
		
		if(arr[mid]==n)
			loc=mid;
			
		else if(n<arr[mid])
		end=mid-1;
		
		else
		start=mid+1;
	}
	if(loc==-1)
	cout<<"Not found";
	
	else
	cout<<n<<" found at index "<<loc;
	
	return 0;
}
