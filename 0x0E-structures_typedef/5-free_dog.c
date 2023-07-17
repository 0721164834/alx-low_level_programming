#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - freea dogs
 * @d: free it
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	/*free memory for owner and name string*/
	free(d->name);
	free(d->owner);
	/*free memory for dog stricture*/
	free(d);
}
