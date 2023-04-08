#include <unistd.h> 
 
/** 
 * _putchar - write the character C to stdout 
 * @c: The character to be printed 
 * 
 * Return: when  success 1. 
 * On error, -1 is returned, and erorr no is set
 */ 
int _putchar(char c) 
{ 
 return (write(1, &c, 1)); 
} 
