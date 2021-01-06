#include <bits/stdc++.h>
using namespace std;
// Types of Inheritance
/*
1. Single Inheritance
2. Multiple Inheritance
3. Multi-level inheritance
4. Hybrid Inheritance
5. Hierarchical Inheritance
*/
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