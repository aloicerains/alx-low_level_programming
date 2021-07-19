#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines the dog variable
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: The struct dog identifes the traits of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);

#endif