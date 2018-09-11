#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <locale.h>

void primo();
void fatorial();
void menu();
void varios();
void potencia();
void raiz();
void bissexto();
void media();
void ponderada();
void matricula();
int p;

int main(){
	setlocale(LC_ALL,"Portuguese");
	menu();
	return 0;	
}
void menu(){
	
	int x;
	
	printf("Digite 1 para:\nCalcular fatorial\n\nDigite 2 para:\nSaber se � numero primo.\n\nDigite 3 para:\nSaber varios n�meros primos: \n\nDigite 4 para:\nPot�ncia \n\nDigite 5 para:\nRaiz\n\nDigite 6 para:\nSaber se o ano � Bissexto.\n\nDigite 7 para:\nFun��o m�dia.\n\nDigite 8 para:\nFun��o M�dia Ponderada.\n\nDigite 9 para:\nFun��o aluno UNIP�.\n\n");
	printf("\nOp��o: ");
	scanf("%d", &x);
	
	switch(x){
		case 1:
			fatorial();
				break;
		case 2:
			primo();
				break;
		case 3:
			varios();
				break;
		case 4:
			potencia();
				break;
		case 5:
			raiz();
				break;
		case 6:
			bissexto();
				break;
		case 7:
			media();
				break;
		case 8:
			ponderada();
				break;
		case 9:
			matricula();
				break;
		default:
			printf("\nInv�lido");
			printf("%d", x);
				break;
	}
	return;
}
void fatorial(){
	system("cls");
	
	printf("Fun��o Fatorial:\n");
	
	int i, fat;
	
	printf("\nFatorial de: \n");	
	scanf("%d", &i);	
	
	for(fat = 1 ; i > 0; i--){
		printf("%d x", i);	
		fat *= i;
		}	
	printf("= %d", fat);
		
return;		
}
void primo(){
	system("cls");
	printf("Fun��o Primo:\n");
	int  cont, val = 1;
	
	printf("\nDigite um numero para saber se � primo.\n");
	scanf("%d", &p);
			
		for(cont = 2; cont < (p/2); cont++){
	 		if(p % cont == 0){
	 			val++;
			}
		}
		if(val == 1 ) {
			printf("\n\n%d � primo\n\n",p);
		}
		else{
			printf("\n\n%d n�o � primo\n\n",p);
		}
		printf("\nPrograma finalizado\n");

	return;
}
void varios(){
	system("cls");
	printf("Fun��o V�rios primos:\n");
	int  cont, val = 1;
	
	printf("\nDigite um numero para saber se � primo.\n");
	scanf("%d", &p);
	while(p != 0){
		for(cont = 2; cont < p; cont++){
	 		if(p % cont == 0){
	 			val++;
			}
		}
		if(val == 1 ) {
			printf("\n\n%d � primo\n\n",p);
		}
		else{
			printf("\n\n%d n�o � primo\n\n",p);
		}
		p = 0;
		val = 1;
		printf("Valor de val: %d\n", val);
		printf("\nDigite um numero para saber se � primo.\n");
		scanf("%d", &p);
	}
		printf("\nPrograma finalizado\n");

	return;
}
void potencia(){
	system("cls");
	printf("Fun��o Potencia��o:\n");
 	float val=1, pont;
	int ele,i;
	
	printf("Digite um numero: \n");
	scanf("%f", &pont);
	
	printf("Digite um n�mero inteiro: \n");
	scanf("%d", &ele);
	
	for(i=0; i < ele; i++){
		val *= pont; 
		printf("%f\n", val);
	}
	
	printf("\n\nResultado: %.1e", val);
	
return;
}
void raiz(){
	system("cls");
	printf("Fun��o radicia��o:\n");
	float result, num;
	int ra;
	
	
	printf("Digite um numero: \n");
	scanf("%f", &num);
	
	printf("Digite um n�mero inteiro: \n");
	scanf("%d", &ra);
	
	

	result = sqrt(num/ra);

	printf("%.1e \n",result);
}
void bissexto(){
	system("cls");	
	printf("Fun��o Ano Bissexto:\n");
	int ano;
	
	printf("Infome o ano para saber se � bissexto: \n");
	scanf("%d", &ano);
	
	if(ano % 4 == 0){
		printf("O ano de %d � Bissexto.", ano);
	}
	else{
		printf("O ano de %d n�o � Bissexto.", ano);
		
	}
	return;
}
void media(){
	system("cls");
	printf("Fun��o M�dia:\n");
	float n1,n2, media;
	
	printf("Nota da 1� Prova: ");
	scanf("%f", &n1);
	
	printf("\nNota da 2� Prova: ");
	scanf("%f", &n2);
	
	if(n1 >= 0 && n1 <=10 && n2 >= 0 && n2 <=10){
		media = (n1 + n2)/2;
		printf("1� Prova: %.1f\n2� Prova:%.1f\nM�dia=%.1f",n1,n2,media);
	}else{
		printf("Notas inv�lidas.");
	}
	return;
}
void ponderada(){
	system("cls");
	printf("Fun��o M�dia Ponderada:\n");
	float p1,p2, p3, pond;
	
	printf("Nota da 1� Prova: ");
	scanf("%f", &p1);
	
	printf("\nNota da 2� Prova: ");
	scanf("%f", &p2);
	
	printf("\nNota da 3� Prova: ");
	scanf("%f", &p3);
	
	if(p1 >= 0 && p1 <=10 && p2 >= 0 && p2 <=10 && p3 >= 0 && p3 <=10) {
		pond = (p1+p2+(p3*2))/4;
		printf("1� Prova: %.1f\n2� Prova:%.1f\n3� Prova:%.1f\nM�dia=%.1f",p1,p2,p3,pond);
	}else{
		printf("Notas inv�lidas.");
	}
	return;
}
void matricula(){
	system("cls");
	printf("Fun��o Aluno UNIP�:\n");
	int mat = 1810023428;
	char nome[] = "Lael Albuquerque de Ara�jo Filho";
	
	printf("Meu nome: %s\n",nome);
	printf("Minha matr�cula �: %d\nMatr�cula em hexadecimal: %X", mat,mat);
	
	return;
}

