#include <stdio.h>
#include <conio2.h>
#include <stdlib.h>
#include <time.h>

/*
	gotoxy(35,2); printf ("MENU DE VECTORES");
	gotoxy(15,5); printf ("1.- Lectura del vector A.");
	gotoxy(15,6); printf("2.- Generar vector B.");
	gotoxy(15,7); printf("3.-Suma de A y B.");
	gotoxy(15,8); printf("4.-Encontrar el elemento mayor y su posicion A.");
	gotoxy(15,9); printf ("5.- Encontrar el elemento mayor y su posicion A.");
	gotoxy(15,10); printf  ("6.- Colorear las casillas pares de A.");
	gotoxy(15,11); printf ("7.- Colorear el contenido non de B.");
	gotoxy(15,12); printf ("8.-Metodo Burbuja en vector B.");
	gotoxy(15,13); printf ("9.-Intercambiar valores entre el vector A.");
	gotoxy(15,14); printf ("10.- Imprimir inverso vector A.");
	gotoxy(15,15); printf ("11.-Promedio del vector A.");
	gotoxy(15,16); printf ("12.- Salir.");
	gotoxy(15,18); printf ("Que opcion desea...");
*/

//Declaraciones

	/* Funciones */
void marco();
void opcionUno();
void opcionDos();
void opcionTres();
void opcionCuatro();
void opcionCinco();
void opcionSeis();
void opcionSiete();
void opcionOcho();
void opcionNueve();
void opcionDiez();
void opcionOnce();

	/* Variables */
int opcion;
int a[10],b[10], suma[10], aux;


//Main
main(){

	opcion = 0;


	do{

		clrscr(); //Limpia Pantalla (Clear Screen)
		marco(); //Dibuja el marco

		/* Menú */
		gotoxy(35,2); printf("Menu de Vectores");

		gotoxy(15,5); printf ("1.- Lectura del vector A.");
		gotoxy(15,6); printf("2.- Generar vector B.");
		gotoxy(15,7); printf("3.- Suma de A y B.");
		gotoxy(15,8); printf("4.- Encontrar el elemento mayor y su posicion A.");
		gotoxy(15,9); printf ("5.- Encontrar el elemento menor y su posicion B.");
		gotoxy(15,10); printf ("6.- Colorear las casillas pares de A.");
		gotoxy(15,11); printf ("7.- Colorear el contenido non de B.");
		gotoxy(15,12); printf ("8.- Metodo Burbuja en vector B.");
		gotoxy(15,13); printf ("9.- Intercambiar valores entre el vector A y B.");
		gotoxy(15,14); printf ("10.- Imprimir inverso vector A.");
		gotoxy(15,15); printf ("11.- Promedio del vector A.");
		gotoxy(15,16); printf ("12.- Salir.");
		gotoxy(15,18); printf ("Que opcion desea...");


		scanf("%d",&opcion); //Lectura de la variable Opcion (Nos indicara que ejecutar...)

		switch(opcion){

			case 1:

				opcionUno();
				break;

			case 2:

				opcionDos();
				break;

			case 3:
				opcionTres();
				break;

			case 4:
				opcionCuatro();
				break;

			case 5:
				opcionCinco();
				break;

			case 6:
				opcionSeis();
				break;

			case 7:
				opcionSiete();
				break;

			case 8:
				opcionOcho();
				break;

			case 9:
				opcionNueve();
				break;

			case 10:
				opcionDiez();
				break;

			case 11:
				opcionOnce();
				break;
		}


	}while(opcion != 12); // != signfica NO es igual

}


//Opcion 1
void opcionUno(){

	clrscr(); //Limpia pantalla
	marco(); //Dibuja el marco

	gotoxy(35,2); printf("Lectura del vector A"); //Lee el vector A


	/* Escanea los valores */
	for (int i = 0; i < 10; i++)	
	{
		gotoxy(10,i+15); printf("Dime el valor de la casilla %d ",i);
		scanf("%d",&a[i]);
	}}

//Opcion 2
void opcionDos(){

	clrscr();
	marco();

	gotoxy(35,2); printf("Generar valores de vector B"); 

	srand(time(NULL)); //Hace el tiempo nulo en forma aleatoria

	for (int i = 0; i < 10; i++)
	{
		b[i] = rand() % 100; //Genera valores aleatorios de 0-99
	}

	gotoxy(35,10); printf("Valores de B generados"); //Lee el vector A
}

