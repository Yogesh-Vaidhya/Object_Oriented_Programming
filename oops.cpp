#include <bits/stdc++.h>
using namespace std;

class student{
    string name;
    
    public:
    int age;
    bool gender;

    // Default constructor
    student(){
        cout << "Default constructor" << "\n";
    }

    // Parameterised Constructor
    student(string s, int a, int g){
        cout << "Parameterised Constructor\n";
        name = s;
        age = a;
        gender = g;
    }

    // Copy constructor
    student(student &a){
        cout << "Copy Constructor\n";
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    // Destructor
    ~student(){
        cout << "Destructor Called\n";
    }

    void setName(string s){
        name = s;
    }

    void getName(){
        cout << name << "\n";     
    }

    void printinfo(){
        cout << "Enter name:\n";
        cout << name << "\n";
        cout << "Enter age:\n";
        cout << age << "\n";
        cout << "Enter gender\n";
        cout << gender << "\n";
    }

    bool operator == (student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    
    // Single object
    /* To Run it take name in public domain in student class
    student a;
    a.name = "Yogesh";
    a.age = 20;
    a.gender = 1; 
    return 0;
    */

    // Array of objects
    
    student arr[3];
    for(int i=0;i<3;i++){
        string s;
        cout << "Enter name:\n";
        cin >> s;
        arr[i].setName(s);
        cout << "Enter age:\n";
        cin >> arr[i].age;
        cout << "Enter gender\n";
        cin >> arr[i].gender;
    }

    for(int i=0;i<3;i++){
        arr[i].printinfo();
    } 
    

   // Constructor -> Called by default when object is built
   
   student a("Urvi",21,0);
   // a.printinfo();
   
   student t("Rahul",21,0);
   student c = a;  // Copy constructor

   // Shallow copy : Default Copy Constructor Only pointers are copied.
   // Deep Copy : Own Copy Constructor Pointers as well as value of adddress pointing to it is copied.

   // Operator Overloading
   if(c==t){
       cout << "Same\n";
   }

   else{
       cout << "Not Same\n";
   }
   
   return 0;
}