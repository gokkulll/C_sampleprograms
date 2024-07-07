#include<stdio.h>
#include<string.h>

int main() {
	char str[] = "hello,embedded,you,are,welcome";
	char* token = strtok(str, ",");

	while (token!=NULL) {
		printf("%s", token);
		printf("\n");
		token = strtok(NULL, ",");
	}
	return 0;
}
