#ifndef RSA_H
#define RSA_H
#include "..\operaciones.h"
class rsa{
public:
    rsa(int a);
    rsa(ZZ,ZZ);
    string cifrado(string);
    string descifrado(string);
    ZZ getd();
    ZZ gete();
    ZZ getn();
private:
    ZZ p;
    ZZ q;
    ZZ phi;
    ZZ n;
    ZZ e;
    ZZ d;
};
#endif // RSA_H
