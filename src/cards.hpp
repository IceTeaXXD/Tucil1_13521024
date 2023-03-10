#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include "operations.hpp"

using namespace std;

#ifndef CARDS_H
#define CARDS_H

double strtocard(string c);
    /*
    I.S. Menerima sebuah string
    F.S. Mengembalikan nilai kartu tersebut dalam bentuk integer
    */
   
void inputkartu (vector<string> *kartu_input);
    /*
    I.S. Menerima sebuah vector string
    F.S. Mengisi vector string dengan 4 kartu yang diinput
    */

bool isduplicate(vector<string> *hasil, string str);
    /*
    I.S. Menerima sebuah vector string dan sebuah string
    F.S. Mengembalikan true jika string tersebut sudah ada di dalam vector string
    */

void validator24 (double nums[4], vector<string> *hasil);
    /*
    I.S. Menerima sebuah array of double dan sebuah vector string
    F.S. Mengisi vector string dengan semua kemungkinan operasi yang menghasilkan 24
    */
   
void perm(double *nums,vector<string> *hasil);
    /*
    I.S. Menerima sebuah array of double, dan sebuah vector string
    F.S. Mengisi vector string dengan semua kemungkinan operasi yang menghasilkan 24 dari angka-angka yang terdapat pada array of double
    */

#endif