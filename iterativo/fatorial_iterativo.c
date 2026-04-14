#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fatorial_iterativo(int n){
	int i;
	int fatorial = 1;
	
	for(i = 2; i <= n; i++){
		fatorial *= i;
	}
	
	return fatorial;
}

int main(int argc, char *argv[]) {
	int n = 5;
	
	printf("Fatoiral iterativo: %d", fatorial_iterativo(n));
	
	return 0;
}
