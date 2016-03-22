/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

int StringLength(char *str);

char * get_last_word(char * str)
{
	if (str != NULL)
	{
		int start = StringLength(str) - 1, end = start;
		int flag = 0, index = 0;
		//identify the start and end index of last word
		for (int i = StringLength(str) - 1; i >= 0; i--)
		{
			if (str[i] == ' ')
			{
				if (flag == 1)
				{
					start = start + 1;
					break;
				}
				end--;	start--;
			}
			else
			{
				flag = 1;
				start--;
			}
		}
		//this condition is, if the string contains no characters
		if (end < 0 && start < 0)
		{
			return "";
		}

		char *last_word = (char *)malloc(sizeof(char)*(end - start));

		//this condition is, if the string has only one letter
		if (start < 0 && end == 0)
		{
			start = end;
		}
		//this condition is, if the string has only one word with no spaces
		if (start < 0 && end > 0)
		{
			start = start + 1;
		}
		//place the last word characters in 'last_word' string
		for (index = start; index <= end; index++)
		{
			last_word[index - start] = str[index];
		}
		last_word[index - start] = '\0';
		return last_word;
	}
	return NULL;
}

int StringLength(char *str)
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}