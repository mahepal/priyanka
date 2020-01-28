#include<stdio.h>
void main()
{
	int i,j,arr[4],temp;
	for(i=0;i<4;i++)
	{
		printf("enter the elements:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("sorting element:\n");
	{
		for(i=0;i<4;i++)
		{
			printf("element is:%d\n",arr[i]);
		}
	}
	for(i=0;i<4;i++)
	{
		if(arr[1]%2==0)
		{
				if( arr[i]>arr[i+1])
			{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			}
		else if( arr[i]<arr[i+1])
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
		}
		
	/*	if(i%2==0 && arr[i]>arr[i+1])
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
		if(i%2==1 && arr[i]<arr[i+1])
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	*/
	}
	printf("------swap------\n");
	for(i=0;i<4;i++)
	{
		printf("element is:%d\n",arr[i]);
	}
}
