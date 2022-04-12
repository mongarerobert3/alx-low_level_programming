#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef for dog structure
 */
typedef dog dog_t;

/**
 *struct - structure for the dog
 */

struct dog
{
	char *name;
	char *owner
	int age
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
