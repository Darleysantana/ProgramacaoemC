#include <stdio.h>
#include <string.h>

int main(){

int voltagem;
string maquina(9)[];
int tamanho;

printf("Digite a voltagem da sua maquina 110 ou 220: ");
scanf("%i" &voltagem);
printf("Digite para qual maquina é expositor, balcão ou freezer: ");
scanf("%c" &maquina);
printf("Digite o tamanho do micro ventilador: ");
scanf("%i" &tamanho);

	if(voltagem == 110 && maquina == expositor || tamanho == 1/20){
		printf("Fiação Unica com um polo negativo e outro positivo!");
		}
	else if(voltagem == 220 && maquina == expositor || tamanho == 1/20){
		printf("Fiação Unica com um polo negativo e outro positivo!");
		}
	else if(voltagem == 110 && maquina == balcao || tamanho == 1/25){
		printf("Fiação Azul e Preto para um polo e Vermelho e Branco para outro polo!");
		}
	else if(voltagem == 220 && maquina == balcao || tamanho == 1/25){
		printf("Fiação Azul e Branco para um polo e Vermelho e Preto para outro polo!");
		}
	else if(voltagem == 110 && maquina == freezer || tamanho == 1/40){
		printf("Fiação Azul e Preto para um polo e Vermelho e Branco para outro polo!");
		}
	else if(voltagem == 220 && maquina == freezer || tamanho == 1/40){
		printf("Fiação Azul e Branco para um polo e Vermelho e Preto para outro polo!");
		}
}
