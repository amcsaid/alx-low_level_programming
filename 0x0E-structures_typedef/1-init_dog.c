#include "main.h"
#include "dog.h"

/**
 * is_prime_number - check the code
 * @n: int input
 * Description: Recursion manipulation
 * Return: is prime or not
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
