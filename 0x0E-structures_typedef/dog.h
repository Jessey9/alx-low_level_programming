#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type structure of dog
 * @name: Name of dog
 * @age: Dog's age
 * @owner: Name of owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
