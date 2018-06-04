#include <stdio.h>
#include <stdlib.h> // exit(), EXIT_FAILURE
#include <limits.h> // INT_MAX, INT_MIN

int main()
{
int min = INT_MAX;
int max = INT_MIN;
int a; // current value read from file

FILE * file = NULL;
if( NULL == (file = fopen ("in.txt", "r") ) )
{ // then, fopen failed
perror( "fopen for in.txt failed" );
exit( EXIT_FAILURE );
}

// implied else, fopen successful

while( fscanf(file, "%d", &a) )
{
if( a < min ) min = a;
if( a > max ) max = a;
} // end while

printf("Maximum: %d\n", max);
printf("Minimum: %d\n", min); // '\n' causes output to terminal

fclose (file);
getchar();
return( 0 );
} // end function: main
