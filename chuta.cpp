#include <iostream>
#include "letra_existe.hpp"
#include <map>
#include <vector>

extern std::map<char, bool> chutou;
extern std::vector<char> chutes_errados;

void chuta() {
        std::cout << "Seu chute: ";
        char chute;
        std::cin >> chute;
        chute = toupper(chute);

        chutou[chute] = true;

        if(letra_existe(chute)) {
            std::cout << "Você acertou. Seu chute está na palavra." << std::endl;
        } 
        else {
            chutes_errados.push_back(chute);
            std::cout << "Você errou. Seu chute não está na palavra." << std::endl;
        }
        std::cout << std::endl;
}
