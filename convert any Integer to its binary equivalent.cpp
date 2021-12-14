#include<stdio.h>
int main()
{
	int n,j,i= 0, a[25];
	printf("Enter a Integer number : ");
	scanf_s("%d", &n);
	printf("The Binary value of %d is : ", n);
	while (n != 0)
		{
			a[i] = n % 2;
			n = n / 2;
			i++;
		}
	for (j = i - 1; j >= 0; j--)
		{
			printf("%d", a[j]);
		}
	printf("\n");
	return 0;
}