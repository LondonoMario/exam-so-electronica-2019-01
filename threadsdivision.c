#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "common_threads.h"
#ifndef __MYCOMMON__
#define __MYCOMMON__
#include "pthread.h"
#include "common.h"
#define puerta pthread_mutex_t //nuevo tipo de dato
#define crear_puerta(m) Pthread_mutex_init (&m, NULL)// funcion para crear puerta
#define cerrar_puerta(m) Pthread_mutex_lock(&m)//funcion para cerrar la puerta
#define abrir_puerta(m) Pthread_mutex_unlock(&m)//funcion para abrir la puerta
#define destruir_puerta(m) pthread_mutex_destroy(&m)//funcion para destruir puerta
#endif

int v;
void *divi(void *arg){
	float y=350;
	float z=25;
	float v=y/z;
	printf("Value of v: %f",v);
	return v;
}

void *multi(void *arg){
	float x=1250;
	float v=v*x;
	printf("Value of v: %f",v);
	return v;
}

int main(){
	pthread_t p1,p2;
	float x=1250;
	float y=350;
	float z=25;
	Pthread_create(&p1,NULL,divi,NULL);
	Pthread_create(&p2,NULL,multi,NULL);
	Pthread_join(p1,NULL);
	Pthread_join(p2,NULL);
	printf("El valor final es: %f \n",v);
	return 0;
}
