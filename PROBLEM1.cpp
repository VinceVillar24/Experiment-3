#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int arr[9], num, smallest, largest, sum;
	double avg;
//for loop used for input
	for(int i=0; i<=9; i++)
	{
		cout<<"Enter number "<<i+1<<": ";
		cin>>num;
		arr[i]=num;
	}
// loop for finding the sum, smallest, & largest integer
	for(int i=0; i<=9; i++)
	{
		sum+=arr[i];
		if(i==0)
		{
			smallest=arr[i];
			largest=arr[i];
		}
		else
		{
			if(smallest>arr[i])
				smallest=arr[i];
			if(largest<arr[i])
				largest=arr[i];
		}
	}
// variable for average
	avg=(double)sum/10;
	cout<<endl
		<<"Smallest: "<<smallest<<endl
		<<"Largest: "<<largest<<endl
		<<"Total: "<<sum<<endl
		<<"Average: "<<avg;
return 0;
}
