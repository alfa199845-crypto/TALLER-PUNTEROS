TALLER PUNTEROS
Nombre: MIGUEL ANGEL SANDOVAL
Carrera: ING CIENCIAS DE LA COMPUTACION - IA

--objetivo aplicar el uso de punteros en C++ 

Se desarrollaron programas que permiten:

* Intercambiar valores usando punteros
* Trabajar con arreglos dinámicos
* Recorrer memoria utilizando aritmética de punteros
* Utilizar funciones con punteros (callbacks)
* Interpretar memoria a bajo nivel mediante casting

Punto 1: Intercambio de valores
Se implementa una función que intercambia dos variables enteras usando punteros.
Características:
* No se usaron variables globales
* Se modifican los valores originales

Punto 2: Suma de elementos de un arreglo dinámico
Se creó un arreglo dinámico con `new`, se llenó con datos del usuario y se calculó la suma mediante una función.
Características:
* Uso de memoria dinámica
* Uso de punteros para recorrer el arreglo

Punto 3: Encontrar el mayor elemento
Se implementó una función que retorna el valor máximo de un arreglo.
Características:
* Uso exclusivo de punteros (`*(arr + i)`)
* No se usa índice (`arr[i]`)
* Validación de arreglo vacío

Punto 4: Uso de punteros con funciones (callback simple)
Se desarrolló una función que recibe otra función como parámetro para aplicar una operación a cada elemento del arreglo.
Ejemplos:
* Duplicar valores
* Triplicar valores
Características:
* Uso de punteros a función
* Aplicación dinámica de operaciones

Punto 5: Reinterpretación de memoria con casting de punteros
Se creó un programa que muestra cómo un valor `float` puede ser interpretado como `int` y como secuencia de bytes.
Características:
* Uso de casting de punteros
* Visualización de memoria byte por byte
* Uso de `char*` para recorrer memoria

-- Conceptos aplicados

* Punteros
* Aritmética de punteros
* Memoria dinámica (`new` y `delete`)
* Paso por referencia mediante punteros
* Punteros a función
* Casting de punteros

Restricciones cumplidas

* No se usaron variables globales
* No se usaron estructuras avanzadas
* Se trabajó únicamente con conceptos vistos en clase

