#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest<src || dest>(char*)src + count)
//	{
//		//ǰ->��
//	}
//	else
//	{
//		//��->ǰ
//	}
//
//}

//
//int main()
//{
//
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 8);
//	printf("%d \n", ret);
//
//
//
//
//
//	return 0;
//}

//memset - �ڴ����ú���
//
//int main()
//{
//	//char arr[10] = "";
// 	int arr[10] = { 0 };
//	memset(arr, 1, 40);
//
//
//
//
//
//	return 0;
//}



//����һ���ṹ������
//����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������������
//����ѧ�������� - ����+����+�绰+���

//struct stu
//{
//	char name[20];
//	short age;
//	short tel;
//	float lenth;
//};

//struct Node
//{
//	int data;
//	struct Node n;   //����д��
//
//};

//struct Node
//{ 
//	int data;             //��С��4byte             ������
//	struct Node* next;    //��С��4byte             ָ����
//};
//
//struct stu s3;    //ȫ�ֱ���
//int main()
//{
//
//	sizeof(struct Node);
//	printf("%d\n", sizeof(struct Node));
//	//�����Ľṹ�����
//
//
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//
//}Node;
//
//
//
//
//
//int main()
//{
//	struct Node d1;
//	Node d2;

//	return 0;
//}

//struct stu
//{
//	char name[20];
//	short age;
//	float lenth;
//};
//
//int main()
//{
//	struct stu s1 = { "����", 20, 1.70 };
//	printf("%s ", s1.name);
//	printf("%d ", s1.age);
//	printf("%f ", s1.lenth);
//
//
//
//
//	return 0;
//}

struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	int a;
	char c2;
};

int main()
{
	struct S1 s1 = { 0 };
	printf("%d ", sizeof(s1));

	struct S2 s2 = { 0 };
	printf("%d ", sizeof(s2));




	return 0;
}