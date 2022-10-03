PR1-ULA
==============

Estilo de código
----------------

General
~~~~~~~

Use máximo 80 caracteres por línea, si requiere más caracteres agregue
un salto de línea luego de un operador y agregue 8 espacios de
identificación:

\ *// Correcto*\ 

.. code:: c

   int producto_de_cuatro_enteros = primer_valor * segundo_valor *
           tercer_valor * cuarto_valor;    

\ *// Incorrecto*\ 

.. code:: c

   int producto_de_cuatro_enteros = primer_valor * segundo_valor 
   * tercer_valor * cuarto_valor;                                  

Use 4 espacios para cada nivel de indentación:

\ *// Correcto*\ 

.. code:: c

   int main()
   {
       int buscar_numero = 6;

       for (int i = 0; i < 20; i++)            
       {
       if (i == buscar_numero)
           {
               printf("Encontrado");
           }     
       }                   
       return 0;       
   }                   

\ *// Incorrecto*\ 

.. code:: c

   int main()
   {
   int buscar_numero = 6;
   for (int i = 0; i < 20; i++)            
   {
   if (i == buscar_numero)
   {
   printf("Encontrado");
   }     
   }           
   return 0;       
   }                                   

Directivas de preprocesador
~~~~~~~~~~~~~~~~~~~~~~~~~~~

Macros
^^^^^^

Siempre que use la macro ``#define`` coloque su identificador en
mayúsculas:

\ *// Correcto*\ 

.. code:: c

   #define TAM 100                             

\ *// Incorrecto*\ 

.. code:: c

   #define tam 100                             

Además, si evalua alguna expresión use paréntesis para los parámetros y
la macro final:

\ *// Correcto*\ 

.. code:: c

   #define MINIMO(x, y) ((x) < (y) ? (x) : (y))                        

\ *// Incorrecto*\ 

.. code:: c

   #define MINIMO(x, y) x < y ? x : y                          

Inclusión de cabeceras
^^^^^^^^^^^^^^^^^^^^^^

Cabecera estándar:

\ *// Correcto*\ 

.. code:: c

   #include <nombre_de_archivo.h>                  

\ *// Incorrecto*\ 

.. code:: c

   # include <nombre_de_archivo.h>                     

Cabecera del usuario:

\ *// Correcto*\ 

.. code:: c

   #include "nombre_de_archivo.h"              

\ *// Incorrecto*\ 

.. code:: c

   # include "nombre_de_archivo.h" 

Funciones
~~~~~~~~~

Nombres
^^^^^^^

Use el estilo **snake_case** para los nombres de las funciones, esto es
cuando se quiere agregar más de una palabra (p. ej.,
``float kelvin_a_celsius(float)``), o si solo requiere una palabra evite
usar letras mayúsculas:

\ *// Correcto*\ 

.. code:: c

   int producto(int, int);         

\ *// Incorrecto*\ 

.. code:: c

   int Producto(int, int); 

Prototipos (Interfaz de funciones)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Todos los prototipos de las funciones van alineados:

\ *// Correcto*\ 

.. code:: c

   void    intercambiar(int*, int*);
   float   kelvin_a_celsius(float);            
   int     binario_a_decimal(char*, int);  

\ *// Incorrecto*\ 

.. code:: c

   void intercambiar(int*, int*);
   float kelvin_a_celsius(float);          
   int binario_a_decimal(char*, int);

Declaración
^^^^^^^^^^^

Las llaves van en su propia línea y alineadas:

\ *// Correcto*\ 

.. code:: c

   void intercambiar(int* a, int* b)
   {
       int aux = *a;
       *a = *b;                    
       *b = aux;
   }

\ *// Incorrecto*\ 

.. code:: c

   void intercambiar(int* a, int* b){
   int aux = *a;
   *a = *b;                
   *b = aux; }

Invocación
^^^^^^^^^^

Agregue un espacio entre parámetros, es decir, uno después de cada coma:

\ *// Correcto*\ 

.. code:: c

   intercambiar(&a, &b);   

\ *// Incorrecto*\ 

.. code:: c

   intercambiar(&a,&b);

Función main
^^^^^^^^^^^^

Use la siguiente estructura para la función principal main:

.. code:: c

   int main()
   {
       
   }

