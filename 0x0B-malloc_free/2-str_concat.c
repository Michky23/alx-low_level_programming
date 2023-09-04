#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * Return: pointer to newly allocated space or NULL
 */

char *str_concat(char *s1, char *s2)

{
	size_t strlen1 = 0;
	size_t strlen2 = 0;
	size_t a;
	char *k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		strlen1++;
	for (a = 0; s2[a] != '\0'; a++)
		strlen2++;
	k = malloc(sizeof(char) * (strlen1 + strlen2 + 1));

	if (k == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		k[a] = s1[a];
	for (a = 0; s2[a] != '\0'; a++)
		k[strlen1 + a] = s2[a];

	return (k);

}
