#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new dog and initializes its members
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner's name of the dog
 *
 * Return: Pointer to the newly created dog_t structure, or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len = 0, owner_len = 0, i;

	while (name[name_len] != '\0')
		name_len++;
	while (owner[owner_len] != '\0')
		owner_len++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(name_len + 1);
	new_dog->owner = malloc(owner_len + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		new_dog->name[i] = name[i];

	for (i = 0; i <= owner_len; i++)
		new_dog->owner[i] = owner[i];

	new_dog->age = age;

	return (new_dog);
}
