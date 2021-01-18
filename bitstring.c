#include <stdio.h> 
int main() 
{ 
	// a = 5-{00000101)}, b = 9-{00001001} 
	unsigned char a = 5, b = 9; 

	//  {00000001} 
	printf("a = %d, b = %d\n", a, b); 
	printf("a&b = %d\n", a & b); 

	//  {00001101} 
	printf("a|b = %d\n", a | b); 

        // {11111010} 
	printf("~a = %d\n", a = ~a); 
	printf("~b = %d\n", b = ~b); 

	return 0; 
} 
