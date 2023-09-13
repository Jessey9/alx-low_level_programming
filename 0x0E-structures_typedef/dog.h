#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type structure of dog
 * @name: Name of dog
 * @age: Dog's age
 * @owner: Name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif