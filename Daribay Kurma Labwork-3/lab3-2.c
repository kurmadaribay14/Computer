/* C Program to count the Number of Lines in a Text File  */
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char** argv)
{
char c1;  
char c2;
int count1 = 0;  
int count2 = 0;
  
FILE *fp1 = fopen(argv[1], "r");
FILE *fp2 = fopen(argv[2], "r");

if (fp1 == NULL)
   {
       printf("Could not open file %s",argv[1]);
       return 1;
   }

for (c1 = getc(fp1); c1 != EOF; c1 = getc(fp1))
       if (c1 == '\n') 
           count1 = count1 + 1;

for (c2 = getc(fp2); c2 != EOF; c2 = getc(fp2))
       	if (c2 == '\n') 
           count2 = count2 + 1;

printf("%d %d\n ",count1,count2);
fclose(fp1);
return 0;
}

