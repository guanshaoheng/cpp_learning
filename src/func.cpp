#include <iostream>
#include "func.h"

using namespace std;

void boo::foo() {
    cout << "boo\n";

}


void print(char *p, char *q) {
    while (p < q) {
//        cout<< "*p: "<<*p<< " arg[]: "<< p[0]<<endl;
        cout << *p << " ";
        p++;
    }
    cout<<" \n";
}