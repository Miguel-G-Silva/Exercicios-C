#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[10], i, j, maior;
	
	i = 0;
	j = 0;
	maior = 0;
	
	for (i = 0; i < 10; i++){
		printf("Digite um numero");
		scanf("%d", &num[i]);
	
	}
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			if (num[j] > num[j + 1]){
				maior = num[j];
				num[j] = num[j +1];
				num[j + 1] = maior;
			}
		}
	}
	
		
	for (i = 0; i < 10; i++){
		printf("%d \n", num[i]);
	}
	
		
	return 0;
}
