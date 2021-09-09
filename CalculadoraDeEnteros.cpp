#include <stdio.h>
#include <math.h>
int main(){
	
	float operando1, operando2, resultado, resultadoRaiz;
	char continuar;
	char operacion;
	
	do{
		printf("Escriba el 1er operando ");
		scanf("%f", &operando1);
		printf("Escriba el 2do operando ");
		scanf("%f", &operando2);
		printf("Escriba la operacion que desee entre + suma, - resta, * multiplicacion, / division, ^ potencia, % modulo o r raiz cuadrada ");
		scanf("%s", &operacion);
		
		switch(operacion){
		case '+':
			resultado = operando1 + operando2;
			printf("El resultado de la operacion es: %.6f", resultado);
			break;
		case '-':
			resultado = operando1 - operando2;
			printf("El resultado de la operacion es: %.6f", resultado);
			break;
		case '*':
			resultado = operando1 * operando2;
			printf("El resultado de la operacion es: %.6f", resultado);
			break;
		case '/':
			resultado = operando1 / operando2;
			printf("El resultado de la operacion es: %.6f", resultado);
			break;
		case '^':
			resultado = pow(operando1, operando2);
			printf("El resultado de la operacion es: %.6f", resultado);
			break;
		case 'r':
			resultado = sqrt(operando1);
			resultadoRaiz = sqrt(operando2);
			printf("El resultado de la operacion es: %.6f y del segundo: %.6f", resultado, resultadoRaiz);
			break;
		case '%':
			resultado = fmod(operando1,operando2);
			printf("El resultado de la operacion es: %.6f", resultado);
			break;
		default:
			printf("No ha escogido una de las opciones. ");
			break;
	}
	
	printf("\nDesea continuar? y/n: ");
	scanf("%s", &continuar);

	}while(continuar == 'y');
	
	return 0;
}

