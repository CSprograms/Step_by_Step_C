/**
* program04.c
* Reading and Printing Basic Data Type - char
*/

#include<stdio.h>

int main()
{
	char character;
	
	printf("Enter the Character Value : ");
	scanf("%c", &character);

    printf("User Input Value : %c.", character);

    return 0;
}