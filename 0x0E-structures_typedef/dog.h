#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's structer
 * @name: string input
 * @age: integer input
 * @owner: string input
 *
 * Description: dog can have name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
#endif
