/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int LengthOfString(char *str);
int Check_Match(char *str, int start, char *word);

int count_word_in_str_way_1(char *str, char *word)
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == word[0] || str[i] == word[0] - 32 || str[i] == word[0] + 32)
		{
			int result = Check_Match(str, i, word);
			count = count + result;
		}
	}
	return count;
}

int Check_Match(char *str, int start, char *word)
{
	for (int j = start, index = 0; j < (start + LengthOfString(word)); j++, index++)
	{
		if (str[j] != word[index])
		{
			if (str[j] == word[index] - 32 || str[j] == word[index] + 32)
			{
				
			}
			else
				return 0;
		}
	}
	return 1;
}

int LengthOfString(char *str)
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}


int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

