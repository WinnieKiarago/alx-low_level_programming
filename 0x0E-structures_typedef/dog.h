#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure declaration
 * @name: element
 * @age: element
 * @owner: element
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * doggy - struct def typedef
 */
typedef struct dog doggy;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
