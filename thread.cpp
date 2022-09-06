//
// Created by tongming on 05/09/22.
//
#include <iostream>
#include <thread>
#include <map>
#include <string>

using namespace std;

void func(map<string, int> map){
    using namespace std::literals::chrono_literals;

    std::cout<< "This thread id="<< std::this_thread::get_id()<<std::endl;
//    int i = 0;
    while (true){
        std::cout<< "working...\n";
        for (auto & i : map){
            cout<< i.first<< " - "<< i.second<< endl;
            i.second++;
        }
        std::this_thread::sleep_for(1s);
    }
}

int  main(){
    map<string, int> map1 = {
            {"New York",10},
            {"Swansea",5},
            {"Singorep",26}
    };
    thread worker(func, map1);
//    int i = std::cin.get();
    worker.join();
    std::cout<<"finished\n";
    std::cout<< "This thread id="<< std::this_thread::get_id()<<std::endl;
}