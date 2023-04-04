#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<ctype.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	system("color E");
	
	float n1,n2;
	char operacao; // operção matemática +, - * /
	
	do{
		
		printf("\n\nCalculadora em C\n");
		printf("Operações disponíveis: \n");
		printf("+  ADIÇÃO\n");
		printf("-  SUBTRAÇÃO\n");
		printf("*  MULTIPLICAÇÃO\n");
		printf("/  DIVISÃO\n");
		printf("Digite 000 para sair do sistema.\n");
		
		// Digitação dos valores e operação matematica
		printf("Digite o primeiro número: ");
		scanf("%f",&n1);
		printf("Escolha a operação desejada: ");
		fflush(stdin);// limpar buffer teclado
		scanf("%c",&operacao);
		printf("Digite o segundo número:");
		scanf("%f",&n2);
		
		system("cls");// limpar tela
		
		printf("\nCalculando %.1f %c %.1f  ",n1,operacao,n2);
		
		switch(operacao){
			
			case '+':
				printf("Soma= %.1f\n",n1+n2);
			break;
				
			case '-':
				printf("Subtração= %.1f\n",n1-n2);
			break;
			
			case '*':
				printf("Multiplicação= %.1f\n",n1*n2);
			break;
			
			case '/':
				printf("Divisão= %.1f\n",n1/n2);
			break;
			
			default:
				if(n1!=0 && operacao != '0' && n2 !=0){
					printf("Operador invalido\n");
					
				}
				else{
					printf("saindo do sistema!\n");
				}
				
		}
		
	}while(n1 !=0 && operacao !='0'&& n2 !=0);
	
	printf("\n\n");
	system("pause");
	getchar();
	return 0;
}
