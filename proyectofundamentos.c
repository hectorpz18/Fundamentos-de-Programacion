#include<stdio.h>
void menu1();
void funccion1();
int main (){
	menu1();
    return 0;
}
    void menu1(){
        printf("Bienvenido a Nuestro Proyecto, este es el menu. \n");
        printf("Por favor escoja alguna de nuestras opciones para poder ofrecerle siempre lo mejor \n");
        printf("1.-Tipos de Eventos que manejamos\n");
        printf("2.- Agendar evento\n");
        printf("3.- Nuestras Promociones\n");
		int menu;
        scanf("%i",&menu);
       if(menu==1){
		   funccion1();
	   }
	    if(menu==2){
		   
	   }
		if(menu==3){
		   
	   }
	   else{
		   printf("opccion no valida\n");
		   menu1();
	   }
    }
    void funccion1(){
		printf("Bienvenido, en esta pesta�a te mostramos los eventos que manejamos: \n");
		printf("-Quince a�os, celebra a la cumplea�era por tan solo 8,000 pesos mexicanos por todo el d�a \n");
		printf("-Celebra tu cumplea�os por tan solo 6,000 pesos mexicanos por todo el d�a\n");
		printf("-Celebra el d�a m�s especial de tu vida, tu boda, por tan solo 10,000 pesos durante todo el d�a\n");
		printf("-Pasa el d�a con tus amigos por tan solo 4,000 pesos\n");
		printf("Una vez que haya le�do los precios, desea agregar comida o renta de sillas?, 1.-S�, 2.-No\n");
		
	}
