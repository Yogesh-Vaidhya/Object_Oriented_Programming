#include <bits/stdc++.h>
using namespace std;

// Function Overloading
class Fun{
    public:
    void funct(){
        cout << "No Arguments\n";
    }
    void funct(int x){
        cout << "Interger Argument\n";
    }
    void funct(double x){
        cout << "Double Argument\n";
    }
};

// Operator Overloading
// Taking Example of Adding Complex numbers
class Complex{
    private:
    int real;
    int img;

    public:
    // Parameterised Constructor
    Complex(int r,int i){
        real = r;
        img = i;
    }

    // Default Constructor
    Complex(){

    }

    void print(){
        cout << real << " +i" << img << "\n";
    }

    Complex operator + (Complex &a){
        Complex ans;
        ans.real = real + a.real;
        ans.img = img + a.img;
        return ans;
    }
    
};

// Virtual Functions
class base{
    public:
    virtual void print(){
        cout << "Print in base class\n";
    }
    void display(){
        cout << "Display in base class\n";
    }
};

class derived : public base{
    public:
    void print(){
        cout << "Print in derived class\n";
    }
    void display(){
        cout << "Display in derived class\n";
    }
};

int main(){
    // Function Overloading
    Fun obj;
    obj.funct();
    obj.funct(5);
    obj.funct(4.6);

    // Operator Overloading
    Complex a(1,3),b(4,7);
    Complex ans = a+b;
    ans.print();
    
    // Virtual Functions
    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr->print();
    baseptr->display();


    return 0;
}