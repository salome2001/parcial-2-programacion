#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int facto(int num);
using namespace std;
int main(void)
{
	int op1,op2,can, p11, p12, p13, p14, p21, p22, p23, p24;
	float val, mon;
	p11=p12=p13=p14=p21=p22=p23=p24=0;
	do{
		system("cls");
		printf("\n    Menu");
		printf("\n1. Platos fuertes");
		printf("\n2. Licores");
		printf("\n3. facturar");
		printf("\nDigite la opcion ");
		scanf("%d",&op1);
		switch(op1)
		{
			case 1: do{
						do{					
						system("cls");
						printf("\nMenu platos fuertes");
						printf("\n1. pechuga gratinada de pollo - 25.000");
						printf("\n2. Lomo fino de cerdo - 35.000");
						printf("\n3. Punta de anca - 40.000");
						printf("\n4. Viudo de bocachico  - 30.000");					
						printf("\n5. Retornar ");
						printf("\nDigite opcion ");
						scanf("%d",&op2);					
						}while(op2<1 || op2>5);
						if(op2!=5)
						do{
							printf("digite la cantidad a pedir: ");
							scanf("%d",&can);
						}while(can<1);
						switch(op2)
						{
							case 1: p11 = p11 + (can*25000);
									break;
							case 2: p12 = p12 + (can*35000);
									break;
							case 3: p13 = p13 + (can*40000);
									break;
							case 4: p14 = p14 + (can*20000);
									break;
						}
					}while(op2!=5);
					break;
			case 2: do{
						do{					
						system("cls");
						printf("\nMenu licores");
						printf("\n1. Jugos naturales en agua- 5.000");
						printf("\n2. Jugos naturales en leche - 7.000");
						printf("\n3. Cerveza nacional - 6.000");
						printf("\n4. Cerveza corona  - 10.000");					
						printf("\n5. Retornar ");
						printf("\nDigite opcion ");
						scanf("%d",&op2);					
						}while(op2<1 || op2>5);
						if(op2!=5)
						do{
							printf("digite la cantidad a pedir: ");
							scanf("%d",&can);
						}while(can<1);
						switch(op2)
						{
							case 1: p21 = p21 + (can*5000);
									break;
							case 2: p22 = p22 + (can*7000);
									break;
							case 3: p23 = p23 + (can*6000);
									break;
							case 4: p24 = p24 + (can*10000);
									break;
						}
					}while(op2!=5);
					break;
		}
	}while(op1!=3);
	val=p11+p12+p13+p14+p21+p22+p23+p24;
	do{
		printf("\n\nel valor a pagar es: %.f\nDigite la cantidad de plata a pagar minimo el valor a pagar:  ",val);
		scanf("%f",&mon);
	}while(mon<val);
	printf("\n las vueltas son: %.2f",mon-val);
	getch();
	return (0);
}
