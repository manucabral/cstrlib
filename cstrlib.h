#pragma once

#ifndef CSTRLIB_INCLUDED
#define CSTRLIB_INCLUDED

#include <stdlib.h>
#include <stdio.h>

/**
 * @brief Checks if a string is empty.
 * 
 * @param string The string.
 * @return int True if empty, otherwise false.
 */
int cstrempty(unsigned char *string);

/**
 * @brief Get the length of a string.
 * 
 * @param string The string.
 * @return int The length of the string.
 */
int cstrlen(unsigned char *string);

/**
 * @brief Get a character from a specific position in a string.
 * 
 * @param string The string.
 * @param index Position in the string.
 * @return int The character or empty if out of range.
 */
char cstrget(unsigned char *string, int index);

/**
 * @brief Get the first character of a string.
 * 
 * @param string The string.
 * @return char The first character.
 */
char cstrgetf(unsigned char *string);

#endif