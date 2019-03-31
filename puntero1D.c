#include <stdio.h>
#include <stdlib.h>


int main(){

int n,i;
int *p;
int min;

printf("Dime el nº de ellos. \n");
scanf("%d",&n);


p=(int *)malloc(n*sizeof(int));

for(i=0;i<n;i++){
	printf("Dame los numeros: \n");
	scanf("%d",&*(p+i));
	}
min=*(p+0);
for(i=0;i<n;i++){
	if(*(p+i)<min) {
	min =*(p+i);
	}


}

printf("el mínimo es : %d\n",min);

free(p);
return 0;
}
