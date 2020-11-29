#include<stdio.h>
//variables globales
int cumpleagnos=6000;
int quince_agnos=8000;
int boda=10000;
int amigos=4000;
//NuevoEvento[100];
//aqui se declaran las funcciones para que puedan ser leidas mas adelante
void menu1();
void TiposDeEventos();
//void Comida();
//void Sillas();
//void AgendarEventos();
//void Promociones();
void CambioPrecios();
//esta es la funccion principal main
int main (){
	menu1();
    return 0;
}
//Aqui va la primera funccion del menu donde se pregunta las Opciones a elejir
    void menu1(){
        printf("Bienvenido a Nuestro Proyecto, este es el menu. \n");
        printf("Por favor escoja alguna de nuestras opciones para poder ofrecerle siempre lo mejor \n");
        printf("1.-Tipos de Eventos que manejamos\n");
        printf("2.- Agendar evento\n");
        printf("3.- Nuestras Promociones\n");
        printf("4.- Cambiar precios\n");

		int menu;
        scanf("%i",&menu);
       	if(menu==1){
		   TiposDeEventos();
	   }
	    if(menu==2){
		   
	   }
		if(menu==3){
		   
	   }
	   	if(menu==4){
		   	printf("Bienvenido, en esta pestaña vamos a cambiar los precios: \n \n");
			printf("1 -Quince años\n");
			printf("2 -cumpleaños\n");
			printf("3 -tu boda\n");
			printf("4 -amigos\n");
			int a1,a2,a3,a4;
			scanf("%i",&a1);
			scanf("%i",&a2);
			scanf("%i",&a3);
			scanf("%i",&a4);
			CambioPrecios(a1,a2,a3,a4);
	   }
	   else{
		   printf("opccion no valida\n");
		   menu1();
	   }
	}
	//Esta es la funcion que devuelve los tipos de eventos disponiles
    void TiposDeEventos(){
		printf("Bienvenido, en esta pestagna te mostramos los eventos que manejamos: \n \n");
		printf("1 -Quince agnos, celebra a la cumpleagnera por tan solo %i pesos mexicanos por dia \n",quince_agnos);
		printf("2 -Celebra tu cumpleagnos por tan solo %i pesos mexicanos por dia\n",cumpleagnos);
		printf("3 -Celebra el dia mas especial de tu vida, tu boda, por tan solo %i pesos por dia\n",boda);
		printf("4 -Pasa el día con tus amigos por tan solo %i pesos\n",amigos);
		printf("Una vez que haya leido los precios, desea agregar comida o renta de sillas?, 1.-Si, 2.-No\n");
		//este print con una variale agregara un evento que sea registrado
		//printf("%c", NuevoEventos[]);
	}
	//funccion que maneja la comida
	/*void Comida(int cantidad){

	}
	//funccion que maneja las sillas
	void Silla(int cantidad){

	}
	//esta es la funccion que agenda eventos
	void AgendarEventos(){

	}
	//esta es la funccion que maneja las promociones
	void Promociones(){

	}*/
	// esta funccion manej los precios
	void CambioPrecios(int quinceAgnos1,int cumpleagnos2,int boda3,int amigos4){
		quince_agnos=quinceAgnos1;
		cumpleagnos=cumpleagnos2;
		boda=boda3;
		amigos=amigos4;
	}
