#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


int cmp_int(const void* e1, const void* e2)       //�����������������
{
	//�Ƚ��������͵�ֵ
	//void*ֻ�ܽ��ղ��ܸı���߽����ã����Խ���ǿ������ת��
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
int arr[10] = { 8,2,3,6,5,1,9,4,7,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}




int cmp_float(const void* e1,const void* e2)   //�Ը����������������
{
	return *(float*)e1 - *(float*)e2;
}
void test2()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,1.0,2.0,3.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	for (int i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test3()         //�Խṹ���������
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",40} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), );
}

int main()
{
	//test1();
	//test2();
	test3();
	






	return 0;
}