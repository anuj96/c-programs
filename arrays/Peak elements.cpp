#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int arr[10],n;
	cout<<"enter the number of elements";
	cin>>n;
	cout<<"enter the elements"<<endl;
	for(int i=0;i<n;i++)
	{
	 cin>>arr[i];
	}



	for(int i=0;i<n;i++)
	{
		if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
		{
			if((i==0 && arr[i]>arr[i+1]) || (i==n-1 && arr[i]>arr[i-1]))
			{
				cout<<arr[i]<<"  ";
			}
			else if(i!=0 && i!=(n-1))

			cout<<arr[i]<<"  ";
		}

	}
		

 	getch();
 	return 0 ;
}