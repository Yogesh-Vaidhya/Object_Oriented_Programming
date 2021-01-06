#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    void functA(){
        cout << "Inherited\n";
    }
};

class B : public A{

};

int main(){
    B b;
    b.functA();
    return 0;
}