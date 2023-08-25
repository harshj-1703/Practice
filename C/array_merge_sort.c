#include<stdio.h>

int main()
{
	int array1[10]={2,3,4,1,5},array2[5]={5,7,6,8,9};
	for(int i=0;i<5;i++)
	{
		array1[5+i] = array2[i];
	}
	
	for(int i=1;i<10;i++)
	{
		int key = array1[i];
		int j = i - 1;
		while(j>=0 && array1[j] > key)
		{
			array1[j+1] = array1[j];
			j--;
		}
		array1[j+1] = key;
	}
	
	int index = 0;
	
	for(int i=1;i<10;i++)
	{
		if(array1[index] != array1[i])
		{
			index++;
			array1[index] = array1[i];
		}
	}
	
	for(int i=0;i<index+1;i++)
	{
		printf("%d ",array1[i]);
	}
	
	return 0;
}