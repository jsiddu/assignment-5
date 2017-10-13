#include <iostream>
using namespace std;

void func_freq(int arr[], int i)
{int count[20];
for(int i=0;i<20;i++)
count[i]=0;

for(int k=0;k<i;k++)
{
if(arr[k]!=arr[k+1])
	for(int l=0;l<i;l++)
	{
		{
		if(arr[k]==arr[l])
		count[k]++;
	        }
	}
else
count[k]=0;
	
	
}


int freq=0;
for(int k=0;k<i;k++)
{if(count[k]>freq)
freq=count[k];
}
cout<<"\nThe elements with the highest frequency is/are :";
for(int l=0;l<i;l++)
{if(count[l]==freq)
cout<<endl<<arr[l];
}	
}


void func_mean(int arr[],int i)
{float sum=0.0;
for(int j=0;j<i;j++)
sum+=arr[j];
cout<<"\nThe mean of all elements is - "<<sum/i;
}


void func_median(int arr[],int i)
{if(i%2==0)
{float a=arr[i/2]+arr[(i/2)-1];

a/=2;
cout<<"\nThe median (Even) is - "<<a;
}
else
cout<<"\nThe median is - "<<arr[i/2];
}

void func_large(int arr[],int i)
{cout<<"\nThe largest element in the array is - "<<arr[i-1];}

void func_small(int arr[],int i)
{cout<<"\nThe smallest element in the array is - "<<arr[0];}



int main() {
int arr[20],i,j;
cout<<"Enter how many elements you want in your array (max 20)";
cin>>j;
cout<<"Enter your numbers";
for(i=0;i<j;i++)
{cin>>arr[i];
}
int arr2[20];

for(int f=0;f<j;f++)
{arr2[f]=arr[f];}


int small,pos;
for(int l=0;l<j;l++)
{small=arr[l];
	for(int k=l;k<j;k++)
	{	if(arr[k]<=small)
		{pos=k;
	             small=arr[k];
		}
	}
arr[pos]=arr[l];
arr2[l]=small;
}   

func_median(arr2,j);
func_mean(arr2,i);
func_large(arr2,i);
func_small(arr2,i);
func_freq(arr2,i);

return 0;
}
