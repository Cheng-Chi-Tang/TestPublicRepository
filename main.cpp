#include <iostream>
#include "DemoClass.hpp"
using namespace std;
void print_HelloWorld(){
    cout << "hello world!" << endl;
}

int main(){
    DemoClass dc(1);
    dc.demoFunction();
    print_HelloWorld();
}