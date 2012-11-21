#ifndef FIH
#define FIH

#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <string>

using namespace std;

string getCharArrayHex(unsigned char*, string, int size);
void printCharArrayInt(unsigned char*, string, int size);
void printCharArrayHex(unsigned char*, string, int size);
string getCharArrayAscii(unsigned char*, string);
int getInt(unsigned char*);
long getLong(unsigned char*);
#endif