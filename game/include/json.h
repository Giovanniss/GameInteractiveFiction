#ifndef JSON_H
#define JSON_H
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

Game* readJogo(string fileName);
vector<Scene> getScenes(ifstream &infile);

#endif // JSON_H
