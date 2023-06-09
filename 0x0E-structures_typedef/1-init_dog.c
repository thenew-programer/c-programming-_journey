#include "dog.h"
#include "stdio.h"

/**
* init_dog - initialize a variable of type struct dog
* @d: pointer to struct dog
* @name: the name of the dog
* @age: the age of the dog
* @owner: the name of the owner of the dog
* Return: Nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
