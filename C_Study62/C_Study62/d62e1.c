#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>



//
//int main()
//{
	////���ļ�test.txt
	////���·��д��������ڵ�ǰ����·����
	//// ..�ϼ�·��  .��ǰ·��
	////fopen("../../test.txt", "r");
	//fopen("test.txt", "r");

	////����·��д��
	//fopen("C:\\2021\\code\\d62\\test.txt", "r");


//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//���ļ�
//	//���ļ�
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
	//	// д�ļ�
	//	fputc('b', pfWrite);
	//	fputc('i', pfWrite);
	//	fputc('t', pfWrite);
	//	//�ر��ļ�
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
	//	// ���ļ�
	//	printf("%c", fgetc(pfRead));  //b
	//	printf("%c", fgetc(pfRead));  //i
	//	printf("%c", fgetc(pfRead));  //t

	//	//�ر��ļ�
	//	fclose(pfRead);
	//	pfRead == NULL;

	//	return 0;
	//}




//�Ӽ�������
//�������Ļ
//����&��Ļ�����ⲿ�豸

//���� - ��׼�����豸
//��Ļ - ��׼�����豸
//��һ������Ĭ�ϴ򿪵��������豸

int main()
{
	int ch = fgetc(stdin);
	fputc(ch, stdout);
}