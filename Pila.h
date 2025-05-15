#ifndef PILA_H
#define PILA_H

    static int TAMPILA = 49;

class Pila {
private:
    char arr[TAMPILA];
    int cima;
public:
    Pila(): cima(-1){}
    
    bool estaVacia(){
        return  cima==-1;
    }
    bool estaLlena(){
        return cima==TAMPILA;
    }
    void insertar(char letra){
        if (estaLlena()){
            std::cout << "Pila llena" << std::endl;
            return;
        }
       arr[++cima]=letra; 
    }
    void quitar(){
        if (estaVacia()){
           std::cout << "Pila vacia" << std::endl;
            return; 
        }
        arr[cima--];
    }
    
    char getCima(){
        if (estaVacia()){
            std::cout << "Pila vacia" << std::endl;
            return;
        }
        return arr[cima];
    }
};


#endif
