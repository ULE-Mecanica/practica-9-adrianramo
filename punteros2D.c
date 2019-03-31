#include <stdio.h>
#include <stdlib.h>


int main(){
int f,c,i,j,suma=0;
int *mat;

printf("Dame el primer numero: \n");
scanf("%d",&f);

printf("Dame el segundo numero: \n");
scanf("%d\n",&c);


mat=(int *)malloc(f*c*sizeof(int));

for(i=0;i<f;i++){
	for(j=0;j<c;j++){
	
	
	scanf("%d",&*(mat+f*i+j));
	suma=suma+*(mat+f*i+j);
	
	}

}
for(i=0;i<f;i++){
	for(j=0;j<c;j++){
	
	printf(" %4d",*(mat+f*i+j));
	}
	printf("\n");
}
	

printf("\nLa suma es: %d\n\n",suma);

free(mat);
return 0;	
}	
