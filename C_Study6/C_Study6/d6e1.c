#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 6;
	if (a < 7)
		printf("Сѧ��");
	else if (a < 10)
		printf("��ѧ��");
	else
		printf("���������ߴ�ѧ��");
	return 0;
}

//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("δ����");
//	else
//		printf("����");
//	return 0;
//}

//�ṹ��
//struct Book          //����һ���ṹ������
//{
//	char name[20];  //���� C Primer Plus
//	short price; //���� 55
//};
//int main()
//{
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct Book b1 = { "C Primer Plus",55 };                      //��ʼ���ṹ��
//	struct Book* pd = &b1;                                       //��ýṹ��ĵ�ַ
//	printf("������%s\n�۸�%d Ԫ\n",pd->name ,pd->price );        //����-> ����ӡ
//	printf("������%s\n�۸�%d Ԫ\n", (*pd).name,(*pd).price);    //����ָ������ӡ�ṹ��
//	// .   �ṹ�����.��Ա
//	// ->  �ṹ��ָ�� ->��Ա
//	printf("������%s\n", b1.name);
//	printf("�۸�%d Ԫ\n", b1.price);
//	b1.price = 70;                                            //�޸Ľṹ���е�һ��Ԫ��
//	strcpy(b1.name,"C++");          //strcpy - string copy �ַ�������  ��C++������name   ���鲻���޸�ֻ����
//	printf("%s\n", b1.name);                                                           //ֻ��������һ�����鿽��
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
//	//int a = 10;    //���ڴ�����4���ֽ�
//	//int *p = &a;          //ָ�����-�����洢��ַ�ı���   int* ��ָ�����������
//	//printf("%p\n", p);			   //& - ȡ��ַ��
//	//*p=20;                          //�����ò�����
//	//printf("%d\n", a);              //a�����20
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

//#define MAX(x,y) (x>y?x:y)   //��Ŀ������
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
//��
////#define MAX 100;
//int main()
//{
//	/*int a = MAX;
//	printf("%d", a);*/
//	return 0;
//}