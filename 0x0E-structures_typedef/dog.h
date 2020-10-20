#ifndef STRUCT_H
#define STRUCT_H
/**
 * struct dog - My first structure about dogs and owners.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner.
 * Desciption: Struct that define type of variables.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* STRUCT_H */
