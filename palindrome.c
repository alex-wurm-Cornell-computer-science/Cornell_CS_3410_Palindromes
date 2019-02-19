#include <stdio.h>

int main()
{

	char str[100];
	int i, length=0, flag=0, start, middle,  end;
	
	printf("Input a string: ");

	// Read in input from the command line
	
	fgets(str,101, stdin);

	// Find the length of the string.
	// Hint: How do you know when a string ends in C?

	for(i = 0; str[i] != '\0'; ++i);

	//Account for the '\n' from fgets()
	length = i-1;  
	str[length] = '\0';

	//Can check string length: printf("Length of string: %d \n", length);

	// Check if str is a palindrome.

	start = 0;
	middle = (length)/2;
	end = length - 1;
	
	for(start = 0; start < middle; start++) {
		if(str[start] != str[end]) {
			flag = 1;
			break;
		}
		end--;
	}

	if(start != middle)
		flag = 1;


	if(flag==1)
		printf("%s is not a palindrome. \n", str);
	else
		printf("%s is a palindrome. \n", str);

	return 0;
}
