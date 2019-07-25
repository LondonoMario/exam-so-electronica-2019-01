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
##

