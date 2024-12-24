#include <vector>
#include <iostream>

extern std::vector<char> chutes_errados;

void imprime_erros() {
    if(chutes_errados.size() > 0) {
        std::cout << "Chutes errados: ";
        for(char letra : chutes_errados) {
            std::cout << letra << " ";
        }
        std::cout << std::endl;
    }
}