#include<iostream>

using namespace std;


struct Obj{
    int *a;

    Obj(int* b) : a(b) {
        
    };

    void printA() {
        cout << *a << endl;
    }
};

int main(int argc, char const *argv[])
{
    int a = 10;

    Obj obj = Obj(&a);
    obj.printA();

    return 0;
}
