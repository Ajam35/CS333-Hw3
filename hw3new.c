
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 21
//Andrew LaRoche
//CS333 2016
//A program that calculates an inputted mathematical phrase executed like a calculator


int main (void)

{
	char charArr[MAX];
	int i,len,answer;

//prompt user to input a mathematical phrase:
printf("Please enter a mathematical phrase\n");


fgets(charArr, 21, stdin);

answer = charArr[0] - '0';

len = strlen(charArr);



//while loop to read through each character in string while (getchar(c)!= '/n')
	for (i = 0; i < len && charArr[i] != '\n'; i++)
	{
		
		if (charArr[i] == '+')
		{
			answer += charArr[i+1] - '0';
		}
		else if (charArr[i] == '-')
		{
			answer -= charArr[i+1] - '0';
		}
		else if (charArr[i] == '*')
		{
			answer *= charArr[i+1] - '0';
		}
		else if (charArr[i] == '/')
		{
			answer /= charArr[i+1] - '0';
		}
		else if (charArr[i] == ' ')
		{
			charArr[i+2];
		}

	}

printf("Your answer is %d \n", answer);
return 0;


}



