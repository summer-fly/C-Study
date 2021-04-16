#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//struct s
//{
//	char name[20];
//	short age;
//};
//
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

/*c语言标准规定：
* memcpy 只要处理 不重叠的内存拷贝就可以
* memmove 是处理重叠内存拷贝的
*/


void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);

	char* ret = dest;
	if (dest<src)
	{
		//此前向后拷贝
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		//从后向前拷贝
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);

		}
	}
	return ret;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr + 2, arr, 20);

	return 0;
}




//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//
//	memmove(arr+2, arr,20);
//
//
//
//
//
//
//
//	//my_memcpy(arr+2,arr,20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}








//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	//strcpy(arr2, arr1);        //类型是char*
//	//void* 无类型指针
//	struct s arr3[] = { {"张三",20},{"李四",30} };
//	struct s arr4[3] = { 0 };
//	//my_memcpy(arr4, arr3, sizeof(arr3));
//	my_memcpy(arr2, arr1, sizeof(arr1));
//
//	//memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}