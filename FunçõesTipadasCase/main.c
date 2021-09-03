#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float peso_ideal (char sexo, float altura)
{
	float peso_ideal;
	switch(toupper(sexo))
	{
		case 'F' : peso_ideal = altura * 62.1 - 44.7;
		break;
		case 'M'  : peso_ideal = altura * 72.7 - 58;
		break; 
		default :
    	printf ("Valor invalido!\n");
	}
	return peso_ideal;
	
}



int main() 
{
	char sexo;
	float altura;
	float peso;
	
	printf("Digite o seu sexo: \n");
	scanf("%c" , &sexo );
	printf("digite sua altura(em metros): \n");
	scanf("%f" , &altura);
	
	printf("Peso ideal: %.2f \n", peso_ideal(sexo, altura));
	
	return 0;
}
