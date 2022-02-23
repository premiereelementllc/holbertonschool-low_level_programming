#include "dog.h"
#include <stdlib.h>

 /**
 * free_dog- free the dogs
 * @d: dog to free
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

