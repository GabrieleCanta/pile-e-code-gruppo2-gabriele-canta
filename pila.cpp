#include <iostream>
//implemento senza utilizzare listapuntatori.cpp

template <typename T>  
class Pila {
private:
    static const int MAX_SIZE = 100;   
    T arr[MAX_SIZE];  
    int topIndex;     

public:
    
    Pila() {
        topIndex = -1; 
    }

   // Metodo push: aggiunge un elemento alla cima della pila 
    void push(T elem) {
        if (topIndex < MAX_SIZE - 1) {
            topIndex++;
            arr[topIndex] = elem;
        } else {
            std::cout << "Falso" << std::endl;
        }
    }

    // Metodo pop: rimuove l'elemento in cima alla pila e lo restituisce
    T pop() {
        if (isEmpty()) {
            std::cout << "Falso" << std::endl;
            return T();  
        }
        T topElement = arr[topIndex];
        topIndex--;
        return topElement;
    }

    // Metodo top: restituisce l'elemento in cima alla pila senza rimuoverlo
    T top() const {
        if (isEmpty()) {
            std::cout << "Falso" << std::endl;
            return T();  
        }
        return arr[topIndex];
    }

    // Metodo isEmpty: verifica se la pila è vuota
    bool isEmpty() const {
        return topIndex == -1;  
    }

    // Metodo size: restituisce il numero di elementi nella pila
    int size() const {
        return topIndex + 1;  
    }
};
