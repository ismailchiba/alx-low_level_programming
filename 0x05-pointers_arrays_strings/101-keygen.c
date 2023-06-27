#include <stdlib.h>
#include <time.h>

int main(void)
{
	const char chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
	const int num_chars = sizeof(chars) - 1;
	
	srand(time(NULL));

	char password[12 + 1]; /* +1 for the null terminator */
	
	int i;
    
	for (i = 0; i < 12; ++i) 
	{
		password[i] = chars[rand() % num_chars];
    	}
    	password[12] = '\0'; 

	printf("%s\n", password);

    return 0;
}
