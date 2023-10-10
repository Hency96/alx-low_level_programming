#ifndef INV_TREE_H
#define INV_TREE_H
/**
 * struct dog - a struct for to hold certain variable of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owners name
 * Return: always (0)
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
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
