#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 * Return: pointer to a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	unsigned int newdog, olddog, newowner;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (newdog = 0; name[newdog]; newdog++)
		;
	newdog++;
	dog->name = malloc(newdog * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (newowner = 0; newowner < newdog; newowner++)
		dog->name[newowner] = name[newowner];
	dog->age = age;
	for (olddog = 0; owner[olddog]; olddog++)
		;
	olddog++;
	dog->owner = malloc(olddog * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (newowner = 0; newowner < olddog; newowner++)
		dog->owner[newowner] = owner[newowner];
	return (dog);
}
