#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's info
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * 
 * description: a struct that defines the details of a dog
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * gog_t - Typedef for dog
 */
typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
