#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
int arr[5];
int a;
int *pt;
int b;

for (a=0;a<5;a++){

	printf("Array[%u]: ",a);
	scanf("%d", &b);
	arr[a]=b;
  	if(a==5){
		pt=&b;
		*pt = b;
	}

}
for (a=5-1;a>=0;a--){
	pt=&arr[a];
	*pt = arr[a];

	printf("\nValue of A = %d", arr[a]);
	printf("\nAddress of A = %p", pt);

}
return 0;

}
