#include<stdio.h>

int problema2(int a){
	if(a == 0){
		return 0;
	}else if(a == 1){
		return 5;
	}else{
		return (problema2(a-1) * 3);
	}
}

int main(){
	int dominio = 0;

	printf("INGRESA HASTA QUE RANGO DESEAS LA SUCESIÓ");
	scanf("%d", &dominio);

	for(int i = 1; i <= dominio; i++){
		printf("Dominio = %d\n", i);
		printf("Rango = %d\n", problema2(i));
	}
	printf("\n");
}
