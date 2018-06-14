#ifndef JSON_H
#define JSON_H
#include "structs.h"
#include <fstream>
#include <iostream>


Game* readJogo(string fileName);
vector<Scene> getScenes(ifstream &infile);

#endif // JSON_H
