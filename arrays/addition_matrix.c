#include <stdio.h>

/**
 * add two matrix a and b
 * and print in a third matrix c
 *
 * Author:Akong Rodney
 * Date:12/1/2022
 * time:3:25;
 *
 */
int main()
{
	int a[2][3],b[2][3],c[2][3],i,j;
	printf("please enter the values for matrix:\n");

	for ( i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",%a[i][j]);
		}
	}
	printf("\n");
	printf("please enter the value for the second matrix:\n");
	for ( i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j ++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");

	for (i = 0; i < 2; i ++)
	{
		for (j =0; j < 3; j+=)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return (0);
}
