#include <stdio.h>                                                                                                                        
#include "main.h"                                                                                                                         
#include <ctype.h>                                                                                                                        
                                                                                                                                          
/**                                                                                                                                       
 * _isdigit - Checks for a digit (0 through 9)                                                                                          
 *
 * Return: Always 1 (Success), 0 otherwise                                                                                                
 */                                                                                                                                       
int _isdigit(int c)                                                                                                                       
{                                                                                                                                        
	if(isdigit(c))                                                                                                                   
		return (1);                                                                                                   
	else                                                                                                                
		return (0);                                                                                                               
}                             
