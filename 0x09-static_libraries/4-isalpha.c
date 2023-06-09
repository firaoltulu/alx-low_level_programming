#include "main.h"

/**
 * _isalpha - checks for english alphabetic character
 *
 * author: firaol tulu lemma
 *
 * @c: Is the chaacter that is passed to this function from
 * the caller to be checked
 *
 * Return: 1 if c is a letter, 0 if not
 *
 */

int _isalpha(int c)
{

if ((c >= 'a' && c <= 'z'))
return (1);

if ((c >= 'A' && c <= 'Z'))
return (1);

else
return (0);

}
