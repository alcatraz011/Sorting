// Create Max Heap and perform operations

#include<stdio.h>
#include<iostream>

using namespace std;

void makeheap(int[],int);
void restoredown(int,int[],int);
void sortheap(int[],int);

int main()
{
  int arr[] = {1000,7,30,12,17,19,52,6,4,10,9,15,13,33,17,44};
//  int arr[] = {1000,7,10,25,17,23,27,16,19,37,42,4,33,1,5,11};
  int n = 15;
  
  for(int i=1;i<=n;i++)
	// printf("%d ",arr[i]);	 
  
  makeheap(arr,n);
  
  for(int i=1;i<=n;i++)
	 printf("%d ",arr[i]);
	 
  sortheap(arr,n);
  cout<<"\nAfter Soring\n";
  for(int i=1;i<=n;i++)
	 printf("%d ",arr[i]);
  
  return 0;	
}

void makeheap(int arr[],int n)
{
  for(int i=n/2;i>=1;i--)
    restoredown(i,arr,n);	
}

void restoredown(int pos, int arr[], int n)
{
	int val=arr[pos];
	int i;
	
	while(pos <= n/2)
	{
	  i=pos*2;
	  if(i<n && arr[i]<arr[i+1])
	   i++;
	  if(val<arr[i])
	   {
	   	arr[pos]=arr[i];
	   	pos=i;
	   }
	   else
	    break;	   
	}	
	arr[pos]=val;
}

void sortheap(int arr[],int n)
{
	for(int i=1;i<=15;i++)
	{
	  int val=arr[1];
	  arr[1]=arr[n];
	  arr[n]=val;
	  n--;
	  restoredown(1,arr,n);
	}
	
	
}

