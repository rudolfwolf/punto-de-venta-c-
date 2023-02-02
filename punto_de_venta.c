#include "header.h"

struct order{
    char nombre[50];
    int orden_num;
    int num_comida;
    int costo;
}p[10000];
int order_count = 0, served_count = 0;

int orden ()
{
    int n, in, m;
   
    printf ("por favor introduce tu nombre: ");
    gets (p[order_count].nombre);
    p[order_count].orden_num = 10000+order_count;
   void items();
    p[order_count].num_comida = n;
    p[order_count].costo = 0;
    p[order_count].num_comida = 0;
    
    level:
    printf ("¿cuántas cosas le gustaría ordenar? (número) ");
    scanf ("%d", &n);

    getchar ();
    while (n--){
        printf ("\nintroduzca por favor el código del item que escogió\n");
        scanf ("%d", &in);
        getchar();
        switch(in){
    case 1 : {
        printf ("introduzca el tamaño de su hamburguesa: 1. 300g  2. 400g\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("por favor introduzca la cantidad: (cuantos desea) ");
        scanf ("%d", &m);
        getchar();

        p[order_count].num_comida +=m;

        if (i==1) p[order_count].costo += (60*m);

        else p[order_count].costo += (80*m);
        break;
    }
    case 2 :{
        printf ("escoja el tamaño de su pizza: 1. Ch  2. Med  3. G\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("por favor introduzca la cantidad: (cuantos desea) ");
        scanf ("%d", &m);
        getchar();

        p[order_count].num_comida +=m;

        if (i==1) p[order_count].costo += (70*m);

        else if (i==2) p[order_count].costo += (90*m);

        else  p[order_count].costo += (100*m);

        break;
    }
    case 3 :{
        printf ("Introduzca la cantidad de piezas de pollo que desea: 1. 4 pz  2. 6 pzs  3. 10 pzs\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("por favor introduzca la cantidad: (cuantos desea) ");
        scanf ("%d", &m);
        getchar();

        p[order_count].num_comida +=m;

        if (i==1) p[order_count].costo += (60*m);

        else if (i==2) p[order_count].costo += (90*m);

        else  p[order_count].costo += (150*m);

        break;
    }
    case 4 :{
        printf ("introduzca la cantidad que desea de Hot dogs: 1. una pzs  2. dos pzs  3. tres pzs\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("por favor introduzca la cantidad: (cuantos desea) ");
        scanf ("%d", &m);
        getchar();

        p[order_count].num_comida +=m;

        if (i==1) p[order_count].costo += (30*m);

        else if (i==2) p[order_count].costo += (60*m);

        else  p[order_count].costo += (90*m);

        break;
    }
    case 5 :{
        printf ("introduzca el tamaño de su ensalada: 1. media orden  2. grande\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("por favor introduzca la cantidad: (cuantos desea) ");
        scanf ("%d", &m);
        getchar();

        p[order_count].num_comida +=m;

        if (i==1) p[order_count].costo += (80*m);

        else p[order_count].costo += (100*m);

        break; 
    }
    case 6 : {
        printf ("malteada de 250 ml \n");

        printf ("por favor introduzca la cantidad: (cuantos desea): ");
        scanf ("%d", &m);
        getchar();

        p[order_count].num_comida +=m;
        p[order_count].costo += (40*m);
        break;
    }
    case 7 : {
        printf ("café de 250 ml \n");

        printf ("por favor introduzca la cantidad: (cuantos desea) ");
        scanf ("%d", &m);
        getchar();

        p[order_count].num_comida +=m;
        p[order_count].costo += (30*m);
        break;
    }
    case 8 : {
        printf ("Cappuccino de 250 ml\n");

        printf ("por favor introduzca la cantidad: (cuantos desea) ");
        scanf ("%d", &m);
        getchar();

        p[order_count].num_comida +=m;
        p[order_count].costo += (40*m);
        break;
    }
    case 9 :{
    	
        printf ("introduzca el tamaño de su refresco: 1. 250ml  2. 500ml\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("por favor introduzca la cantidad: (cuantos desea) ");
        scanf ("%d", &m);
        getchar();

        p[order_count].num_comida +=m;

        if (i==1) p[order_count].costo += (20*m);

        else p[order_count].costo += (30*m);
        break;
    }
    default : {
        printf ("has elegido algo fuera del menú, ¡intenta de nuevo!\n");
        n++;
    }
        }
    }
    char temp;
    printf ("¿le gustaría ordenar alguna cosa más?(s/n)\n ");
    scanf("%c", &temp);
    if (temp == 's' || temp == 'S')
        goto level;
    system ("cls");
    printf ("\n\n");
    printf ("\n  número de comida ordenada: %d\n", p[order_count].num_comida);
    printf ("\n  Gracias %s por tu orden, su total es de %d pesos.\npor favor espere mientras preparamos su orden.\n\n", p[order_count].nombre, p[order_count].costo);
    order_count ++;
}
int info ()
{
    if (order_count==0){
        printf (" pida su orden primero por favor\n");
        return;
    }

    else if (served_count == order_count) {
        printf ("todas las órdenes han sido servidas\n");
        return;
    }

    printf ("Orden no. %d de %s está lista\n", p[served_count].orden_num, p[served_count].nombre);
    printf ("disfrute su comida \n\n");
    served_count++;
}
int ordenes_act ()
{
    printf ("órdenes totales: %d\n", (order_count));
    printf ("órdenes totales servidas: %d\n", served_count);
    printf ("órdenes totales esperando a ser servidas: %d\n", (order_count-served_count));
    printf ("preparando la comida para la orden no. %d\n\n", p[served_count].orden_num);
}
void menu ()
{
	draw();

}
int main ()
{
	 setlocale(LC_CTYPE,"spanish"); // poner el texto en español
        system("color 4E"); //para poner el color
    
        printf("*******************************************************************");
        printf("\n\t\t\t Menú Principal \n");   
        printf("*******************************************************************");
        printf("\n");
        printf("\t\t   wwwwww              wwwwww\n");
        printf("\t\t    wwwww      ww      wwwww\n");  
        printf("\t\t      wwww    wwww    wwww\n");
        printf("\t\t       www   ww  ww   www\n");
        printf("\t\t        wwwwww    wwwwww\n");
        printf("\t\t\t wwww      wwww\n");
        printf("\t\t\t  www      www\n");
        printf("\t\t\t   ww      ww\n");
        printf("\n\t\t  ¡nos alegra verte de nuevo! \n\n\n");
        printf("   Bienvenido a Wc Ronald's, ¿qué deseas hacer el día de hoy? \n\n");
        printf("\t    (pulse cualquier tecla para continuar) \n\n");
        getch();
        system("cls");
    while (1){
    	printf ("\n\n");
        printf ("\t\t\t1. Ordenar\n\t\t\t2. Servir\n\t\t\t3. Mostrar orden \n\t\t\t4. Salir\n");
        printf ("\n");

        int in;
        scanf ("%d", &in);
        printf ("\n");
        getchar ();
        system("cls");
        switch (in){
            case 1 : {
            	
            	menu ();
                orden ();
                break;
            }
            case 2 : {
                info();
                break;
            }
            case 3 : {
                ordenes_act();
                break;
            }
            case 4 : {
            		printf ("\n\n\t\t ¡gracias por venir a Wc Ronald's; te esperamos volver a ver pronto!");
            		getch();
                return 0;
            }
        }
    }
}
