#include <iostream>
#include <conio.h>
#include <array>
using namespace std;

int main()
{
	int arr[10],n,count;
	int a[10];
	cout<<"enter the number of elements";
	cin>>n;
	cout<<"enter the elements"<<endl;
	for(int i=0;i<n;i++)
	{
	 cin>>arr[i];
	}
	// int n =arr.length();
	// cout<<arr[n-1]<<"  ";


	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=(i+1);j<n;j++)
		{
			if(arr[i]>arr[j])
				count++;
			else
				break;
			

		}
		// cout<<count;
		// cout<<" > "<<count<<" \t ";
		if(count==(n-1-i))
		{
			// for(int k=0;k<n;k++)
			// {
				a[i]=arr[i];
			
			// }	
		}


	}
	for(int k=sizeof(a);k<-1;k--)
			{
				cout<<a[k];
			
			}	

 	getch();
 	return 0 ;
}