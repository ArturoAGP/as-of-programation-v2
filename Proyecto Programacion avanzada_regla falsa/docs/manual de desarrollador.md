Arturo Alejandro Guzman Perez 22110356
Cesar Eduardo Campos Virgen 22110354

Introduccion 

El propósito de este manual del programador, es dar a conocer al lector los códigos fuentes del programa realizado. Para ello tratamos de la forma más concisa de explicar cada uno de los códigos, junto con la programación utilizada en el desarrollo del software, esto con el fin de que el usuario pueda modificar a gusto alguno de los valores y parámetros de las funciones.

Este es un programa que ejecuta el motodo numerico de la regla falsa, utilizando 3 clases con sus respectivas funciones para poder funcionar, empezaremos explicando el main y su funcion.

Main:

#include <iostream>
#include <iomanip>
#include <cmath>
#include "programa.h"
using namespace std;
int main()
{
    Programa programa;
    programa.iniciar();
   }

Esto es todo lo que constituye nuestro main, en este caso solo se manda a llamar la clase programa la cual se encarga de los siguientes pasos, en el main solo se manda a llamar esta funcion para poder "iniciar" el programa.

clase programa:

#include <iostream>
#include <cmath>
#include <iomanip>
#include "menup.h"
class Programa
{
public:
    void iniciar(){
        menup menu;
        menu.mostrarMenu();
    }
};

Esta clase al igual que el main unicamente tiene la funcion de mandar a llamar a otra clase siendo esta la clase menup, utilizando un void para que se pueda hacer de manera indefinida y las veces que requiera el usuario.

class menup:
#include <iostream>
#include <iomanip>
#include <cmath>
#include "metodo.h"

class menup
{
public: 
void  mostrarMenu(float el, double xu, double xl);{
std::cout<<"Ingrese los valores del intervalo inicial para tabular [A,B] .\n"<<endl;

std::cout<<"Ingrese el primer punto A.\n"<<endl;
std::cin>>xl;

std::cout<<"Ingrese el segundo punto B .\n"<<endl;
std::cin>>xu;

std::cout<<"Ingrese el error minimo.\n"<<endl;
std::cin>>el;

Metodo metodo;
double resultado = metodo.algoritmo(xu, xl, fu, fl, xr, fr, e);

std::cout<<"    %d      %.10lf      %.10lf      %.10lf      %.10lf      %.10lf      %.10lf      %.10lf\n"<<i,x1,x2,xr,fl,fu,fr,e<<endl;
                            
if(fr*fl>0)
x1=xr;

else
x2=xr;

if(e<el){

std::cout<<"Este es el valor mas parecido al error relativo que pediste, o si tuviste suerte es el valor exacto cuchao \n"<<endl;
return;
}
else{
e0=xr;
algoritmo(e0,++i);
}	
};
};

La clase menup tiene la funcion de guardar los datos ingresados y salir del programa, en este caso cuando se empiece a utilizar la clase menup se mostrara en la pantalla los textos que solicitaran la informacion que se desea utilizar al usuario, para despues guardarlos en las variables xl, xu y el; 

acto seguido se mandara a llamar a la clase Metodo, la cual se encargara de hacer todos los calculos, pero eso lo explicare posteriormente.

una vez que la clase metodo nos entrega los resultados de los calculos y las iteraciones, la clase menu se encarga de acomodarlos de la manera correcta y cambiar la informacion dependiendo de como se debera acomodar segun el metodo de la regla falsa, unicamente cambiado de lugar los valores de xr, intercalandolos entre los valores de x1, x2 o e0 que equivalen a xl, xu y el respectivamente, una vez cambiados se acomodaran de la manera correcta sin importar el numero de iteraciones que haga el programa.

despues se dara la opcion de volver a ingresar los dato o salir.

y por ultimo explicaremos la clase metodo

clase metodo:

#include <iostream>
#include <iomanip>
#include <cmath>
class Metodo
{
public:
double evaluar(double x){
return x-4*(x);
}
void algoritmo(double xu,double xl,double e0,double fu,double fl,double fr,double xr,double e, double evaluar, float el, int i){

double x1 = xl;
double x2 = xu;
float x3 = el;
double fu = evaluar*(x2);
double fl = evaluar*(x1);
double xr = x2-((fu*(x1-x2))/(fl-fu));
double fr = evaluar*(xr);
double e=((xr-e0)/xr) ;        
}    
};

la clase metodo es la mas importante de todas, ya que es la que se encarga de hacer todos los calculos que requerira el programa, primero se plantera el double de evaluar el cual tiene la funcion en su interior, en caso de querer cambiar la funcion se necesitara removerla directamente del codigo y reemplazarla por la funcion deseada, el usuario no tiene la opcion de removerla por si mismo, a menos que tenga acceso al codigo.

despues se abrira un void el cual se encargara de hacer los calculos una y otra vez hasta que se llegue al objetivo deseado, en este caso el error que se ingreso en la varibale de el.

en este punto la informacion que se ingreso en las variable xu, xl y el seran remplazadas o igualadas por otra varibale que se utilizara en las ecuaciones o formulas del metodo, siendo remplazadas por las variables x1 =xl,  x2 = xu, x3 = el 

una vez echo esto, las demas variables declaradas con double son las que se encargaran de hacer los calculos 

siendo estas las formulas que seguira el programa con las variables previamente obtenidas y declaradas:

double fu = evaluar*(x2);
double fl = evaluar*(x1);
double xr = x2-((fu*(x1-x2))/(fl-fu));
double fr = evaluar*(xr);
double e=((xr-e0)/xr) ;

utilizando la funcion que esta en evaluar se intercambiaran los respectivos valores en cada una y nos entregara los calculos en las variables fu, fl, xr, fr y e.

estas son las variables que regresaran a la clase menu por el metodo de resultado y mostrara esta informacion al usuario.

asi es como funciona este programa paso a paso.
