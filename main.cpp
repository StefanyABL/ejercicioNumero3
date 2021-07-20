/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Stefany
 *
 * Created on 9 de septiembre de 2019, 04:58 PM
 */

#include <cstdlib>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

/*
 * 
 */
int main(void) {
  //  system("clear");//para limpiar pantalla en linux
    srand(time(NULL));//Inicia semilla de numeros aleatorios
    int i;
    for (i=1;i<=50;i++){
        printf("(%d)\t",rand()%21+10);
        printf ("\n");
        
    }
    

    return 0;
}

