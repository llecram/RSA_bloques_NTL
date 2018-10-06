#ifndef OPERACIONES_H_INCLUDED
#define OPERACIONES_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <NTL/ZZ.h>
using namespace NTL;
using namespace std;
static string alfabeto="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
ZZ gcd(ZZ,ZZ);
ZZ gcdext(ZZ,ZZ);
ZZ modulo(ZZ,ZZ);
ZZ bynexpo(ZZ,ZZ,ZZ);
ZZ inversa(ZZ,ZZ);
ZZ generare(ZZ,int);
string ZZ_to_string(ZZ);
ZZ string_to_ZZ(string);
string int_to_string(int);
int string_to_int(string);
string arreglar_1(int);
string arreglar_2(ZZ,ZZ);
string arreglar_3(ZZ,ZZ);
string rev(string);
string binario(ZZ);
#endif // OPERACIONES_H_INCLUDED
