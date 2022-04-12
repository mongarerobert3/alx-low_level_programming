#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef for dog structure
 */
typedef struct dog dog_t;

/**
 *struct - structure for the dog
 *@name: first member
 *@age:third member
 @owner: second member
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
