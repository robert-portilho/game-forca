#include "le_arquivo.hpp"
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

extern std::string palavra_secreta;

void sorteia_palavra(){
    std::vector<std::string> palavras = le_arquivo();
    std::srand(std::time(NULL));
    int indice_sorteado =  std::rand() % palavras.size();
    palavra_secreta = palavras[indice_sorteado];
}
