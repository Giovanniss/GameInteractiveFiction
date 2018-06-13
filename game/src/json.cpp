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


//colocar as funcoes programadas
Game* readJogo(string fileName) {
    ifstream infile; // input file stream -> leitura de arquivo

    Game* g = new Game;
    g->current = -1;

    infile.open(fileName);

    if (!infile.is_open())
        cout << "Arquivo " << fileName << " nao encontrado" << endl;

    string line;

    g->scenes = getScenes(infile);

    //infile.close();
}

vector<Scene> getScenes(ifstream &infile){
    vector<Scene> scenes;
    /*while (!eof)
    {
        getline(infile, line);
        if(line[0] == "{")
        {
            Scene* novo = new Scene(infile) ;
            scenes.push_back(novo);
            (novo);
            hash[novo.id] = scenes.getIndex(novo);
        }
    }*/
    string line;
    while(getline(infile, line)) {
        cout << line << endl;
    }
}





