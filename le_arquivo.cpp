#include <fstream>
#include <iostream>
#include "le_arquivo.hpp"

std::vector<std::string> le_arquivo(){
    std::vector<std::string>palavras_do_arquivo;
    std::ifstream arquivo; 
    arquivo.open("palavras.txt");
    int quantidade_palavras;
    arquivo >> quantidade_palavras;
    if(arquivo.is_open()){
        for(int i=0;i<quantidade_palavras;i++) {
                std::string palavra_lida;
                arquivo >> palavra_lida;
                palavras_do_arquivo.push_back(palavra_lida);
        }
        arquivo.close();

        return palavras_do_arquivo;
    } else {
        std::cout << "Não foi possível acessar o banco de palavras." << std::endl;
        exit(0);
    }
}
