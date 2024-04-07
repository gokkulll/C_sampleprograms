#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j,length=0;
	char c[100];
	printf("Enter the string:");
	scanf("%s", c);
	length = strlen(c);
	for(i=0;i<length;i++)
	{
		if(c[i]=='A'|| c[i]=='E'|| c[i]=='I'|| c[i]=='O'|| c[i]=='U'|| c[i]=='a'|| c[i]=='e'|| c[i]=='i'|| c[i]=='o'|| c[i]=='u')
		{
			for(j=i;j<length;j++)
			{
				c[j]=c[j+1];
			}
		}
		c[length+1] = '\0';
	}
	printf("After deletion:%s", c);
	return 0;
}
