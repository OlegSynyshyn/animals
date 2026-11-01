#include <iostream>
#include <string>
using namespace std;

class Pet
{
private:
    string name;
    int age;

public:
    Pet(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Dog : public Pet
{
private:
    string breed;

public:
    Dog(string name, int age, string breed) : Pet(name, age)
    {
        this->breed = breed;
    }

    void showDog()
    {
        show();
        cout << "Breed: " << breed << endl;
    }
};

class Cat : public Pet
{
private:
    string color;

public:
    Cat(string name, int age, string color) : Pet(name, age)
    {
        this->color = color;
    }

    void showCat()
    {
        show();
        cout << "Color: " << color << endl;
    }
};

class Parrot : public Pet
{
private:
    int words;

public:
    Parrot(string name, int age, int words) : Pet(name, age)
    {
        this->words = words;
    }

    void showParrot()
    {
        show();
        cout << "Words: " << words << endl;
    }
};

int main()
{
    Dog dog("Buddy", 4, "Golden Retriever");
    Cat cat("Luna", 2, "Gray");
    Parrot parrot("Rio", 3, 35);

    cout << "Dog:" << endl;
    dog.showDog();

    cout << endl << "Cat:" << endl;
    cat.showCat();

    cout << endl << "Parrot:" << endl;
    parrot.showParrot();

    return 0;
}