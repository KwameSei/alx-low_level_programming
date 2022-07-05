#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialises a variable of type struct dog
 * @d: address of variable
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * Description: this creates object dog of the animal class
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
