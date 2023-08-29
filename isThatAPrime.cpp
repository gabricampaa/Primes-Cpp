#include <iostream>
#include "mia_lib.h"
#include <memory>
#include <thread>
#include <chrono>
using namespace std;




int main(){

    start:
    system("clear");
    aCapo();
    int divisori = 0;
    bool finito = false;
    int input_utente;
    cout<<"What number do you want to know if it is prime: ";
    cin>>input_utente; 


    if(input_utente%2==0 && input_utente>2){
        cout<<input_utente<<" is not a prime number, it's even!";

        goto start;
    }

    else{
        scrivi("Calculating...");
        aCapo();
    }
    
    while (!finito) {
    int contatore = 1;

    for (contatore = 1; contatore <= input_utente; contatore++) {
        int resto = input_utente % contatore;

        if (resto == 0) {
            divisori++;
        }
    }

    if (contatore > input_utente) {
        finito = true;
    }
}
    if(divisori==2){
        cout<<input_utente<< " is a prime number!";
    }
    else{
        cout<<input_utente<< " is not a prime number!";
    }
    

    aCapo();
    this_thread::sleep_for(chrono::seconds(2));
    
    goto start;
   
    return 0;
}



