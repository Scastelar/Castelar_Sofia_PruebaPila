
#include <iostream>
#include <string>
#include <cctype>
#include "Pila.h"

int main()
{
    
    string palabra;
    
    Pila listaPila();
    std::cout<<"Ingrese un string: ";
    std::cin>> palabra;
    std::cout<<endl;
    
    for (char& c: palabra){
        c = std::toLower(c);
    }
    
    int tam = palabra.size();
    bool esPalindromo = true;
    
    //Agregar caracteres a la pila
    for (char c: palabra){
        listaPila.insertar(c);
    }
    
    //Comparar caracteres
    for (char c: palabra){
        if (c!= listaPila.getCima()){
            esPalindromo = false;
            break;
        }
        listaPila.quitar();
    }
    
    if (esPalindromo){
    std::cout<<"La palabra es Palindroma! ";
    } else {
       std::cout<<"La palabra es NO Palindroma! "; 
    }

    return 0;
}
