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
	
	printf("Digite 1 para:\nCalcular fatorial\n\nDigite 2 para:\nSaber se é numero primo.\n\nDigite 3 para:\nSaber varios números primos: \n\nDigite 4 para:\nPotência \n\nDigite 5 para:\nRaiz\n\nDigite 6 para:\nSaber se o ano é Bissexto.\n\nDigite 7 para:\nFunção média.\n\nDigite 8 para:\nFunção Média Ponderada.\n\nDigite 9 para:\nFunção aluno UNIPÊ.\n\n");
	printf("\nOpção: ");
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
			printf("\nInválido");
			printf("%d", x);
				break;
	}
	return;
}
void fatorial(){
	system("cls");
	
	printf("Função Fatorial:\n");
	
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
	printf("Função Primo:\n");
	int  cont, val = 1;
	
	printf("\nDigite um numero para saber se é primo.\n");
	scanf("%d", &p);
			
		for(cont = 2; cont < (p/2); cont++){
	 		if(p % cont == 0){
	 			val++;
			}
		}
		if(val == 1 ) {
			printf("\n\n%d é primo\n\n",p);
		}
		else{
			printf("\n\n%d não é primo\n\n",p);
		}
		printf("\nPrograma finalizado\n");

	return;
}
void varios(){
	system("cls");
	printf("Função Vários primos:\n");
	int  cont, val = 1;
	
	printf("\nDigite um numero para saber se é primo.\n");
	scanf("%d", &p);
	while(p != 0){
		for(cont = 2; cont < p; cont++){
	 		if(p % cont == 0){
	 			val++;
			}
		}
		if(val == 1 ) {
			printf("\n\n%d é primo\n\n",p);
		}
		else{
			printf("\n\n%d não é primo\n\n",p);
		}
		p = 0;
		val = 1;
		printf("Valor de val: %d\n", val);
		printf("\nDigite um numero para saber se é primo.\n");
		scanf("%d", &p);
	}
		printf("\nPrograma finalizado\n");

	return;
}
void potencia(){
	system("cls");
	printf("Função Potenciação:\n");
 	float val=1, pont;
	int ele,i;
	
	printf("Digite um numero: \n");
	scanf("%f", &pont);
	
	printf("Digite um número inteiro: \n");
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
	printf("Função radiciação:\n");
	float result, num;
	int ra;
	
	
	printf("Digite um numero: \n");
	scanf("%f", &num);
	
	printf("Digite um número inteiro: \n");
	scanf("%d", &ra);
	
	

	result = sqrt(num/ra);

	printf("%.1e \n",result);
}
void bissexto(){
	system("cls");	
	printf("Função Ano Bissexto:\n");
	int ano;
	
	printf("Infome o ano para saber se é bissexto: \n");
	scanf("%d", &ano);
	
	if(ano % 4 == 0){
		printf("O ano de %d é Bissexto.", ano);
	}
	else{
		printf("O ano de %d não é Bissexto.", ano);
		
	}
	return;
}
void media(){
	system("cls");
	printf("Função Média:\n");
	float n1,n2, media;
	
	printf("Nota da 1ª Prova: ");
	scanf("%f", &n1);
	
	printf("\nNota da 2ª Prova: ");
	scanf("%f", &n2);
	
	if(n1 >= 0 && n1 <=10 && n2 >= 0 && n2 <=10){
		media = (n1 + n2)/2;
		printf("1ª Prova: %.1f\n2ª Prova:%.1f\nMédia=%.1f",n1,n2,media);
	}else{
		printf("Notas inválidas.");
	}
	return;
}
void ponderada(){
	system("cls");
	printf("Função Média Ponderada:\n");
	float p1,p2, p3, pond;
	
	printf("Nota da 1ª Prova: ");
	scanf("%f", &p1);
	
	printf("\nNota da 2ª Prova: ");
	scanf("%f", &p2);
	
	printf("\nNota da 3ª Prova: ");
	scanf("%f", &p3);
	
	if(p1 >= 0 && p1 <=10 && p2 >= 0 && p2 <=10 && p3 >= 0 && p3 <=10) {
		pond = (p1+p2+(p3*2))/4;
		printf("1ª Prova: %.1f\n2ª Prova:%.1f\n3ª Prova:%.1f\nMédia=%.1f",p1,p2,p3,pond);
	}else{
		printf("Notas inválidas.");
	}
	return;
}
void matricula(){
	system("cls");
	printf("Função Aluno UNIPÊ:\n");
	int mat = 1810023428;
	char nome[] = "Lael Albuquerque de Araújo Filho";
	
	printf("Meu nome: %s\n",nome);
	printf("Minha matrícula é: %d\nMatrícula em hexadecimal: %X", mat,mat);
	
	return;
}

