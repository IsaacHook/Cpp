#include <string>
#include <iostream>

class Animal
{
protected:
    std::string m_name;

    // We're making this constructor protected because
    // we don't want people creating Animal objects directly,
    // but we still want derived classes to be able to use it.
    Animal(std::string name)
        : m_name(name)
    {
    }

public:
    std::string getName() { return m_name; } // doesnt need to be made virtual
    virtual const char* speak() { return "???"; }
};

class Cat: public Animal
{
public:
    Cat(std::string name)
        : Animal(name)
    {
    }

    virtual const char* speak() { return "Meow"; }
};

class Dog: public Animal
{
public:
    Dog(std::string name)
        : Animal(name)
    {
    }

    virtual const char* speak() { return "Woof"; }
};

void report(Animal &animal)
{
    std::cout << animal.getName() << " says " << animal.speak() << '\n';
}

int main()
{
    Cat cat("Fred");
    Dog dog("Garbo");
    // Animal a("an_animale"); // doesnt work because constructor is protected
    // report(a);
    // report(cat);
    // report(dog);

Cat fred("Fred"), misty("Misty"), zeke("Zeke");
Dog garbo("Garbo"), pooky("Pooky"), truffle("Truffle");

// Set up an array of pointers to animals, and set those pointers to our Cat and Dog objects
Animal *animals[] = { &fred, &garbo, &misty, &pooky, &truffle, &zeke };
for (int iii=0; iii < 6; ++iii)
    std::cout << animals[iii]->getName() << " says " << animals[iii]->speak() << '\n';
}





















