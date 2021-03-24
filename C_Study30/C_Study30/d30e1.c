#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



int main()
{
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}*/

	int i = 0;
	int sum = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		ret = 1;
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("½×³Ë½á¹ûÎª£º%d\n", sum);


	return 0;
}