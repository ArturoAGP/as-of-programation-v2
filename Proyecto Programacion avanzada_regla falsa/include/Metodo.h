//Arturo Alejandro Guzman Perez 22110356
//Cesar Eduardo Campos Virgen 22110354

#include <iostream>
#include <iomanip>
#include <cmath>


class Metodo
{
public:

    double evaluar(double x){
         return x-4*(x);
    }

    void algoritmo(double xu,double xl,double e0,double fu,double fl,double fr,double xr,double e,
                    double evaluar, float el, int i){

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

