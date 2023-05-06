#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int somar( int a, int b ){
	int result = a + b;
	return result; 
}

int subtrair( int a, int b ){
	int result = a - b;
	return result;
}

int multiplicar( int a, int b ){
	int result = a * b;
	return result;
}

float dividir( int a, int b ){
	int result = a / b;
	return result;
}

int main(int argc, char *argv[]) {
	int result,a,op,b;
	
	do{
		printf("                       CALCULADORA SIMPLES\n\n\n");
		printf("                       digite um numero:");
		scanf("%d",&a);
		printf("                       digite um numero:");
		scanf("%d",&b);
		printf("                    ----------------------------\n");
		printf("                    1-somar\n                    2-subtrair\n                    3-multiplicar\n                    4-divisao\n                    5-sair\n                    Escolha:");
		scanf("%d",&op);
		
		switch ( op ){
			case 1:
				printf("                    ----------------------------\n");
				printf("                    somando...\n");
				printf("                    %d\n",result = somar( a, b ));
				system("pause");
				system("cls");
				break;
			case 2:
				printf("                    ----------------------------\n");
				printf("                    subtraindo...\n");
				printf("                    %d\n",result = subtrair( a, b ));
				break;
			case 3:
				printf("----------------------------\n");
				printf("                    multiplicando...\n");
				printf("                    %d\n",result = multiplicar( a, b ));
				break;
			case 4:
				printf("                    ----------------------------\n");
				printf("                    dividindo...\n");
				printf("                    %d\n",result = dividir( a, b ));
				break;
			case 5:
				printf("                    ----------------------------\n");
				printf("                    saindo...");
				break;	
		}	
	}while ( op!=  5);
	return 0;
}
