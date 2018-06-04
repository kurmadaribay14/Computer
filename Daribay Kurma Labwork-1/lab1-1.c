#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
int arr[10];
int a;
int *pt;
int b;

for (a=0;a<10;a++){

	printf("Array[%u]: ",a);
	scanf("%d", &b);
	arr[a]=b;
  	if(a==(10-1)){
		pt=&b;
		*pt = b;
	}

}
for (a=10-1;a>0;a=a-2){
	pt=&arr[a];
	*pt = arr[a];

	printf("\nValue of A = %d", arr[a]);
	printf("\nAddress of A = %p", pt);

}
return 0;

}
