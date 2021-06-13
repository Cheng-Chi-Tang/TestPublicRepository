using namespace std;
#include <iostream>
#include <string>

class DemoClass{
public:
    int x;
    double y;
    string name;
    DemoClass(int int_val, double double_val, string str){
        x = int_val;
        y = double_val;
        name = str;
    };
    void demoFunction();
};
