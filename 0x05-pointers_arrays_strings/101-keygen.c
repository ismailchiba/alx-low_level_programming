#include <stdlib.h>
#include <time.h>

int main(void)
{
	const char chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
	const int num_chars = sizeof(characters) - 1;
	
	srand(time(NULL));

	char password[12 + 1]; /* +1 for the null terminator */
	
	int i;
    
	for (i = 0; i < PASSWORD_LENGTH; ++i) 
	{
		password[i] = characters[rand() % num_characters];
    	}
    	password[PASSWORD_LENGTH] = '\0'; 

	printf("%s\n", password);

    return 0;
}
