#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Basic information about the dog
 * @name: The dog's name (as char)
 * @age: The dog's age (as float)
 * @owner: The dog's owner (as char)
 *
 * Description: The struct dog will contain basic info about the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
