# Primer examen parcial sistemas operativos
## Mario Londoño 1825221


# Pregunta 1
## Utilice la libreria time.h la cual permite ver el tiempo "real" que toma cada ejecucion
## Se tomaron valores de multiplos de 10 empezando por 100, el segundo 1000 y asi sucesivamente
## Cuyos tiempos fueron (S=segundos) 
## 100 - 0.000170 S - Se elimina
## 1000 - 0.000178 S
## 10000 - 0.000232 S
## 100000 - 0.000811 S
## 1000000 - 0.006863 S - Se elimina
## En general los tiempos van en aumento dado que cada hilo de ejecucion toma un tiempo ejecutando la funcion worker y este tiempo va incrementando mientras las instrucciones de ejecucion entran, abren la puerta, cierran la puerta, se ejecuta la funcion worker, abren la puerta y salen. Y mientras el valor insertado aumenta este programa tardara mas tiempo en ejecutarse


# Pregunta 2
##