//Opcion 3
void opcionTres(){

	clscr();
	marco();
	gotoxy(35,2); printf("Suma de A y B");

	for (int i = 0; i < 10; i++)
	{
		suma[i] = a[i] + b[i];
		gotoxy(35,15+i); printf("Suma de A[%d] y B[%d] = %d", i, i, suma[i]);
	}
	getch();
}

//Opcion 4
void opcionCuatro(){
	clscr();
	marco();
	gotoxy(35,2); printf("Valor Mayor de A");

	aux = a[0];

	for (int i = 0; i < 10; i++)
	{
		if (aux < a[i])
		{
			aux = a[i];
		}
	}

	gotoxy(35,20); printf("Valor Mayor de A es %d",aux);
}

//Opcion 5
void opcionCinco(){
	clscr();
	marco();
	gotoxy(35,2); printf("Valor menor de B");

	aux = b[0];

	for (int i = 0; i < 10; i++)
	{
		if (aux > b[i])
		{
			aux = b[i];
		}
	}

	gotoxy(35,20); printf("Valor menor de B es %d",aux);
	getch();
}

//Opcion 6
void opcionSeis(){

	clscr();
	marco();

	gotoxy(35,12); printf("Colorear las casillas pares de A.");

	for (int i = 0; i < 10; i++)
	{
		if (a[i] % 2 == 0)
		{
			textcolor(YELLOW);
			backgroundcolor(RED);
		}else{
			textcolor(WHITE);
			backgroundcolor(BLACK);
		}

		printf("%d",a[i]);
	}
	getch();
}

//Opcion 7
void opcionSiete(){

	clscr();
	marco();

	gotoxy(35,12); printf("Colorear las casillas non de B.");

	for (int i = 0; i < 10; i++)
	{
		if (b[i] % 2 != 0)
		{
			textcolor(YELLOW);
			backgroundcolor(RED);
		}else{
			textcolor(WHITE);
			backgroundcolor(BLACK);
		}

		printf("%d",b[i]);
	}

	getch();
}

//Opcion 8
void opcionOcho(){

	//Metodo Burbuja en vector B.
	clscr();
	marco();
	gotoxy(35,12); printf("Metodo Burbuja en vector B.");

	for(int vueltas = 0 ; vueltas < 10; vueltas++) //Son 10 vueltas, porque son 10 valores
	{
		for(int i = 0; i < 9; i++) //Recorre el arreglo
		{
			if(b[i] > b[i+1]) // Uno antes es mayor que el siguiente?
			{
				aux = b[i+1];
				b[i+1] = b[i];
				b[i] = aux;
			}
		}
	}


	for(i = 0 ; i < 10 ; i++)
	{
		gotoxy(15,7+i);printf("&d",b[1]);
	}

	getch();
}

//Opcion 9
void opcionNueve(){

	clscr();
	marco();
	gotoxy(35,12); printf ("Intercambiar valores entre el vector A y B.");


	for (int i = 0; i < 10; i++)
	{
		aux = a[i];
		a[i] = b[i];
		b[i] = aux;
		gotoxy(20,15+i); printf("a[i] = %d - b[i] = %d", a[i], b[i]);
	}

	
	getch();
}

//Opcion 10
void opcionDiez(){

	clscr();
	marco();
	gotoxy(35,12); printf ("Imprimir Inverso de Vector A");

	for (int i = 9; i >= 0 ; i--)
	{
		gotoxy(25,15+i); printf ("A[%d] = %d", i, a[i]);
	}

	getche();
}

//Opcion 11
void opcionOnce(){

	clscr();
	marco();
	gotoxy(35,12); printf ("Promedio de Vector A");

	int total = 10;
	int suma = 0;

	for (int i = 0; i < 10; i++)
	{
		suma = suma + a[i];
	}

	float promedio = suma / 10;

	gotoxy(20,15); printf ("Promedio de Vector A = %f", promedio);

}

//Marco de pantalla
void marco()
{

	//Para X
	  for (i=10; i<=70;i++) // lineas horizontales 177-178
	  {
	  	gotoxy(i,3); printf ("%c",178);
	  	gotoxy(i,20); printf ("%c",178);
	  }

	  //Para Y
	   for (i=3; i<=20;i++) // lineas verticaless 177-178
	  {
	  	gotoxy(10,i); printf ("%c",178);
	  	gotoxy(70,i); printf ("%c",178);
	  }}
