#include <stdio.h>
#include <string.h>
// ���whileѭ�����
// ���һ������

int ADD(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 23;
	int sum;
	sum = ADD(a, b);
	printf("a��b�ĺ��ǣ�%d\n", sum);











	/*int Line = 0;
	printf("��ʼѧϰC���ԣ�");
	
	while (Line < 20000)
	{
		printf("��һ�д���:%d\n",Line);
		Line++;

	}
	printf("ѧϰ��ɣ�");*/



	return 0;
}