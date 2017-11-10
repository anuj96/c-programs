#include<iostream>

using namespace std;

int main()
{
    int a[5], i,j,min;
    int n=5;
    cout<<"Enter the elements to be sorted"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                min=a[i];
            }
        }
    }
    cout<<min;
    }
    return 0;
}
