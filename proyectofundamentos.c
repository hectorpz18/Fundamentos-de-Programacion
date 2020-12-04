#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
#include<time.h>
//variables para el formulario

	char Nombre1[20];
	int Edad1=0; 
	char EventoElegido[20];


//variables globales
int cumpleagnos=6000;
int quince_agnos=8000;
int boda=10000;
int amigos=4000;
//int salir;
int Preciosilla=10;
int PrecioTotalComida=0,Preciocomida1=1000,Preciocomida2=1000,Preciocomida3=1000;
int PrecioTotalsilla=0;
int cantidad=0;
char nombre[20];
int edad1=0;
//NuevoEvento[100];
//aqui se declaran las funcciones para que puedan ser leidas mas adelante
void gotoxy(int x,int y);
void cuadro(int x1,int y1,int x2,int y2);
void menu1();
void TiposDeEventos();
void Comida();
void Silla();
void formulario();
void AgendarEventos();
void agenda();
//void Promociones();
void CambioPrecios();
//esta es la funccion principal main
int main (){
	system("COLOR 02");
	cuadro(0,0,85,24);
	cuadro(1,1,84,3);
	gotoxy(20,2); 
	menu1();
	
    return 0;
}
//esta funcion da apariencia a cmd
//esta funccion mueve las posicciones
void gotoxy(int x,int y){
	HANDLE hcon;
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}
//esta funccion dibuja un cuadro
void cuadro(int x1,int y1,int x2,int y2){
	int i;

    for (i=x1;i<x2;i++){
		gotoxy(i,y1); printf("\304"); //linea horizontal superior
		gotoxy(i,y2); printf("\304"); //linea horizontal inferior
    }

    for (i=y1;i<y2;i++){
		gotoxy(x1,i); printf("\263"); //linea vertical izquierda
		gotoxy(x2,i); printf("\263"); //linea vertical derecha
	}

    gotoxy(x1,y1); printf("\332");
    gotoxy(x1,y2); printf("\300");
    gotoxy(x2,y1); printf("\277");
    gotoxy(x2,y2); printf("\331");
}
//Aqui va la primera funccion del menu donde se pregunta las Opciones a elejir
    void menu1(){
        printf("  Bienvenido a Nuestro Proyecto, este es el menu. \n\n");
        printf("  Por favor escoja alguna de nuestras opciones para poder ofrecerle siempre lo mejor \n");
        printf("  1.-Tipos de Eventos que manejamos\n");
        printf("  2.- Agendar evento\n");
        printf("  3.- Nuestras Promociones\n");
        printf("  4.- Cambiar precios(admin)\n");
		printf("  0.- salir del programa\n");

		int menu;
        scanf("%i",&menu);
		fflush(stdin);
       	if(menu==1){
		   TiposDeEventos();
	   }
	   if(menu==2){
		   AgendarEventos();
	   }
		/*if(menu==3){
		   
	   }*/
	   	if(menu==4){
		system("cls");
		int pin;
		printf("  escriba la contrasegna\n");
		scanf("%i",&pin);
		fflush(stdin);
			if(pin==1234){
		   		printf("  Bienvenido, en esta pestagna vamos a cambiar los precios: \n \n");
				int a1,a2,a3,a4;
				printf("  1 -Quince agnos\n");
				scanf("  %i",&a1);
				fflush(stdin);
				printf("  2 -cumpleagnos\n");
				scanf("  %i",&a2);
				fflush(stdin);
				printf("  3 -tu boda\n");
				scanf("  %i",&a3);
				fflush(stdin);
				printf("  4 -amigos\n");
				scanf("  %i",&a4);
				fflush(stdin);
				CambioPrecios(a1,a2,a3,a4);
				menu1();
	
			   }
			   else{
				   printf("  contrasegna incorrecta\n");
				   menu1();
			   }
	   }
		
	   	if(menu==0){
		 system("exit");
	  	}
	   if(menu>4){
		   printf("  opccion no valida \n");
		   menu1();
	   }
	}
	//Esta es la funcion que devuelve los tipos de eventos disponiles
    void TiposDeEventos(){
		system("cls");
		printf("introduzca su primer nombre\n");
		scanf("%s",nombre);
		fflush(stdin);
		system("cls");
		printf("  Bienvenido, en esta pestagna te mostramos los eventos que manejamos: \n \n");
		printf("  'Quince agnos', celebra a la cumpleagnera por tan solo %i pesos mexicanos por dia \n",quince_agnos);
		printf("  Celebra tu 'cumpleagnos' por tan solo %i pesos mexicanos por dia\n",cumpleagnos);
		printf("  Celebra el dia mas especial de tu vida, tu boda, por tan solo %i pesos por dia\n",boda);
		printf("  Pasa el dia con tus 'amigos' por tan solo %i pesos\n",amigos);
		printf("  Una vez que haya leido los precios, desea agregar comida o renta de sillas?\n");
		printf("  1.-comida \n");
		printf("  2.-sillas \n");
		printf("  0.-atras \n");
		int menu;
		scanf("%i",&menu);
		fflush(stdin);
		if(menu==1){
			Comida();
		}
		if (menu==2){
			Silla();
		}
		if(menu==0){
			menu1();
		}
		else{
			printf("opcion no valida\n");
		}
		//este print con una variale agregara un evento que sea registrado
		//printf("%c", NuevoEventos[]);
	}
	//funccion que maneja la comida
	void Comida(){
		printf("Paquetes de comida\n");
		//gets(nombre);
		printf("Paquete 1: Tacos al pastotor con ensalada %i pesos\n",Preciocomida1);
		printf("Paquete 2: Espaguetis con barbacoa %i pesos\n",Preciocomida2);
		printf("Paquete 3: lasagna con crema de elote %i pesos\n",Preciocomida3);
		int menu;
		scanf("%i",&menu);
		fflush(stdin);
		if(menu==1){
			PrecioTotalComida=Preciocomida1;
			TiposDeEventos();
		}
		if(menu==2){
			PrecioTotalComida=Preciocomida2;
			TiposDeEventos();
		}
		if(menu==3){
			PrecioTotalComida=Preciocomida2;
			TiposDeEventos();
		}else{
			printf("opcion no valida\n");
		}
	}
	//funccion que maneja las sillas
	void Silla(){
		printf("precio por silla %i pesos\n",Preciosilla);
		printf("cuantas sillas desea\n");
		scanf("%i",&cantidad);
		fflush(stdin);
		PrecioTotalsilla=Preciosilla*cantidad;
		TiposDeEventos();

	}
	//esta es la funccion que agenda eventos
	void AgendarEventos(){
		system("cls");
		printf("1.-formulario para reservar\n");
		printf("2.-mis agendas\n");
		printf("0.-regresar\n");
		int menu;
		scanf("%i",&menu);
		fflush(stdin);
		if(menu==1){
			formulario();
		}
		/*if(menu==2){
			//agenda();
		}*/
		if(menu==0){
			menu1();
		}

	}
	//esta funccion es para el formulario
	void formulario(){
		system("cls");
		char nombreFormulario[20];
		printf("Bienvenido,En esta pestagna podras agendar tu evento, te anticipamos que hay que llenar un formulario\n\n");
		printf("Por favor Escribe tu Primer Nombre\n");
		scanf("%s",nombreFormulario);
		fflush(stdin);
		printf("Por favor Escribe tu edad, Tienes que ser mayor de edad para poder rentar un local\n");
		int edad;
		scanf("%i",&edad);
		fflush(stdin);
		if(edad>18){
		printf("Felicidades puedes seguir\n");
			edad1=edad;
		
		}else{
			printf("lo sentimos debes tener 18 agnos en adelante\n");
			AgendarEventos();
		}
		printf("Edad: %i\n",edad1);
		printf("Por favor Escribe que tipo de evento quieres\n\n");
		printf("1.-quince agnos:$ %i\n",quince_agnos);
		printf("2.-cumpleagnos:$ %i\n",cumpleagnos);
		printf("3.-boda:$ %i\n",boda);
		printf("4.-amigos:$ %i\n",amigos);
		int menu;
		scanf("%i",&menu);
		fflush(stdin);
		char quince[20]="quince agnos";
		if(menu==1){
			for(int i=0;i<20;i++){
				Nombre1[i]=nombreFormulario[i];
				EventoElegido[i]=quince[i];
			}
			
		}
		char cumpleag[20]="cumpleagnos";
		if(menu==2){
			for(int i=0;i<20;i++){
				Nombre1[i]=nombreFormulario[i];
				EventoElegido[i]=cumpleag[i];
			}
			
		}
		char bod[20]="boda";
		if(menu==3){
			for(int i=0;i<20;i++){
				Nombre1[i]=nombreFormulario[i];
				EventoElegido[i]=bod[i];
			}
			
		}
		char amig[20]="amigos";
		if(menu==4){
			for(int i=0;i<20;i++){
				Nombre1[i]=nombreFormulario[i];
				EventoElegido[i]=amig[i];
			}
			
		}if(menu>4){
			printf("Opccion incorrecta \n");
		}
		//system("cls");
		printf("#########################################################\n");
		printf("# Nombre:%s #Edad:%i #Evento:%s\n",Nombre1,edad1,EventoElegido);
		time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char output[128];
        strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
        printf("Fecha de reserva: %s\n",output);
		if(strcmp(nombre,Nombre1)==0){
		printf("#Sillas Cantidad: %i # Precio por renta de sillas:$ %i\n",cantidad,PrecioTotalsilla);
		printf("#Comida Total:$ %i # \n",PrecioTotalComida);
		if(strcmp(EventoElegido,quince)==0){
			printf("#Total a pagar:$ %i\n",PrecioTotalsilla+quince_agnos+PrecioTotalComida);
		}
		if(strcmp(EventoElegido,cumpleag)==0){
			printf("#Total a pagar:$ %i\n",PrecioTotalsilla+cumpleagnos+PrecioTotalComida);
		}
		if(strcmp(EventoElegido,bod)==0){
			printf("#Total a pagar:$ %i\n",PrecioTotalsilla+boda+PrecioTotalComida);
		}
		if(strcmp(EventoElegido,amig)==0){
			printf("#Total a pagar:$ %i\n",PrecioTotalsilla+amigos+PrecioTotalComida);
		}
		//printf(time_t time(time_t*p));
		}else{
			printf("No se contrato el servicio de sillas ni de mesas\n");
		}
		printf("#########################################################\n");
		
		printf("1.-confirmar\n");
		printf("2.-cancelar\n");
		int comprar;
		scanf("%i",&comprar);
		if(comprar==1){
			
			FILE*Fichero;
			Fichero = fopen("EventoElegido.txt","w+");
			fprintf(Fichero,"%20s%i%20s",Nombre1,edad1,EventoElegido);
			//menu1();
		}
		if(comprar==2){
			menu1();
		}
		//getch();
	}
	void agenda(){
				
	}
	/*
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
