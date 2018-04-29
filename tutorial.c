#include <stdio.h>
#include <string.h>

int main(){
	int num1, num2 = 32;
	float x = 2.34;
	char c = 'a';
	char n[21];
	strcpy(n, "Hello World");
	printf("Inserisci il numero intero positivo \n");
	scanf("%d", &num1);
	int somma = num1 + num2;
	printf("%s , verifichiamo subito la somma : %d\n", n, somma);
	printf("Il carattere : %c, con il numero reale : %f\n", c, x);
	return 0;
}