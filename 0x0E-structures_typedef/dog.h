#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type describing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */

struct dog
{
    /* data */
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
