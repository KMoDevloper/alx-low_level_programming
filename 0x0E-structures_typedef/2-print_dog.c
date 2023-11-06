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
		printf("NAME: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("AGE: %.6f\n", d->age);
		printf("OWNER: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
