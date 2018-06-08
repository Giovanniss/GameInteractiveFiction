#ifndef STRUCTS_H
#define STRUCTS_H
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <structs.h>
#include <fstream>
#include <iomanip>


using namespace std;

//colocar as estruturas necessárias para o desenvolv do projeto
struct Scene {
    // ID da cena
    string id;
    // titulo da cena
    string title;
    // descricao da cena
    string description;
    // vetor de comandos da cena
    vector<Command> comands;
};
struct Game {
    // guarda as cenas
    vector<Scene> scenes;
    // indexador de cenas por ID string
    Hash hash;
    // indice da cena atual
    int current;
};

struct Hash {
    // maximo de posicoes da tabela
    static const int MAX = 100;
    // array de listas encadeadas
    Node* table[MAX];
};
struct Command {
    // texto do comando
    string text;
    // resultado ao utilizar o comando
    string result;
    // ID da cena algo ou NONE (dead end)
    string outcome;
};

#endif // STRUCTS_H
