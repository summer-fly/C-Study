#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>



#define MAX 1000        //设定通讯录最大人数
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option  //利用枚举提高代码可读性 
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

//通讯录信息
struct Contact
{
	struct PeoInfo data[MAX]; //存放一个信息
	int size;   //纪录当前已有信息个数

};

//声明函数
void InitContact(struct Contact* ps);

//声明添加函数
void AddContact(struct Contact* ps);

//声明打印函数
void ShowContact(const struct Contact* ps);

//声明删除函数
void DelContact(struct Contact* ps);

//声明查找函数
void SearchContact(const struct Contact* ps); \

//声明修改函数
void ModifyContact(struct Constact* ps);