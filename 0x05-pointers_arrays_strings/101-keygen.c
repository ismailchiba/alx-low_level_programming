#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	const char chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
	const int num_chars = sizeof(chars) - 1;

	char password[13]; /* length 13*/
	
	int i;

	srand(time(NULL));
    
	for (i = 0; i < 12; ++i) 
	{
		password[i] = chars[rand() % num_chars];
    	}
    	password[12] = '\0'; 

	printf("%s\n", password);

    return 0;
}
