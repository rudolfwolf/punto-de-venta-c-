#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

void delay(int number_of_seconds) 
{ 
    
    int milli_seconds = 1000 * number_of_seconds; 
  
    
    clock_t start_time = clock(); 
  
 
    while (clock() < start_time + milli_seconds); 
} 

void draw()
{
	char cc;
    setlocale (LC_CTYPE,"spanish");
    printf ("\n\t\t\tcargando menú...\n\n");
    do{
    for(cc=1;cc<=10;cc++)
    {
    	delay(1); 
    	printf(" %c",62);
	}
	}while(cc<=10);
    system("cls");
     printf("\n\n");
    printf("(..................................MENÚ...................................)\n");
	printf("(código#----Descripción----------------tamaño---------------------Precio  )\n");
    printf("[1]---------Hamburguesa----------------300/400g-------------------$60/80\n");
    printf("[2]---------Pizza----------------------Ch/Med/G-------------------$70/90/100\n");
    printf("[3]---------pollo frito----------------4/6/10 pzs-----------------$60/90/150\n");
    printf("[4]---------Hotdog---------------------1/2/3 pzs------------------$30/60/90\n");
    printf("[5]---------Ensalada-------------------med/Grande-----------------$80/100\n");
    printf("[6]---------malteada-------------------250ml----------------------$40\n");
    printf("[7]---------café-----------------------250ml----------------------$30\n");
    printf("[8]---------Cappuccino-----------------250ml----------------------$40\n");
    printf("[9]---------refresco-------------------250/500ml------------------$20/30\n\n");
}
