#include "dog.h"
#include <stdio.h>

/**
 * init_dog- initialized daughter
 * @d: recieve dog struct empty
 * @name: name of 
 * @age: age of send
 * @owner: owder of the sid
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
