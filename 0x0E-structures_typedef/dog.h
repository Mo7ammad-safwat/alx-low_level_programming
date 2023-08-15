#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - a dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

/* define a new type dog_t as a new name for the type struct dog */
typedef struct dog dog_t;

/**
 * main - main function
 *
 * Return: 0 on success
 */
int main(void)
{
dog_t my_dog;

my_dog.name = "Poppy";
my_dog.age = 3.5;
my_dog.owner = "Bob";
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
return (0);
}
#endif

