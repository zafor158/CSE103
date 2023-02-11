#include <stdio.h>

int word_count(char *p){

	int i, count=0;
	for (i=0; p[i] != '\0';i++)
		if (p[i] == ' ' || p[i] == '\t' ||p[i] == '\n')
			count++;
	return count+1; // add 1 to include the last word
}

int main()
{
	char arr[]={"This is a test\tnipu\ntaukir"};
	int num_words;
	num_words = word_count(arr);
	printf ("%d", num_words);

}
