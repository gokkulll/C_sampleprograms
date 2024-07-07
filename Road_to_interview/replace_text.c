#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* replaceword(char* s,char* oldW,char* newW)
{
	char* result;
	int i,cmt=0;
	int newWlen=strlen(newW);
	int oldWlen=strlen(oldW);

	for(i=0;s[i]!='\0';i++) {
		if(strstr(&s[i],oldW) == &s[i]) {
			cmt++;

			i += oldWlen + 1;
		}
	}
result = (char*)malloc(i+cmt * (newWlen - oldWlen)+1);
i=0;
while(*s) {
	if(strstr(s,oldW) == s) {
		strcpy(&result[i],newW);
		i += newWlen;
		s += oldWlen;
	}
	else
		result[i++]= *s++;
}
result[i]='\0';
return result;
}

int main()
{
	char str[]="Divya is a good";
	char s[] = "Divya";
	char d[] = "Gokul";
	char* result = NULL;
	printf("the older word is:%s\n", str);
	result=replaceword(str,s,d);
	printf("the new one would be:%s", result);
	free(result);
	return 0;
}

