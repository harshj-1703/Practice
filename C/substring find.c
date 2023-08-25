#include<stdio.h>
#include<string.h>

int main()
{
	char a[100],b[100];
	
	gets(a);
	gets(b);
	
	int count = 0,j = 0;
	
	for(int i=0;i<strlen(a);i++)
	{
		while(a[i] == b[j])
		{
			j++;
			if(j >= strlen(b))
			{
				count++;
				j=0;
			}
		}
	}
	
	printf("%d",count);
	
	return 0;
}