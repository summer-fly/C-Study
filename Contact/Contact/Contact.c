#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"

//ʵ�ֺ���
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0; //��ʼ��ͨѶ¼���ֻ��0��Ԫ��
}

//ʵ����Ӻ���
void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷�����");
	}
	else
	{
		printf("���������֣�>");
		scanf("%s", ps->data[ps->size].name);
		printf("���������䣺>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�>");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰��>");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ��>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("��ӳɹ�!!!\n");
	}
}

//ʵ�ִ�ӡ����
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	else
	{
		int i = 0;
		//��ӡ����
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰","��ַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", 
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

//ʵ�ֲ��Һ���,�Ա��ں���������¼��ٴ�������
int FindByName(struct Contact*ps,char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}

	}
	return -1;
}

//ʵ��ɾ������
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:>");
	scanf("%s",name);
	//1.����Ҫɾ��������ʲô�ط�
	int pos = FindByName(ps, name);  //�ҵ�����Ԫ���±꣬�Ҳ�������-1
	if (pos == -1)   //������֮��û������� 
	{
		printf("���޴��ˣ�\n\n");
	}
	else                 //����֮���ҵ������
	{
		//ɾ�����ݣ��ú����Ԫ�ظ���ǰ���Ԫ�أ�
		int j = 0;
		for (j = pos; j < ps->size-1 ; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ���\n\n");
	}

}



//ʵ�ֲ��Һ���
void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("��������ҵ��˵���Ϣ:> ");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲����ڣ�\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
		
	}
}


//ʵ���޸ĺ���
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ��˵�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˵���Ϣ������");

	}
	else 
	{
		printf("���������֣�>");
		scanf("%s", ps->data[pos].name);
		printf("���������䣺>");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰��>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ��>");
		scanf("%s", ps->data[pos].addr);
		printf("�޸����");

	}

}