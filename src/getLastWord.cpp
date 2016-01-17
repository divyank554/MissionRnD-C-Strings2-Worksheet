/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str)
{
	char *strnew;
	strnew = (char*)malloc(sizeof(char));
	int i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	int j = 0;
	while (str[i] != ' ' && i >= 0)
	{
		strnew[j] = str[i];
		j++;
		i--;
	}
	strnew[j] = '\0';
	j--;
	char temp;
	int itr1 = 0;
	while (itr1 < j)
	{
		temp = strnew[itr1];
		strnew[itr1] = strnew[j];
		strnew[j] = temp;
		itr1++;
		j--;
	}

	return strnew;
}
