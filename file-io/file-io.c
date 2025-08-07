#include <stdio.h>

int main()
{
	FILE* fp = NULL;
	fopen_s(&fp, "Test.txt", "w");
	//fopen_s(&fp, "Test.txt", "a");
	if (fp == NULL)
	{
		puts("ERROR: Failed to open file!");
		return;
	}
	//fprintf(fp, "%s\n", "Hello");
	fprintf(fp, "%s\n", "World");

	fclose(fp);
	return 0;
}