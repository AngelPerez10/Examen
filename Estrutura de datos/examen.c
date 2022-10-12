//Adolfo Angel Perez Salado

#include<stdio.h>

int recusivo(int a){
	if(a == 0){
		return 0;
	}else if(a == 1){
		return 5;
	}else{
		return (recusivo(a-1) * 3);
	}
}

int main(){
	int dom = 0;

	printf("INGRESA HASTA QUE RANGO DESEAS LA SUCESIÓ: ");
	scanf("%d", &dom);

	for(int i = 1; i <= dom; i++){
		printf("El dominio = %d\n", i);
		printf("El rango es igual a = %d\n", recusivo(i));
	}
	printf("\n");
}
