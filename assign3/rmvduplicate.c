/* Write a program to remove duplicate characters from a string.
 */

#include<stdio.h>
#include<string.h>
char* removeDuplicate(char str[], int n)
{

	int index = 0;

	for (int i = 0; i < n; i++){
		int j;
		for(j = 0; j < i; j++){
			if (str[i] == str[j])
				break;
		}

		if (j == i)
			str[index++] = str[i];
	}

	str[index] = '\0';

	return str;
}

int main()
{
	char str[100];
	printf("Enter the string:\n");
	scanf("%s",str);
	int n = sizeof(str)/ sizeof(str[0]);
	printf("%s\n",removeDuplicate(str, n));
	return 0;
}
