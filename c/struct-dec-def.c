#include <stdio.h>
#include <string.h>

struct USERDATA
{
	int age;
	char name[10];
	char phone[20];
};

int main()
{
	struct USERDATA user1 = { 0, "", "" };
	user1.age = 10;

	strcpy_s(user1.name, sizeof(user1.name), "Hoon");
	strcpy_s(user1.phone, sizeof(user1.phone), "010-2222-4444");

	printf("%d»ì, %s, %s", user1.age, user1.name, user1.phone);
	return 0;
}