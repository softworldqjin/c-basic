#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct USERDATA
{
	int age;
	char name[10];
	char phone[20];
}USERDATA;

int main()
{
	USERDATA* pUser = NULL;

	
	pUser = (USERDATA*)malloc(sizeof(USERDATA));

	pUser->age = 10; //(*pUser).age 
	strcpy_s(pUser->name, sizeof(pUser->name), "Hoon");
	strcpy_s(pUser->phone, sizeof(pUser->phone), "010-2222-4444");

	printf("%d %s %s", pUser->age, pUser->name, pUser->phone);
	return 0;
}