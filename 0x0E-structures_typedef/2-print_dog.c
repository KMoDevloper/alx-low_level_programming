#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the struct declared for dog d
 *
 * @d: the new dog d of type struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		return;
	}
	else
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
		printf("Age: %.6f\n", d->age);
	}
}
