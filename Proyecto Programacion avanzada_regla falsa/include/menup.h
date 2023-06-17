//Arturo Alejandro Guzman Perez 22110356
//Cesar Eduardo Campos Virgen 22110354

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
