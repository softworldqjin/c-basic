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
		{"김두식", "1234", NULL},
		{"이미현", "2345", NULL},
		{"김봉석", "3456", NULL},
		{"장희수", "4567", NULL}
	};

	userList[0].next = &userList[1];
	userList[1].next = &userList[2];
	userList[2].next = &userList[3];
	userList[3].next = NULL;

	//재귀함수로 모든 요소를 호출해라..
	rere(&userList);

	return 0;
}