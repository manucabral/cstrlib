#ifndef CSTRLIB_INCLUDED
#define CSTRLIB_INCLUDED

#define UC unsigned char
#define CC const char

#include <stdlib.h>
#include <stdio.h>

/**
 * @brief Checks if a string is empty.
 *
 * @param string The string.
 * @return int True if empty, otherwise false.
 */
int cstrempty(UC *string);

/**
 * @brief Get the length of a string.
 *
 * @param string The string.
 * @return size_t The length of the string.
 */
size_t cstrlen(UC *string);

/**
 * @brief Get a character from a specific position in a string.
 *
 * @param string The string.
 * @param index Position in the string.
 * @return int The character or empty if out of range.
 */
char cstrget(UC *string, int index);

/**
 * @brief Get the first character of a string.
 *
 * @param string The string.
 * @return char The first character.
 */
char cstrgetf(UC *string);

/**
 * @brief Compare if two strings are equal.
 *
 * @param alpha First string.
 * @param beta Second string.
 * @return int 0 equals, otherwise not equal.
 */
int cstrcmp(UC *alpha, UC *beta);

/**
 * @brief Copy a string to another string.
 *
 * @param string Source string.
 * @param dest Destination string.
 * @return char True success, otherwise false.
 */
int cstrcpy(UC *string, UC *dest);

/**
 * @brief Appends a string to another string.
 *
 * @param dest Destination string.
 * @param string String to be appended.
 * @return char Destination string with the string appended.
 */
char *cstradd(UC *dest, UC *string);

/**
 * @brief Replaces a char for another char
 *
 * @param source Source string
 * @param search The char being searched
 * @param replace The replacement char
 */
void cstrcr(UC *string, CC search, CC replace);

#endif
