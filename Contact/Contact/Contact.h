#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>



#define MAX 1000        //�趨ͨѶ¼�������
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option  //����ö����ߴ���ɶ��� 
{
	EXIT,  //0
	ADD,   //1
	DEL,   //2
	SEARCH,//3
	MODIFY,//4
	SHOW,  //5
	SORT   //6
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//ͨѶ¼��Ϣ
struct Contact
{
	struct PeoInfo data[MAX]; //���һ����Ϣ
	int size;   //��¼��ǰ������Ϣ����

};

//��������
void InitContact(struct Contact* ps);

//������Ӻ���
void AddContact(struct Contact* ps);

//������ӡ����
void ShowContact(const struct Contact* ps);

//����ɾ������
void DelContact(struct Contact* ps);

//�������Һ���
void SearchContact(const struct Contact* ps); \

//�����޸ĺ���
void ModifyContact(struct Constact* ps);