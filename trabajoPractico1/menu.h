#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

/** \brief funcion usada para el menu de opciones
 * \param int
 * \param
 * \return int opcion
 */

int menu(){
int opcion;
    system("cls");
    printf("     *** Bienvenido al trabajo practico n°1 ***\n\n");
    printf("1) Ingresar 1er operando.\n");
    printf("2) Ingresar 2do operando.\n");
    printf("3) Calcular todas las operaciones.\n");
    printf("4) Informar resultados.\n");
    printf("5) Salir.\n");
    printf("\nElija una opcion: ");
    fflush(stdin);
    scanf("%d", &opcion);
    return opcion;
    }


#endif // MENU_H_INCLUDED
