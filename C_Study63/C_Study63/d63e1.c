#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('a',pf);  //写文件
//	fputc('a', pf);  //写文件
//	fputc('a', pf);  //写文件
//	fputc('a', pf);  //写文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读取文件
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//int main()
//{
//	//从键盘读一行文本信息
//	char buf[1024] = {0};
//	fgets(buf,1024,stdin);   //从标准输入中读取
//	fputs(buf, stdout);        //输出到标准输出
//
//
//
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//
//	return 0;
//}



//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"abcdef"};
//	struct S tmp = { 0 };
//	char buf[1024] = {0};
//	//把格式化的数据转换成字符串，存储到buf
//	sprintf(buf, "%d %.2f % s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %.2f %s\n", tmp.n, tmp.score, tmp.arr);
//
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = { "张三",20,55.6 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL);
//	{
//		return 0;
//	}
//	//二进制写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//	
//	
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

struct S
{
	char name[20];
	int age;
	double score;
};

int main()
{
	//struct S s = { "张三",20,55.6 };
	struct S tmp = { 0 };

	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL);
	{
		return 0;
	}
	//二进制读文件
	fread(&tmp, sizeof(struct S), 1, pf);
	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);


	fclose(pf);
	pf = NULL;
	return 0;
}