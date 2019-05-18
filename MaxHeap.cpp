// Create Max Heap and perform operations

#include<stdio.h>
#include<iostream>

using namespace std;

void makeheap(int[],int);
void addnode(int,int[],int*);
void restoredown(int,int[],int);
void restoreup(int[],int);
void deletenode(int[],int*);
void replacenode(int,int[],int);

int main()
{
 // int arr[] = {1000,7,30,12,17,19,52,6,4,10,9,15,13,33,17,44};
  int arr[] = {1000,7,10,25,17,23,27,16,19,37,42,4,33,1,5,11};
  int n = 15;
  
  for(int i=1;i<=n;i++)
	// printf("%d ",arr[i]);	 
  
  makeheap(arr,n);
  
  for(int i=1;i<=n;i++)
	 printf("%d ",arr[i]);
  
  addnode(0,arr,&n);
  printf("\n\nAfter Adding 0\n"); 
  for(int i=1;i<=n;i++)
     printf("%d ",arr[i]); 
     
  replacenode(5, arr,n);
  printf("\n\nAfter replacing 5\n"); 
  for(int i=1;i<=n;i++)
     printf("%d ",arr[i]);
     
  deletenode(arr,&n);
  printf("\n\nAfter deleting node\n"); 
  for(int i=1;i<=n;i++)
     printf("%d ",arr[i]);
  
  return 0;	
}

void makeheap(int arr[],int n)
{
  for(int i=n/2;i>=1;i--)
    restoredown(i,arr,n);	
}

void addnode(int num,int arr[],int* n)
{
	(*n)++;
	arr[*n]=num;
	restoreup(arr,*n);
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
 /*   cout<<"\narr[pos]="<<arr[15];
    cout<<"\npos="<<pos;
    cout<<"\ni="<<i;
    cout<<"\n\n"; */
}

void restoreup(int arr[], int n)
{
  int val = arr[n]; int i=n;
  while (val>arr[i/2])
  {
  	arr[i]=arr[i/2];
  	i=i/2;
  }	
  arr[i]=val;
}

void replacenode(int num,int arr[],int n)
{
	arr[1]=num;
	restoredown(1,arr,n);
}

void deletenode(int arr[],int* n)
{
  arr[1]=arr[*n];
  (*n)--;
  restoredown(1,arr,*n);	
}

