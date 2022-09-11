#include <stdio.h>
#include <stdlib.h>
//5. Ler 3 valores, achar maior, menor e média utilizando números reais (float).

int main(){
	float v1=0,v2=0,v3=0,maior,menor,media;
	
	printf("Ler 3 valores, achar maior, menor e media utilizando numeros reais (float).\n\n");
	
	printf("Digite o primeiro valor: ");
	scanf("%f",&v1);
	printf("Digite o segundo valor: ");
	scanf("%f",&v2);
	printf("Digite o terceiro valor: ");
	scanf("%f",&v3);
	printf("\n");
	media=(v1+v2+v3)/3;
	if(v1>v2 && v1>v3)
		printf("Maior valor diagitado: %.2f",v1);
	else if (v2>v1 && v2>v3)
		printf("Maior valor diagitado: %.2f",v2);
	else
	    printf("Maior valor diagitado: %.2f",v3);
	    
	if(v1<v2 && v1<v3)
		printf("\n\nMenor valor diagitado: %.2f",v1);
	else if (v2<v1 && v2<v3)
		printf("\n\nMenor valor diagitado: %.2f",v2);
	else
	    printf("\n\nMenor valor diagitado: %.2f",v3);
	
	
	printf("\n\nA media dos valores e igual a: %.2f",media);
	printf("\n\n");
	system("pause");
	return 0;
}
