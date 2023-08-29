#include <iostream>
#include "mia_lib.h"
using namespace std;



int main(){

    

    int input_utente;
    cout<<"Up to what number do you want to see what the prime numbers are?: ";
    cin>>input_utente; 
    
    
    

    int cont_ciclo_while = 1;
    int cont_uno = 1;
    int cont_due = 2;    


    do
    {
        int cont_ciclo_while = cont_ciclo_while + 1 ;
        int divisori = 1; 

        do{
            if (cont_uno != cont_due){
            float risultato = cont_due % cont_uno ;
            int resto = float(risultato) ;
            cont_uno = cont_uno + 1 ; 
            
                if (resto == 0){
                    divisori = divisori + 1;
                }
                }

            
            if (cont_uno == cont_due){
                int cane = 0;

                if (divisori == 2){
                    cout<<"The number "<< cont_uno <<" is a prime number."<<endl;
                    }
                    
                }


        }while(cont_uno != cont_due);


    cont_uno = 1;
    cont_due = cont_due + 1;


    } while(cont_due <= input_utente);





    return 0;
}


