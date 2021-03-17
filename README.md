# polinomios
Problema 6 de la práctica 4-5 (C++) de Informática Aplicada:

Un polinomio es una expresión matemática en forma de suma de potencias de una o más variables
multiplicadas por coeficientes. Un polinomio en una variable con coeficientes constantes está dado
por:
            a(n) x^n + a(n-1) x^(n-1) + .. + a2 x^2 + a1 x + a0

El grado u orden del polinomio está dado por la potencia más elevada del mismo.
Escriba el código de una clase Polinomio que modele un polinomio monovariable. Dicha clase
deberá almacenar información sobre el orden del polinomio (mayor o igual a 0) y sobre los
coeficientes (usar array de flotantes de doble precisión con de n+1 elementos para el caso de
polinomio de orden n) de cada potencia.
Añada a la clase:
- un constructor por defecto
- un constructor de copia
- un constructor donde se le pase como información un array con los coeficientes del
polinomio (de 0 a n).
Deberá escribir 2 métodos de acceso que permitan: uno de ellos, leer el orden del polinomio
y el otro, leer el coeficiente que corresponda a una determinada potencia, información que deberá
pasar como argumento al invocar el método.
Defina además un método evaluar() que evalúe el polinomio para un valor dado de x.

