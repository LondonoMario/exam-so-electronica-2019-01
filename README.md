# Primer examen parcial sistemas operativos
## Mario Londoño 1825221


# Pregunta 1
Utilice la libreria time.h la cual permite ver el tiempo "real" que toma cada ejecucion
## Utilizando la puerta por fuera del for{}
tiempos (Con un argumento de 100000): 

- 0.001364 - descartado segun la guia
- 0.002568
- 0.002518
- 0.002579
- 0.002551 - descartado segun la guia

## Utilizando la puerta por dentro del fork{}
tiempos (Con un argumento de 100000):
- 0.053656 - descartado segun la guia
- 0.055766 
- 0.046694
- 0.051743
- 0.039906 - descartado segun la guia

El programa se demora mas dado que va a estar constantemente abriendo y cerrando la puerta lo que conduce a que cuando esta en el ciclo utilice un tiempo para abrir y cerrar y este tiempo se va a ir sumando hasta que el ciclo se detenga cosa que cuando esta por fuera no sucede dado que entra hace su ejecucion y vuelve a salir solo una vez

# Pregunta 2
Para que se ejecuten los dos hilos con sus variables basta con crear una puerta ya que cada hilo tiene su propia ejecucion entonces cuando uno modifica la variable v el otro esperara esta modificacion y luego la usara pero para que esto no suceda al mismo tiempo se usa la puerta

# Pregunta 3 

Es dificil hacer que el hijo siempre espere al padre sin usar el sleep() dado que el SO (en mi caso) actua de manera aleatoria al seleccionar uno u otro pero es posible y se hace visible cuando se ejecuta y se ve que como el proceso del padre ya termino al buscar su pid con la funcion getppid() arroja un valor distinto al del padre original por lo que dice que dicho proceso ya finalizo su ejecucion.

# Pregunta 4

1.  La utilización del CPU debe ser del 100%. Existen dos procesos y cada uno de ellos tendrá un 100% de uso del CPU. Se ejecutan en el orden indicado y no hay un intervalo de tiempo entre los dos procesos

2.  Necesita diez puntos de tiempo para completar los dos procesos

# Pregunta 5

El programa buscara los ejecutables en /usr/sbin, /usr/loca/sbin a no ser que le indiquemos una ruta especifica
