#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j>=5-i&&j<=3+i)
			printf("*");
		else
		printf(" ");
	}
	printf("\n");
}
}

