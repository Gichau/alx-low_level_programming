#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - structure of dog
 * @name : name of dog
 * @age : age of dog
 * @owner : owner of dog
 * return - always 0
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
#endif
