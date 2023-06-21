#include "main.h"
/**
 * checks_for_lowercase_character - check lowercases
 * @c: character to be checked
 * Return:1 if c is lowercase, otherwise 0
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
