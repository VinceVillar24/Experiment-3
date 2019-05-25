#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
// Variables
	string arr[21], province="A", temp;
// For  loop & If statements
	for(int i=1, day=1; i<=21; i++, day++)
	{
		cout<<"Province "<<province<<", Day "<<day<<": ";
		cin>>temp;
		if(i==7){
			day=0;
			province="B";
		}
		if(i==14){
			day=0;
			province="C";
		}
		arr[i-1]=temp;
	}
// Output for Displaying Values
	province="A";
	cout<<endl<<"Displaying Values: "<<endl;
	for(int i=1, day=1, temp; i<=21; i++, day++)
	{
		cout<<"Province "<<province<<", Day "<<day<<"=";
		cout<<arr[i-1]<<endl;
		if(i==7){
			day=0;
			province="B";
		}
		if(i==14){
			day=0;
			province="C";
		}
	}
return 0;
}
