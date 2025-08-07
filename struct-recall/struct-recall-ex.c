#include <stdio.h>

typedef struct USERDATA
{
	char name[32];
	char phone[32];

	struct USERDATA* next;
}USERDATA;

void rere(USERDATA* reList)
{
	if (reList == NULL) return;

	printf("%s %s\n", reList->name, reList->phone);
	rere(reList->next);
	
	return;
}
int main()
{
	USERDATA userList[4] = {
		{"��ν�", "1234", NULL},
		{"�̹���", "2345", NULL},
		{"�����", "3456", NULL},
		{"�����", "4567", NULL}
	};

	userList[0].next = &userList[1];
	userList[1].next = &userList[2];
	userList[2].next = &userList[3];
	userList[3].next = NULL;

	//����Լ��� ��� ��Ҹ� ȣ���ض�..
	rere(&userList);

	return 0;
}