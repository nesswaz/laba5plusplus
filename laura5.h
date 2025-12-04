#ifndef H_H
#define H_H

#include <vector>
#include <string>
using namespace std;

void fillFromKeyboard(string& str);
void printString(const string& str);
void clearString(string& str);
bool fillFromFile(string& str, const string& filename);
string vvodfile(string filename);
#endif