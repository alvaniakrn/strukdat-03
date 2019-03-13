/*
 alvina vania kirana
 140810180010
 menghitung keliling luas segi empat
 2019
 */

#include <iostream>
#include <math.h>
using namespace std;

typedef struct{
    float panjang;
    float lebar;
}segiempat;

void input (segiempat *s){
    cout << "Masukkan Panjang   :";cin >> s->panjang;
    cout << "Masukkan Lebar     :";cin >> s->lebar;
}

 float keliling (segiempat s){
     return (2*s.panjang)+(2*s.lebar);
}

float luas (segiempat s){
     return s.panjang*s.lebar;
}

float diagonal (segiempat s){
    return sqrt((s.panjang*s.panjang)+(s.lebar*s.lebar));
}

void print (segiempat s){
    cout << keliling (s)<<endl;
    cout << luas (s)<<endl;
    cout << diagonal(s)<<endl;
}


int main() {
    segiempat* sg;
    sg= new segiempat;
    input(sg);
    print (*sg);
    return 0;
}
