#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct USERDATA
{
	int age;
	char name[32];
	char phone[32];
}USERDATA;

void GetUserData(USERDATA* pUser)
{
	scanf_s("%d%*c", &pUser->age);

	gets_s(pUser->name, sizeof(pUser->name));
	gets_s(pUser->phone, sizeof(pUser->phone));
	
	return;
}
int main()
{
	USERDATA user = { 0 };
	GetUserData(&user);
	printf("%d»ì %s %s", user.age, user.name, user.phone);
}
