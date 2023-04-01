// Header file
#include <iostream>
// Inheritance 
// Inheritance : is a key feature of object-oriented programming that allows us to create a new class.
//         
using namespace std;

class Animal{

public:
    void eat(){
        cout << "Animal is eating.!" << endl;
    }

    void sleep(){
        cout << "Animal is sleeping.!" << endl;
    }

private:
int age;
};

class Dog : public Animal{

public:
    void bark(){
        cout << "dog is barking.!" << endl;
    }
};

class Cat : public Animal{

public:
    void meow(){
        cout << "cat is meowing.!" << endl;
    }
};


int main(){
    Dog dog;
    dog.bark();
    dog.sleep();
    dog.bark();

    Cat cat;
    cat.eat();
    cat.sleep();
    cat.meow();

    return 0; // function will end without any error
}