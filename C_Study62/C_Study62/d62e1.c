#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>



//
//int main()
//{
	////打开文件test.txt
	////相对路径写法（相对于当前代码路径）
	//// ..上级路径  .当前路径
	////fopen("../../test.txt", "r");
	//fopen("test.txt", "r");

	////绝对路径写法
	//fopen("C:\\2021\\code\\d62\\test.txt", "r");


//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读文件
//	//关文件
//	fclose(pf);
//	pf == NULL;
//
//
//	return 0;
//}



	//int main()

	//{
	//	FILE *pfWrite = fopen("TEST.txt", "w");
	//	if (pfWrite == NULL)
	//	{
	//		printf("%s\n", strerror(errno));
	//		return 0;
	//	}
	//	// 写文件
	//	fputc('b', pfWrite);
	//	fputc('i', pfWrite);
	//	fputc('t', pfWrite);
	//	//关闭文件
	//	fclose(pfWrite);
	//	pfWrite == NULL;

	//	return 0;
	//}


	//int main()

	//{
	//	FILE *pfRead = fopen("TEST.txt", "r");
	//	if (pfRead == NULL)
	//	{
	//		printf("%s\n", strerror(errno));
	//		return 0;
	//	}
	//	// 读文件
	//	printf("%c", fgetc(pfRead));  //b
	//	printf("%c", fgetc(pfRead));  //i
	//	printf("%c", fgetc(pfRead));  //t

	//	//关闭文件
	//	fclose(pfRead);
	//	pfRead == NULL;

	//	return 0;
	//}




//从键盘输入
//输出到屏幕
//键盘&屏幕都是外部设备

//键盘 - 标准输入设备
//屏幕 - 标准输入设备
//是一个程序默认打开的两个流设备

int main()
{
	int ch = fgetc(stdin);
	fputc(ch, stdout);
}