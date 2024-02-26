#include <iostream>
#include <string>
using namespace std;

class Animal 
{
protected:
    string name;
    int age;

public:
    Animal(string n, int a) : name(n), age(a) {}

    virtual void makeSound() 
    {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal 
{
public:
    Dog(string n, int a) : Animal(n, a) {}

    void makeSound() override 
    {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal
{
public:
    Cat(string n, int a) : Animal(n, a) {}

    void makeSound() override 
    {
        cout << "Cat meows" << endl;
    }
};

int main() 
{
    Animal animal1("Bobr", 3);
    animal1.makeSound(); // Вывод: Animal makes a sound

    Dog dog1("Star", 5);
    dog1.makeSound(); // Вывод: Dog barks

    Cat Cat1("Star", 5);
    Cat1.makeSound(); // Вывод: Dog barks

    return 0;
}