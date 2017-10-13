#include <iostream>
using namespace std;


void func_max(int a4[], int n, int m)
{
	cout<<"\nThe element of maximum value in both the arrays is - "<<a4[n+m-1];
}

void func_min(int a4[], int n, int m)
{
	cout<<"\nThe element of minimum value in both the arrays is - "<<a4[0];
}

void func_merge(int a1[], int a2[], int n, int m)
{int a3[40],a4[40];
for(int i=0;i<n;i++)
{a3[i]=a1[i];
a4[i]=a1[i];
}
for(int i=0;i<m;i++)
{a3[i+n]=a2[i];
a4[i+n]=a2[i];}

int small,pos;
for(int l=0;l<(n+m);l++)
{small=a3[l];
	for(int k=l;k<(n+m);k++)
	{	if(a3[k]<=small)
		{pos=k;
	             small=a3[k];
		}
	}
a3[pos]=a3[l];
a4[l]=small;
}
cout<<"\nThe merged arrays after sorting in ascending order is :";
for(int i=0;i<(n+m);i++)
cout<<endl<<a4[i];
func_max(a4,n,m);
func_min(a4,n,m);
}


int main() {
int n,m,a1[20],a2[20];
cout<<"Enter how many elements you want to have in both the arrays (max 20 in both)";
cin>>n>>m;
cout<<"\nEnter the elements in array 1";
for(int i=0;i<n;i++)
cin>>a1[i];
cout<<"\nEnter the elements in array 2";
for(int i=0;i<m;i++)
cin>>a2[i];
func_merge(a1,a2,n,m);


	return 0;
}
