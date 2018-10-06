#include "rsa.h"
#include "rsa.h"
rsa::rsa(int a){
    //p=GenPrime_ZZ(a);
    //q=GenPrime_ZZ(a);
    //n=p*q;
    n=ZZ(1003);
    //phi=((p-ZZ(1))*(q-ZZ(1)));
    //e=generare(phi,a);
    //d=inversa(modulo(phi,n),e);
    d=ZZ(619);
    e=ZZ(3);
}
rsa::rsa(ZZ e1,ZZ n1){
    e=e1;
    n=n1;
}
string rsa::cifrado(string mensaje){
    string result;
    string tmp_1;
    string tmp_2;
    string tmp_3;
    vector <string> aux_1;
    vector <ZZ> aux_2;
    ZZ auxiliar;
    tmp_2=ZZ_to_string(n);
    for(int i=0;i<mensaje.size();i++){
        tmp_1+=arreglar_1(alfabeto.find(mensaje[i]));
    }
    while(modulo(ZZ(tmp_1.size()),ZZ(tmp_2.size()-1))!=0){
        tmp_1+=ZZ_to_string(ZZ(alfabeto.find('W')));
    }
    int bloques=tmp_2.size()-1;
    for(int i=0;i<tmp_1.size();i++){
        tmp_3+=tmp_1[i];
        if(tmp_3.size()==bloques){
            aux_1.push_back(tmp_3);
            tmp_3="";
        }
    }
    for(int i=0;i<aux_1.size();i++){
        auxiliar=bynexpo(string_to_ZZ(aux_1[i]),e,n);
        result+=arreglar_2(auxiliar,n);
    }
    cout<<result;
    return result;
}
string rsa::descifrado(string a){
    string result;
    string tmp_1=ZZ_to_string(n);
    string tmp_2;
    string tmp_3;
    string aux_2;
    string aux_3;
    ZZ auxiliar;
    vector <string> aux_1;
    int bloques=tmp_1.size();
    for(int i=0;i<a.size();i++){
        tmp_2+=a[i];
        if(tmp_2.size()==bloques){
            aux_1.push_back(tmp_2);
            tmp_2="";
        }
    }
    for(int i=0;i<aux_1.size();i++){
       auxiliar=bynexpo(string_to_ZZ(aux_1[i]),d,n);
       aux_2+=arreglar_3(auxiliar,n);
    }
    for(int i=0;i<aux_2.size();i++){
        aux_3+=aux_2[i];
        string alf=int_to_string(alfabeto.size());
        if(aux_3.size()==alf.size()){
            cout<<aux_3<<" ";
            result+=alfabeto[string_to_int(aux_3)];
            aux_3="";
        }
    }
    return result;
}
ZZ rsa::getd(){
    return d;
}
ZZ rsa::gete(){
    return e;
}
ZZ rsa::getn(){
    return phi;
}
