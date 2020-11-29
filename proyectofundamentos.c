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
	   else{
		   printf("opccion no valida\n");
		   menu1();
	   }
    }
    void funccion1(){
		printf("Bienvenido, en esta pestaña te mostramos los eventos que manejamos: \n");
		printf("-Quince años, celebra a la cumpleañera por tan solo 8,000 pesos mexicanos por todo el día \n");
		printf("-Celebra tu cumpleaños por tan solo 6,000 pesos mexicanos por todo el día\n");
		printf("-Celebra el día más especial de tu vida, tu boda, por tan solo 10,000 pesos durante todo el día\n");
		printf("-Pasa el día con tus amigos por tan solo 4,000 pesos\n");
		printf("Una vez que haya leído los precios, desea agregar comida o renta de sillas?, 1.-Sí, 2.-No\n");
		
	}
