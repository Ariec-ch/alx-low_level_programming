#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define a new type
 * @name: character
 * @age: float
 * @owner: anoter char
 * Description: a dog certificate
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
