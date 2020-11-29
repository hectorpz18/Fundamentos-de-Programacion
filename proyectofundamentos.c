#include<stdio.h>
//variables globales
int cumpleagnos=6000;
int quince_agnos=8000;
int boda=10000;
int amigos=4000;
int salir;
int silla=10;
int comida=1000;
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
        printf("Bienvenido a Nuestro Proyecto, este es el menu. \n\n");
        printf("Por favor escoja alguna de nuestras opciones para poder ofrecerle siempre lo mejor \n");
        printf("1.-Tipos de Eventos que manejamos\n");
        printf("2.- Agendar evento\n");
        printf("3.- Nuestras Promociones\n");
        printf("4.- Cambiar precios(admin)\n");
		printf("0.- salir del programa\n");

		int menu;
        scanf("%i",&menu);
       	if(menu==1){
		   TiposDeEventos();
	   }
	   /* if(menu==2){
		   
	   }
		if(menu==3){
		   
	   }*/
	   	if(menu==4){
		system("cls");
		int pin;
		printf("escriba la contrasegna\n");
		scanf("%i",&pin);
			if(pin==1234){
		   		printf("Bienvenido, en esta pestagna vamos a cambiar los precios: \n \n");
				int a1,a2,a3,a4;
				printf("1 -Quince agnos\n");
				scanf("%i",&a1);
				printf("2 -cumpleagnos\n");
				scanf("%i",&a2);
				printf("3 -tu boda\n");
				scanf("%i",&a3);
				printf("4 -amigos\n");
				scanf("%i",&a4);
				CambioPrecios(a1,a2,a3,a4);
				menu1();
	
			   }
			   else{
				   printf("contrasegna incorrecta\n");
				   menu1();
			   }
	   }
	   	if(menu==0){
		 system("exit");
	  	}
	   else{
		   printf("opccion no valida\n");
		   menu1();
	   }
	}
	//Esta es la funcion que devuelve los tipos de eventos disponiles
    void TiposDeEventos(){
		system("cls");
		printf("Bienvenido, en esta pestagna te mostramos los eventos que manejamos: \n \n");
		printf("1 -Quince agnos, celebra a la cumpleagnera por tan solo %i pesos mexicanos por dia \n",quince_agnos);
		printf("2 -Celebra tu cumpleagnos por tan solo %i pesos mexicanos por dia\n",cumpleagnos);
		printf("3 -Celebra el dia mas especial de tu vida, tu boda, por tan solo %i pesos por dia\n",boda);
		printf("4 -Pasa el día con tus amigos por tan solo %i pesos\n",amigos);
		printf("Una vez que haya leido los precios, desea agregar comida o renta de sillas?");
		printf("1.-comida \n");
		printf("2.-sillas \n");
		printf("0.-atras \n");
		int menu;
		scanf("%i",&menu);
		if(menu==1){

		}
		if (menu==2){

		}
		if(menu==0){
			menu1();
		}
		//este print con una variale agregara un evento que sea registrado
		//printf("%c", NuevoEventos[]);
	}
	//funccion que maneja la comida
	/*void Comida(int cantidad){

	}
	//funccion que maneja las sillas
	void Silla(int cantidad){
		printf("precio por silla %i pesos",silla)
	}
	//esta es la funccion que agenda eventos
	void AgendarEventos(){

	}
	//esta es la funccion que maneja las promociones
	void Promociones(){

	}*/
	// esta funccion manej los precios
	void CambioPrecios(int quinceAgnos1,int cumpleagnos2,int boda3,int amigos4){
		system("cls");
		quince_agnos=quinceAgnos1;
		cumpleagnos=cumpleagnos2;
		boda=boda3;
		amigos=amigos4;
	}
