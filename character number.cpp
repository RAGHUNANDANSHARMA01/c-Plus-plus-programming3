#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i='A';i<='M';i++)
	{
		for(j='A';j<='M';j++)
		{
			if(j<i)
			printf("%c",j);
			else
			printf("%c",i);
		}
		printf("\n");
	}
	return 0;
}
