#include <stdio.h>

typedef struct MYBODY
{
	int height;
	int weight;
}MYBODY;

typedef struct USERDATA
{
	char name[32];
	char phone[32];
	MYBODY body;
}USERDATA;

int main()
{
	USERDATA user = {
		"Hoon",
		"1234",
		{175,70}
	};

	printf("%s %s %d %d", user.name, user.phone, user.body.height, user.body.weight);

	return 0;
}