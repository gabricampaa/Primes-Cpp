#include <iostream>
#include "mia_lib.h"
#include <time.h>
#include <unistd.h>
#include <thread>
#include <chrono>
using namespace std;


class Macchina{

    private:
    string title;
   
    public:
    int rpm, vel;
    int posx = 0;
    char gear;
    bool accensione = false;

    
    Macchina (string modello){
        setTitle(modello);
    }

    void setTitle(string a){
        title = a;
    }
    string getTitle(string a)
    {
        return title;
    }

    void accendi(){
        
        accensione = true;
        rpm = 1000;
        vel = 0;
        gear = 'n';

    }

    void spegni(){

        accensione = false;
        rpm = 0;
        vel = 0;
        gear = '/';

    }


    int muovi_avanti()
    {
        posx = posx + 10;
        return posx;
    }

    int muovi_indietro()
    {
        posx = posx - 10;
        return posx;

    }

    void movimento(){

        accensione = true;
        char direzione;
        do{
        cin >> direzione;
        
            if (direzione == 'w')
            {
            muovi_avanti();
            }
            else if (direzione == 's')
            {
            muovi_indietro();
            }
        }while(direzione !='t');
    
    cout<<endl;
    scrivi("Posizione attuale: ");
    cout<<posx;
    }

    int accel(int marcia){
        accensione = true;
        cout<<"Inserisci Marcia: ";
        cin>>marcia;

        rpm = 1000 * marcia;
        vel = rpm/1000;

        cout<<endl<<vel<<endl;
        return vel;
    }

    void freq(){
        
        usleep(1000000);
    
    }
};

void loadingBar(){

    system("color 0a");
    int a = 177, b = 219;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t Loading...\n\n");
    printf("\t\t\t\t");

    for (int i = 0; i<26;i++){
        printf("%c",a);
    }

    printf("\r");
    printf("\t\t\t\t");

    for (int i = 0; i<26;i++){
        printf("%c",b);
    }
    usleep(1000000);
}


int main(){

    scrivi("Premi t per fermarti, w per andare avanti, s per andare indietro.");
    cout<<endl;

    Macchina autom_uno("Toyota");
    autom_uno.movimento();


    int input_utente;
    int *cavallo;
    cavallo = &input_utente;
    cout<<cavallo<<endl;

    scrivi("Maremma");
    usleep(2000000);
    scrivi("Ciao");

   
    return 0;
}



int somma(int uno, int due){
   

    int somma = uno + due;
    cout<<endl<<somma<<endl;

    return somma;
}

/* $ g++ primi.cpp
$ ./a.out
Hello World */


