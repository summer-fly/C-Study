#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	
	int a = 10;
	int b = a++;           //����++����ʹ��a Ȼ����++
	printf("a = %d, b= %d\n",a, b);

	int c = 10;
	int d = ++c;         //ǰ��++�� ��++ Ȼ����ʹ��c
	printf("c =%d, d=%d", c, d);


	

	

	return 0;

}