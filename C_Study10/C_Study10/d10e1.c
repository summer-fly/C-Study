#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//���ֲ����������鷽��
int main ()
{
	int k = 17;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };    
	int sz = sizeof(arr) / sizeof(arr[0]);    //����Ԫ����Ŀ
	int left = 0;                            //���±�
	int right = sz-1;                        //���±�
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;

		}
		else if (arr[mid] < k)
		{
			left = mid + 1;

		}
		else if (arr[mid] == k)
		{
			printf("�ҵ��ˣ��±��� %d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ�����");
	}
	return 0;
}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a=5;
//	int i;
//	//scanf("��Ҫ�ҵ������ǣ�%d\n", &a);
//	int z = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i<z; i++)
//	{
//		if (arr[i] == a)
//		{
//			printf("�±��� %d", i);
//			break;
//		}
//		
//	}
//	if (i == z)
//	{
//		printf("zhoabudao ");
//	}
//	return 0;
//}