#ifndef STRUCTS_H
#define STRUCTS_H
#include "json.h"
#include "game.h"
#include "structs.h"
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <fstream>
#include <iomanip>


using namespace std;

struct Node {
    string key; // id da cena
    int index; // posição da cena dentro do vector
    Node* next;
};

// hash para indexar as cenas que estão no vector
// o vector<Scene> está dentro de Game
struct Hash {
    // maximo de posicoes da tabela
    static const int MAX = 7;
    // array de listas encadeadas
    Node* table[MAX];
};

struct Command {
    string text; // texto do comando
    string result; // resultado ao utilizar o comando
    string outcome; // ID da cena algo ou NONE (dead end)
};

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

#endif // STRUCTS_H
