#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
int sum = 0, i=0; 
FILE *f;
if((f = fopen(argv[1], "r")) == NULL)
{
exit(-1);
}

while(!feof(f))
{
if (fscanf(f, " %d\n", &i) != 1) {
// No numbers
break;
}

printf("%d ", i);
sum += i;
++ i;
}

fclose(f);

printf("Sum = %d\n", sum);


return 0;
}
