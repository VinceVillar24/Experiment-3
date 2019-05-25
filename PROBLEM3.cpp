#include<iostream>
#include<string>
#include<cstring>
#include<conio.h>

using namespace std;

int main()
{
//Declaration of Variables
	char *arr;
	string input;
	int size;
//Input of Elements
	cout<<"Input: ";
	char a;				
    for(;;)
	{
        a=getch();
        if(a=='\b'){	
        	if(size!=0)
			{
            	cout<<"\b \b";
            	--size;
            	input = input.substr(0, input.size()-1);
            }
        }
        else if((a>=97 && a<=122)||(a>=65 && a<=90)||(a>=48 && a<=57))
		{
            input+=a;
            ++size;
            cout<<a;
        }
        else if(a=='\r')
		{
            break;
    	}
    }
	arr=new char[size+1];
	strcpy(arr, input.c_str());
//Sorting of Elements
	cout<<endl<<"Sorted: ";
	for(int bbs1=0; bbs1<size; bbs1++)
	{
		for(int bbs2=0; bbs2<size-bbs1; bbs2++)
		{
			if (arr[bbs2] > arr[bbs2+1])
			{
				char temp = arr[bbs2]; 
			    arr[bbs2] = arr[bbs2+1]; 
			    arr[bbs2+1] = temp;
			} 
		}
	}
// Output of Array Size
	for(int i=0; i<=size; i++){
		cout<<*(arr+i);
	}
	cout<<endl<<"Array Size: " <<size<<endl;
return 0;
}
