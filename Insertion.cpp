// Insertion sort

#include<stdio.h>

int main()
{
	int arr[1000];
	int num,temp,i,j,k;
	
	scanf("%d",&num);
	
	for(int i=0;i<num;i++)
	 scanf("%d",&arr[i]);
	 
//	for(int i=0;i<num;i++)
//	 printf("%d ",arr[i]);
	 
	 
	 for (j=1;j<num;j++)
	 {
	 	for (i=0;i<j;i++)
	 	{
	 		if(arr[i]>arr[j])
	 		{
	 			temp = arr[j];
	 			
	 			for(k=j; k>i; k--)
	 			{
	 				arr[k] = arr[k-1];
				 }
				 
				arr[k] = temp; 
	 			
			 }
		 }
	 }
	 
	
	for(int i=0;i<num;i++)
	 printf("%d ",arr[i]); 
	
}