Pero si requiere recibir parámetros de entrada, entonces use:

.. code:: c

   int main(int argc, char* argv[])
   {
       
   }

Variables
~~~~~~~~~

.. _nombres-1:

Nombres
^^^^^^^

-  Use el estilo **snake_case** para los nombres de las variables, esto
   es cuando se requiere agregar más de una palabra (p. ej.,
   ``numero_mayor``), o si solo requiere una palabra evite usar letras
   mayúsculas.
-  Asigne nombres representativos, por ejemplo si está realizando una
   suma de números pares llame a su variable ``sumar_pares``.

Declaración y asignación
^^^^^^^^^^^^^^^^^^^^^^^^

Si desea declarar múltiples variables del mismo tipo separe por comas y
espacios. Además, declare las variables al momento de usarlas, y debe
asignarles un valor inicial:

\ *// Correcto*\ 

.. code:: c

   int suma = 0, promedio = 0, numero_mayor = 0; 

\ *// Incorrecto*\ 

.. code:: c

   int suma = 0, promedio = 0, numero_mayor;

Apuntadores
~~~~~~~~~~~

Cuando declare un apuntador escriba el ``*`` al lado del tipo de dato:

\ *// Correcto*\ 

.. code:: c

   char* a;

\ *// Incorrecto*\ 

.. code:: c

   char *a;

Usualmente estas dos formas son válidas en el lenguaje C, pero la
segunda permite diferenciar mejor cuando se declara un apuntador.

Operaciones
~~~~~~~~~~~

Use un espacio antes y después de los operadores:

\ *// Correcto*\ 

.. code:: c

   float celsius = 5.0 / 9.0 * (fahrenheit - 32.0);

\ *// Incorrecto*\ 

.. code:: c

   float celsius = 5.0/9.0*(fahrenheit-32.0); 

Condicionales
~~~~~~~~~~~~~

-  Use 1 espacio entre la palabra reservada (p. ej., ``if``) y la
   condición
-  Las llaves van en su propia línea y alineadas

Condicional simple
^^^^^^^^^^^^^^^^^^

\ *// Correcto*\ 

.. code:: c

   if (n > 0)
   {
       printf("n es positivo\n");
   }

\ *// Incorrecto*\ 

.. code:: c

   if(n > 0){
   printf("n es positivo\n");  
   }

Condicional compuesto
^^^^^^^^^^^^^^^^^^^^^

Cuando use el condicional compuesto haga previamente 1 salto de línea
después de cerrar las llaves y continúe en el mismo nivel de
indentación:

\ *// Correcto*\ 

.. code:: c

   if (x > 0)
   {
       printf("x es positivo\n");
   }
   else if (x < 0)
   {                               
       printf("x es negativo\n");
   }
   else
   {
       printf("x es cero\n");
   }

\ *// Incorrecto*\ 

.. code:: c

   if (x > 0)
   {
       printf("x es positivo\n");
   }else if (x < 0)
   {                           
       printf("x es negativo\n");
   }else
   {
       printf("x es cero\n");
   }

Condicional múltiple
^^^^^^^^^^^^^^^^^^^^

Use 4 espacios adicionales de indentación dentro de cada caso del
``switch`` y agregue un salto de línea después de cada uno:

\ *// Correcto*\ 

.. code:: c

   switch (n)
   {
       case -1:
           printf("n es -1\n");
           break;

       case 1:
           printf("n es 1\n"); 
           break;

       default:
           printf("n no es -1 y tampoco 1\n");
           break;
   }

\ *// Incorrecto*\ 

.. code:: c

   switch (n)
   {
       case -1:
       printf("n es -1\n");
       break;
       case 1:
       printf("n es 1\n");
       break;
       default:
       printf("n no es -1 y tampoco 1\n");
       break;
   }

Repeticiones
~~~~~~~~~~~~

-  Si necesita variables temporales de iteración puede usar las letras
   ``i, j, k`` a menos que use nombres específicos que hagan su código
   más legible
-  Use 1 espacio entre la palabra reserva (p. ej., ``while``) y la
   condición
-  Las llaves van en su propia línea y alineadas
-  Agregue 4 espacios de indentación para las instrucciones dentro del
   bucle

Repita para
^^^^^^^^^^^

