#include <stdio.h>
#include <stdlib.h>
#define tamano 100

int solicitarmonto (int vector [],int cantidad , int total ) {
	
int monto=0;
int billetes2=0; 
int residuo=0;
//int pos = 1;
int billetes10=0;
int billetes5=0;


do{
	printf("Por favor ingrese el monto que desea retirar:" );
scanf("%d",&monto);

billetes10=monto/10000;
residuo = monto%10000;

	if (residuo>=5000){
		
		billetes5=residuo/5000;
		residuo=residuo-billetes5*5000;
		
	}if(residuo<5000){
		
		billetes2=residuo/2000;
		residuo= residuo-billetes2*2000;
			
		}if(residuo!=1000){
			
			printf("\nSu dinero es: \n" 
		"%d  billetes de 2000" "\n%d billetes de  5000 "
		"\n%d billetes de 10000  \n"
		,billetes2,billetes5, billetes10);
		
		}if(residuo==1000){
			
			printf("Por favor ingrese un monto distinto \n");
			
			}for (int i=0; i<100; i++){
				vector[i]=monto;
				}
	}while(residuo!=1000);
	return 0;
}
int main (){
	int cantidad=0;
	int total=0;
	int vector[1000];
	 
	 int salida = solicitarmonto(vector, cantidad, total);
	printf("%d", salida);
	}
