#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fatorial_recursivo(int n){
	if(n == 1){
		return n;
	}else{
		return n * fatorial_recursivo(n-1);
	}
}

int main(int argc, char *argv[]) {
	int n = 5;
	
	printf("Fatorial recursivo: %d", fatorial_recursivo(n));
	
	return 0;
}
