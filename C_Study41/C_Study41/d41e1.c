#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//int main()
//{
//	//数组名是首元素地址
//	//1.sizeof(数组名) - 表示整个数组
//	//2.&数组名 - 数组名代表整个数组
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));        //16 - sizeof(数组名) - 计算的是数组的总大小 - 单位是字节-16
//	printf("%d\n", sizeof(a+0));      //4 - a代表的是首元素地址 +0还是地址  32位平台地址大小为4个字节
//	printf("%d\n", sizeof(*a));       //4 - *a是首元素1，1的大小是4字节
//	printf("%d\n", sizeof(a+1));      //4 - a是首元素地址 +1表示位数组2的地址 ，即为4
//	printf("%d\n", sizeof(a[1]));     //4 - 第二个元数的大小4
//	printf("%d\n", sizeof(&a));       //4/8 - 取地址a取出的是地址 地址的大小为4或8个字节
//	printf("%d\n", sizeof(*&a));      //16 - &a是数组的地址解引用访问的数组，sizeof()计算的就是数组的大小
//	printf("%d\n", sizeof(&a+1));     //4/8 - &a是地址得大小。+1跳过整个数组，但是还是一个地址 所以大小是4/8
//	printf("%d\n", sizeof(&a[0]));    //4/8 - a[0]取出第一个数组的元素，&a[0]是地址，地址的大小是4/8
//	printf("%d\n", sizeof(&a[0]+1));  //4/8 - 第二个元素的地址
//
//
//
//
//	return 0;
//}


//int main()
//{
//
//
//
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));         //6 - sizeof()计算的是arr数组大小 ，6*1 =6
//	printf("%d\n", sizeof(arr+0));       //4/8  - arr的地址加0 ， 地址的大小是4/8
//	printf("%d\n", sizeof(*arr));        //1 - arr是首元素地址，*arr是首元素a 大小是一个字节
//	printf("%d\n", sizeof(arr[1]));      //1
//	printf("%d\n", sizeof(&arr));        //4/8  - &arr还是取出arr的地址， 地址的大小是4/8
//	printf("%d\n", sizeof(&arr+1));      //4/8  - &arr是一个地址，+1跳过整个数组，但是还是一个地址 所以结果是4/8
//	printf("%d\n", sizeof(&arr[0]+1));   //4/8 - 取出第一个元素的地址 ，+1是第二个元素的地址 大小还是4/8
//
//
//
//	return 0;
//}


//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));            //随机值
//	printf("%d\n", strlen(arr+0));          //随机值 - 与上面的写法完全相同
//	printf("%d\n", strlen(*arr));           //err -- *arr
//	printf("%d\n", strlen(arr[1]));         //err
//    printf("%d\n", strlen(&arr));           //随机值
//	printf("%d\n", strlen(&arr+1));         //随机值 - 与上面的随机值差值为6字符
//	printf("%d\n", strlen(&arr[0]+1));      //随机值
//
//
//
//
//
//
//	return 0;
//}



int main()
{
	//int len = strlen("abcdef");
	char arr[] = { 'a','b','c','d','e','f' };
	int len = strlen(arr);
	printf("%d\n", len);


	return 0;
}