#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

#ifndef RESULT_H
#define RESULT_H

void writefile(vector<string> kartu, vector<string> *hasil, double runtime);
    /*
    I.S. Menerima sebuah vector string kartu, sebuah vector string hasil, dan sebuah double waktu eksekusi program
    F.S. Menulis hasil ke file
    */
void printruntime(double runtime);

void splashscreen();

#endif