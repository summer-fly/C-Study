#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 6;
	if (a < 7)
		printf("小学生");
	else if (a < 10)
		printf("中学生");
	else
		printf("高中生或者大学生");
	return 0;
}

//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("未成年");
//	else
//		printf("成年");
//	return 0;
//}

//结构体
//struct Book          //创建一个结构体类型
//{
//	char name[20];  //假设 C Primer Plus
//	short price; //假设 55
//};
//int main()
//{
//	//利用结构体类型创建一个该类型的结构体变量
//	struct Book b1 = { "C Primer Plus",55 };                      //初始化结构体
//	struct Book* pd = &b1;                                       //获得结构体的地址
//	printf("书名：%s\n价格：%d 元\n",pd->name ,pd->price );        //利用-> 来打印
//	printf("书名：%s\n价格：%d 元\n", (*pd).name,(*pd).price);    //利用指针来打印结构体
//	// .   结构体变量.成员
//	// ->  结构体指针 ->成员
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d 元\n", b1.price);
//	b1.price = 70;                                            //修改结构体中的一个元素
//	strcpy(b1.name,"C++");          //strcpy - string copy 字符串拷贝  把C++拷贝进name   数组不能修改只能用
//	printf("%s\n", b1.name);                                                           //只能用另外一个数组拷贝
//	
//	return 0;                                                                         
//
//}

//int main()
//{
//	printf("%d", sizeof(int*));      // 4
//	printf("%d", sizeof(char*));     // 4
//	printf("%d", sizeof(double *));  // 4
//	printf("%d", sizeof(short *));   // 4
//
//
//
//
//	return 0;
//
//}

//int main()
//{
//	//int a = 10;    //向内存申请4个字节
//	//int *p = &a;          //指针变量-用来存储地址的变量   int* 是指针变量都类型
//	//printf("%p\n", p);			   //& - 取地址符
//	//*p=20;                          //解引用操作符
//	//printf("%d\n", a);              //a变成了20
//
//	char arr = 'a';
//	char* pc = &arr;
//	printf("%c\n", sizeof(pc));
//	/**pc = 'd';
//	printf("%c", arr);*/
//
//
//	return 0;
//
//}

//#define MAX(x,y) (x>y?x:y)   //三目操作符
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a,b);
//	printf("%d ", max);
//
//
//
//	return 0;
//
//｝
////#define MAX 100;
//int main()
//{
//	/*int a = MAX;
//	printf("%d", a);*/
//	return 0;
//}