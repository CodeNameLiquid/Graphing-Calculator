// C program to demonstrate use of rename()
#include <stdio.h>

int main()
{
	// Old file name
	char old_name[] = "prototype.c";

	// Any string
	char new_name[] = "prototype.txt";
	int value;

	// File name is changed here
	value = rename(old_name, new_name);

	// Print the result
	if (!value) {
		printf("%s", "File name changed successfully");
	}
	else {
		perror("Error");
	}
	return 0;
}
