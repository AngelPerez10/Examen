#include<stdio.h>

void result(int,int);
int main(){
	
	int num,b;
	printf("INGRESA EL NUMERO DE LA SECUENCIA \n");
	scanf("%d",&num);
	
	result(num, b);
	return 0;
	
}
void result(int a, int b){
	if(a < b){
		printf("\n%d ", a);
		a = a * 3;
		result(a,b);
	}

}