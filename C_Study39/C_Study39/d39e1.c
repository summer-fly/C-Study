#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//int cmp_int(const void* e1, const void* e2)       //对整型数组进行排序
//{
//	//比较两个整型的值
//	//void*只能接收不能改变或者解引用，所以进行强制类型转换
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 8,2,3,6,5,1,9,4,7,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}




//int cmp_float(const void* e1, const void* e2)   //对浮点型数组进行排序
//{
//	return *(float*)e1 - *(float*)e2;
//}
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,1.0,2.0,3.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//}
//struct Stu
//	{
//		char name[20];
//		short age;
//	};
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//void test3()         //对结构体进行排序
//{
//	
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",40} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//int main()
//{
//	
//  
//	//test1();
//	//test2();
//	test3();
//
//	return 0;
//}

//void bubble_sort(const void* base,int sz,int width)
//{
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		//没趟比较的次数
//		int j;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			//两个元素的比较
//
//		}
//	}
//}
//
//void test4()
//{
//	int arr[10] = { 1,2,3,5,8,9,6,4,7,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sot(arr,sizeof(arr[0]),);
//}
//
//int main()
//{
//	test4();
//
//
//
//	return 0;
//}

int main()
{




	return 0;
}