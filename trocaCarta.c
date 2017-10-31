#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	#define MAX 12
//	char numCartas[6];
	int numCartasJog1, numCartasJog2, cont1, cont2, i, j;
	
	printf("Informe o numero de cartas de cada jogador: ");
	scanf("%d %d", &numCartasJog1, &numCartasJog2);
	printf("%d\n", numCartasJog1);
	printf("%d\n", numCartasJog2);
//	return 0;
//	fgets(numCartas, 6, stdin); //comando para ler string, incluindo espaços e que limita o tamanho do buffer
//	setbuf(stdin, NULL); //limpa o buffer

	while ((numCartasJog1 != 0) && (numCartasJog2 != 0)) {
		
//		numCartasJog1 = 0;
//		numCartasJog2 = 0;
		cont1 = 0;
		cont2 = 0;	 	
		
		//numCartasJog1 = numCartas[0]-48;
		//numCartasJog2 = numCartas[2]-48;
		
		//Validar se informou (3 4), (10 9), (10 10)
//		if ( (numCartas[1] != ' ') && (numCartas[4] != ' ') ) {
//			
//			numCartasJog1 = ((numCartas[0]-48)*10) + (numCartas[1]-48);
//			numCartasJog2 = ((numCartas[3]-48)*10) + (numCartas[4]-48);
//			
//		} else if ( (numCartas[1] != ' ') && (numCartas[4] != '\0') ) {
//			printf("2\n");
//			numCartasJog1 = ((numCartas[0]-48)*10) + (numCartas[1]-48);
//			numCartasJog2 = numCartas[3]-48;
//			
//		} 
//else if ( (numCartas[1] == ' ') && (numCartas[4] != ' ') ) {
//			printf("3");
//			numCartasJog1 = numCartas[0]-48;
//			numCartasJog2 = ((numCartas[3]-48)*10) + (numCartas[4]-48);
//		
//		} else if ( (numCartas[1] == ' ') && (numCartas[4] == ' ') ) {
//			printf("4");
//			numCartasJog1 = numCartas[0];
//			numCartasJog2 = numCartas[2];
//			
//		}
//		
//		printf("%d\n", numCartasJog1);
//		printf("%d\n", numCartasJog2);
//		return 0;
		//a
		if ((numCartasJog1 <= 0) || (numCartasJog2 <= 0)) {  //Verifica se informou um numero de cartas positivo
			printf("Numero de cartas invalido. ");
			return 0;
		}
		
//		if (strlen(numCartas) > 3) {  //---------------Verificar se informou 3 4 5----------- 
//			printf("Numero de cartas invalido\n");
//			return 0;
//		}
	
		if ((numCartasJog1 > MAX) || (numCartasJog2 > MAX)) { //Verificar se o numero max. de cartas foi atingido
			printf("Numero maximo de cartas atingido.\n");
			return 0;
		} else {
			
			int limiteJog1, limiteJog2, numVetor; //Define o limite do tamanho do vetor de acordo com numero de cartas e o numero de espacos em branco
			
			char cartasJog1[50], cartasJog2[50];
			
			printf("Informe as cartas do jogador 1 em ordem nao decrescente: ");
			setbuf(stdin, NULL);
			gets(cartasJog1);
			
			numVetor = 0;
			
			for(i=0;cartasJog1[i] != '\0';i++){ //Conta o numero de numeros dentro da string
				if(cartasJog1[i] != ' '){
				  numVetor++;
				}
			}
			
			limiteJog1 = numVetor + numCartasJog1 - 1;
					
			if ((strlen(cartasJog1) > limiteJog1) || (strlen(cartasJog1) < limiteJog1)) {
				printf("Numero de cartas informadas invalido.");
				return 0;
			}
			
			printf("%s", cartasJog1);
			return 0;
			
			for (i=0; )
			
			//---------------Ler as cartas do jogador 2 ----------------------
			
//			printf("Informe as cartas do jogador 2 em ordem nao decrescente: ");
//			setbuf(stdin, NULL);
//			gets(cartasJog2);
//			
//			numVetor = 0;
//			
//			for(i=0;cartasJog2[i] != '\0';i++){
//				if(cartasJog2[i] != ' '){
//				  numVetor++;
//				}
//			}
//			
//			limiteJog2 = numVetor + numCartasJog2 - 1;
//			
//			if ((strlen(cartasJog2) > limiteJog2) || (strlen(cartasJog2) < limiteJog2)) {
//				printf("Numero de cartas informadas invalido.");
//				return 0;
//			}
//			
//			for (i=0;i<limiteJog2-2;i++) { //Verifica se as cartas estao sem ordem decrescente
//				
//				if ((i%2 == 0) || (i == 0)) {
//					
//					if (cartasJog2[i+2] < cartasJog2[i]) {
//						printf("Cartas devem estar em ordem nao decrescente.");
//						return 0;
//					}
//				
//					if (cartasJog2[i] == cartasJog2[i+2]) {
//						cartasJog2[i] = '-';
//					}
//							
//				}
//				
//			}

			//-----------Verificar cartas iguais entre os dois------------------
			
//			if (strlen(cartasJog1) > strlen(cartasJog2)) {
//				
//				for (i=0; i<strlen(cartasJog1);i++){
//				
//					for (j=0; j<strlen(cartasJog2);j++){
//						
//						if (cartasJog1[i] == cartasJog2[j]){
//							
//							cartasJog2[j] = '-';
//							break;
//							
//						}
//						
//					}
//					
//				}
//				printf("%s", cartasJog2);
//				return 0;	
//				
//			} else {
//				
//				for (i=0; i<strlen(cartasJog1);i++){
//				
//					for (j=0; j<strlen(cartasJog2);j++){
//						
//						if (cartasJog1[i] == cartasJog2[j]){
//							
//							cartasJog1[i] = '-';
//							break;
//							
//						}
//						
//					}
//					
//				}
//				printf("%s", cartasJog1);
//				return 0;
//				
//			}
			
			
			
//			
//			if (cont1 < cont2) {
//				printf("Numero de cartas possiveis para trocar: %d\n", cont1);
//			} else if (cont2 < cont1){
//				printf("Numero de cartas possiveis para trocar: %d\n", cont2);
//			} else if (cont1 == cont2) {
//				printf("Numero de cartas possiveis para trocar: %d\n", cont1);
//			}
				
		} // end if
			
		printf("Informe o numero de cartas de cada jogador: ");
		scanf("%d %d", &numCartasJog1, &numCartasJog2);
		//gets(numCartas); //comando para ler string, incluindo espaços
			
	} //end while
	
	return 0;
	
}
