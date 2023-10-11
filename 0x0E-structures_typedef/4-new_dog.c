#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

int _strlen (char *word);
void _strcpy(char *fir, char *sec);

/**
 * new_dog - new identity of a dog
 * @name: name
 * @age: it's age
 * @owner: name of owner
 * Return: Null if failure, else nain
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mine_dog;
	int length, length2;

	length = _strlen(name);
	length2 = _strlen(owner);

	mine_dog = malloc(sizeof(dog_t));
	if (mine_dog == NULL)
	{
		free(mine_dog);
		return (NULL);
	}

	mine_dog->name = malloc(sizeof(char) * (length + 1));
	if (mine_dog->name == NULL)
	{
		free(mine_dog->name);
		free(mine_dog);
		return (NULL);
	}

	mine_dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (mine_dog->owner == NULL)
	{
		free(mine_dog->owner);
		free(mine_dog);
		return (NULL);
	}

	_strcpy(mine_dog->name, name);
	_strcpy(mine_dog->owner, owner);
	mine_dog->age = age;

	return (mine_dog);
}

/**
 * _strlen - length of name and owner
 * @word: the word passed
 * Return: length
 */
int _strlen (char *word)
{
	int i = 0;

	while (word[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - copies the name into mine_dog->name & owner
 * @fir: where to cp into
 * @sec: where to cp from
 */
void _strcpy(char *fir, char *sec)
{
	int n;
	int i = 0;

	while (sec[i] != '\0')
		i++;
	for (n = 0; n < i; n++)
		fir[n] = sec[n];
	fir[n] = '\0';

}
