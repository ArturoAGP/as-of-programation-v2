Arturo Alejandro Guzman Perez 22110356
Cesar Eduardo Campos Virgen 22110354

Regla falsa

En cálculo numérico, el método de la regla del falso es un método iterativo de resolución numérica de ecuaciones no lineales. El método combina el método de bisección y el método de la secante.

Donde se parte de un intervalo inicial [x1,x2] con funciones f(x1)= f(u) y f(x2)= f(l) de signos opuestos, lo que garantiza que en su interior hay al menos una raíz. El algoritmo va obteniendo sucesivamente en cada paso un intervalo más pequeño [xr, xr] que sigue incluyendo una raíz de la función f.
A partir de un intervalo [xr1, xr2] se calcula un punto interior xr:
 
xr = x2-((fu*(x1-x2))/(fl-fu));
 
Dicho punto es la intersección de la recta que pasa por (x1,f(u)) y (x2,f(l)) con el eje de abscisas. Se repite el procedimiento hasta encontrar un punto que satisfaga a la raíz, utilizando los valores obtenidos en cada interacción se acercara a la raíz.