\ *// Correcto*\ 

.. code:: c

   for (int i = 0; i < LIMITE; i++)
   {
       for (int j = 0; j < LIMITE; j++)
       {
           for (int k = 0; k < LIMITE; k++)
           {
               // instrucciones
           }
       }
   }

\ *// Incorrecto*\ 

.. code:: c

   for (int i = 0; i < LIMITE; i++)
   {
   for (int j = 0; j < LIMITE; j++)
   {
   for (int k = 0; k < LIMITE; k++)
   {
               // instrucciones
   }
   }
   }

Repita mientras
^^^^^^^^^^^^^^^

\ *// Correcto*\ 

.. code:: c

   while (condición)
   {
       // instrucciones
   }

\ *// Incorrecto*\ 

.. code:: c

   while (condición){
   // instrucciones
   }

Hacer mientras
^^^^^^^^^^^^^^

\ *// Correcto*\ 

.. code:: c

   do
   {
       // instrucciones
   }
   while (condición);

\ *// Incorrecto*\ 

.. code:: c

   do{
       // instrucciones
   }while (condición);

Tipos de datos del usuario
~~~~~~~~~~~~~~~~~~~~~~~~~~

Use el estilo **PascalCase**, es decir que cada palabra que contenga el
nombre debe comenzar por mayúsculas y no se separan (p. ej.,
``NumeroRacional``).

Tipo de dato simple
^^^^^^^^^^^^^^^^^^^

\ *// Correcto*\ 

.. code:: c

   typedef int Entero; 

\ *// Incorrecto*\ 

.. code:: c

   typedef int entero;

Tipo de dato compuesto (Registro)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

-  Realice 1 salto de línea luego de escribir ``typedef struct``
-  Las llaves van en su propia línea y alineadas
-  Agregue 4 espacios de indentación para las instrucciones dentro del
   registro

\ *// Correcto*\ 

.. code:: c

   typedef struct
   {
       int numerador;
       int denominador;
   }
   NumeroRacional;

\ *// Incorrecto*\ 

.. code:: c

   typedef struct {
       int numerador;
       int denominador;
   }Numeroracional;

Comentarios
~~~~~~~~~~~

Use ``//`` para realizar un comentario breve en una línea y agregue un
espacio para escribir el texto

\ *// Correcto*\ 

.. code:: c

   // este es mi primer comentario

\ *// Incorrecto*\ 

.. code:: c

   //este es mi primer comentario 

Use ``espacio+asterisco+espacio`` para realizar comentarios en varias
líneas

\ *// Correcto*\ 

.. code:: c

   /*
    * evite repetir lo que ya dice el código, agregue información adicional
    * evite entregar un programa con bloques de código comentados 
    */

\ *// Incorrecto*\ 

.. code:: c

   /** evite repetir lo que ya dice el código, agregue información adicional 
    *evite entregar un programa con bloques de código comentados
    */

Archivos
~~~~~~~~

.. _nombres-2:

Nombres
^^^^^^^

Use el estilo **snake_case** para los nombres de los archivos, esto es
cuando se quiere agregar más de una palabra (p. ej.,
``calcular_horas.c``), si solo requiere una palabra evite usar letras
mayúsculas.

Ejemplo de tipos de archivos
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

-  ``pr1_ula.h`` cabecera
-  ``hola_mundo.c`` código fuente C
-  ``entrada.txt`` texto simple
-  ``lib_ejemplo.a o lib_ejemplo.lib`` biblioteca estática (GNU/Linux y
   Windows respectivamente)
-  ``lib_ejemplo.so o lib_ejemplo.dll`` biblioteca dinámica (GNU/Linux y
   Windows respectivamente)

Referencias
~~~~~~~~~~~

-  `https://cs50.readthedocs.io/style/c/ <https://cs50.readthedocs.io/style/c/>`__
-  `https://github.com/MaJerle/c-code-style <https://github.com/MaJerle/c-code-style>`__

Créditos
~~~~~~~~

-  `Jesús Peréz <http://www.webdelprofesor.ula.ve/ingenieria/jesuspangulo/>`__
-  `Alejandro Mujica <https://github.com/R3mmurd>`__
-  `José Castro <https://github.com/jose6alejandro>`__
