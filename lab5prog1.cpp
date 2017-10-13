#include <iostream>
using namespace std;

void func(int arr[],int i)
{int sum=0;
for(int j=0;j<i;j++)
{sum+=arr[j];}
cout<<"\nSum of all elements of the array is - "<<sum;
	
}
int main() {
int arr[20],i,j;
cout<<"Enter how many elements you want in your array (max 20)";
cin>>j;
cout<<"Enter your numbers";
for(i=0;i<j;i++)
{cin>>arr[i];
}
func(arr,i);

return 0;
}
