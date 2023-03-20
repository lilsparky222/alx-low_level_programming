#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct for dog object
 * @name: The name of the dog
 * @age: the age of this dog
 * @owner: The owner of this dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dogg;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dogg *new_dog(char *name, float age, char *owner);
void free_dog(dogg *d);

#endif
