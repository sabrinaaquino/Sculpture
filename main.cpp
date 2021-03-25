/** @file main.cpp
*   @brief Codigo principal
*/

#include <iostream>
#include "Sculptor.h"
#include <fstream>
#include <string>

int main()
{
    /// Construtor
	Sculptor vida(100,100,100);
	vida.setColor(0.8,0.1,0.1,0.99);
    vida.putSphere(50,80,50,30);
    vida.setColor(0.9,0.9,0.9,0.99);
    vida.putSphere(50,88,80,14);
    vida.putSphere(80,88,50,14);
    vida.putSphere(20,88,50,14);
    vida.putSphere(50,88,20,14);
    vida.putSphere(50,102,50,14);
    vida.outSphere(50,80,50,30);
    vida.outSphere(50,100,50,40);
    vida.cutSphere(50,47,50,32);
    vida.setColor(0.57,0.53,0.49,0.99);
    vida.putEllipsoid(25,34,25,10,7,7);
    vida.setColor(0,0,0,1);
    vida.putBox(21,22,32,37,31,32);
    vida.putBox(29,30,32,37,31,32);
    // BLOCO PRINCIPAL
    vida.setColor(0,0,0,1);
    vida.putBox(16,35,14,29,15,37);
    vida.setColor(0.55,0.3,0.001,0.99);
    //BLOCOS DE BAIXO
    for(int i=0;i<=17;i=i+17){
        vida.putBox(16,25,15,19,32-i,37-i);
        vida.putBox(26,34,15,19,32-i,37-i);
    }
    vida.putBox(16,21,15,19,21,31);
    for(int i=0; i<=17; i=i+17){
        vida.putBox(26,35,15,19,32-i,37-i);
    }
    vida.putBox(26,35,15,19,21,31);
    //BLOCOS DO MEIO
    for(int i=0;i<=11;i=i+11){
        vida.putBox(16,22,20,24,27-i,37-i);
        vida.putBox(30,35,20,24,27-i,37-i);
    }
    vida.putBox(23,29,20,24,32,37);
    for(int i=0; i<=7; i=i+7){
        vida.putBox(16+i,22+i,20,24,15,25);
    }
    vida.putBox(30,35,20,24,15,25);
    //BLOCOS DE CIMA
    for(int i=0;i<=17;i=i+17){
        vida.putBox(16,25,25,29,32-i,37-i);
        vida.putBox(26,34,25,29,32-i,37-i);
    }
    vida.putBox(16,25,25,29,21,31);
    for(int i=0; i<=17; i=i+17){
        vida.putBox(26,35,25,29,32-i,37-i);
    }
    vida.putBox(26,35,25,29,21,31);

    vida.limpaVoxels();
	vida.writeOFF((char*)"Vida.off");
	vida.writeOFF((char*)"Vida.txt");

}
