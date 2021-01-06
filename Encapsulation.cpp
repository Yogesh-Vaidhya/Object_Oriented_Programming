// Encapsulation

// Hiding "sensitive" data from the user.

// How to achieve Encapsulation in C++
// Can be achieved by using Class;
// We have Access Modifiers : Public, Private, Protected

#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;
    void functA(){
        cout << "A\n";
    }
    private:
    int b;
    void fuctB(){
        cout << "B\n";
    }

    protected:
    int c;
    void functC(){
        cout << "C\n";
    }

};

int main(){
    A obj;
    obj.a = 12;
    obj.functA();
    return 0;
}