#ifndef JSON_H
#define JSON_H
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include "structs.h"
#include <fstream>
#include <iomanip>

void readJogo(string fileName);
vector<Scene> getScenes(ifstream &infile);

#endif // JSON_H
