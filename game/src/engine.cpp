#include "engine.h"

//colocar as funcoes programadas
void readGame(string fileName) {
      ifstream infile; // input file stream -> leitura de arquivo

    infile.open(fileName);

    if (!infile.is_open())
        cout << "Arquivo " << fileName << " nao encontrado" << endl;

    string line;
    while(getline(infile, line)) {
        readString(line);
        cout << line << endl;
    }

    infile.close();
    /*ifstream infile;

    infile.open(fileName);

    if (!infile.is_open())
        cout << "Arquivo " << fileName << " nao encontrado" << endl;

    while(true) {
        string line;
        getline(infile, line);
        if (infile.eof())
            break;
        cout << line << endl;
    }

    infile.close();
    */
}



string readString(string sub){
    string check = "";
    int flag = 0;

    for (int i = 0; i < sub.size() < i++){
        if (sub[i] == ":"){
            flag = [i+1];
            break;
        }
    }
    for (flag; flag < sub.size(), flag++){
        check+=sub[flag];
    }
    return check;
}

