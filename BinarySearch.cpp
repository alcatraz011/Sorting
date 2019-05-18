// Binary search

#include<stdio.h>

int main()
{
	int arr[1000];
	int size,num,lower,upper,mid,flag=0;
	
	scanf("%d",&size);
	
	for(int i=0;i<size;i++)
	 scanf("%d",&arr[i]);
	 
	 scanf("%d",&num);
	 
//	for(int i=0;i<num;i++)
//	 printf("%d ",arr[i]);	

     lower=0;
     upper=size-1;
     
     
     while(lower<=upper)
     {
     	mid=(lower+upper)/2;
     	
     	if(num==arr[mid])
     	 {
     	 	flag=1;
     	 	break;
		  }
		else
		  if (num<arr[mid])
		   upper=mid-1;
		  else
		    lower=mid+1;  
	 }
	
	if (flag==true)
	 printf("Number found");
	else
	 printf("Not found");
	
	return 0;
}
