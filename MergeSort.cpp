// Merge sort
// Reference - https://www.geeksforgeeks.org/merge-sort/

#include<stdio.h>

void mergesort(int[],int,int);
void merge(int[],int,int,int);

int main()
{
	int arr[1000];
	int num,l,r;
	
	scanf("%d",&num);
	
	for(int i=0;i<num;i++)
	 scanf("%d",&arr[i]);
	 
	
	for(int i=0;i<num;i++)
	 printf("%d ",arr[i]); 
	 
	 l=0;  // Left side is begining of array
	 r=num-1; //Right side is end of array
	 
	 printf("\nCalling mergesort from main. . .\n");
	 
	 mergesort(arr,l,r);
	 
	 printf("\nMerging done\n");
	 
	 for(int i=0;i<num;i++)
	 printf("%d ",arr[i]);
	 
}

void mergesort(int arr[], int l, int r)
{
	if(l<r)
	{
		int m = (l+r)/2;
	//	printf("%d ",m);
		
		mergesort(arr,l,m);   //Spliting left
		mergesort(arr,m+1,r); //Spliting right side
		
		merge(arr,l,r,m);  // Merging spiltted array
	}
}

void merge(int arr[], int l, int r, int m)
{
int temp[1000],i,j,k;

for(i=l;i<=r;i++)       //Copying both the splitted array in a single temp array
 temp[i]=arr[i];
 
k=l; i=l; j=m+1;

while(i<=m && j<=r)      // Now comparing the values in the temp array, creating the sorted array
{
  if(temp[i]<=temp[j])
  {
  	arr[k]=temp[i];
  	i++;
  	k++;
  }
  
  if(temp[j]<temp[i])
  {
  	arr[k]=temp[j];
  	j++;
  	k++;
  }  
}

while(i<=m)
{
  arr[k]=temp[i];
  i++;
  k++;
}

while(j<=r)
{
  arr[k]=temp[j];
  j++;
  k++;
}
	
}







