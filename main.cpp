#include <iostream>
#include <vector>
#include "func.h"
#include "boost_c.h"
using namespace std;


int main()
{
//    cout << "we called function at inlude/func.app" << endl;
//    int a = 1;
//    int b = 2;
//    int size = 10;
//    int* array = new int[size];
//    for (int i= 0; i< size; i++){
//        cout<< "array["<< i<< "] ";
//        cin >> *(array+i);
//    }
    char arg[] = {'1', '2', '3'};
    print(arg, arg+ size(arg));
//    cout<<"arg: "<< arg<<endl;
//    cout<< "*arg: "<< *arg<<endl;
//    cout<<arg[0]<<endl;
//    cout<<arg[1]<<endl;
//    cout<<arg[2]<<endl;

//    cout<< hello_boost() <<endl;
//    boo().foo();
    cout<<"1 ";
    cout<<"2 ";
    cout << "\n\n";
    return 0;
}