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
	char operacao; // oper��o matem�tica +, - * /
	
	do{
		
		printf("\n\nCalculadora em C\n");
		printf("Opera��es dispon�veis: \n");
		printf("+  ADI��O\n");
		printf("-  SUBTRA��O\n");
		printf("*  MULTIPLICA��O\n");
		printf("/  DIVIS�O\n");
		printf("Digite 000 para sair do sistema.\n");
		
		// Digita��o dos valores e opera��o matematica
		printf("Digite o primeiro n�mero: ");
		scanf("%f",&n1);
		printf("Escolha a opera��o desejada: ");
		fflush(stdin);// limpar buffer teclado
		scanf("%c",&operacao);
		printf("Digite o segundo n�mero:");
		scanf("%f",&n2);
		
		system("cls");// limpar tela
		
		printf("\nCalculando %.1f %c %.1f  ",n1,operacao,n2);
		
		switch(operacao){
			
			case '+':
				printf("Soma= %.1f\n",n1+n2);
			break;
				
			case '-':
				printf("Subtra��o= %.1f\n",n1-n2);
			break;
			
			case '*':
				printf("Multiplica��o= %.1f\n",n1*n2);
			break;
			
			case '/':
				printf("Divis�o= %.1f\n",n1/n2);
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
