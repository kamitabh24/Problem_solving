#include<iostream>
using namespace std;

void bubsort(int arr[],int n)
{
	for(int i=1; i<n; i++)
	{
		for(int j=0; j<n-i; j++)
		{
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}
}

int main()
{
	int arr[5]={4,8,5,7,1};
	int n=5;
	bubsort(arr,n);
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
	cout<<"1st largest : "<<arr[4]<<endl;
	cout<<"2nd largest : "<<arr[3]<<endl;
	return 0;
}
