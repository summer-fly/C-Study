#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>




//�õݹ�ķ�������쳲���������

int Fibonacci_recursion(int n)
{
	if (n <= 0)
		return 0;
	if (n == 1)
		return 1;
	return Fibonacci_recursion(n - 1) + Fibonacci_recursion(n - 2);

}

int main()
{
	int sum = Fibonacci_recursion(5);
	printf("%d \n", sum);
}

