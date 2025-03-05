#include <iostream>

class Human
{
public:
    std::string name, dateOfBirth, placeOfBirth, motto;

    void showDetails()
    {
        std::cout << "You are " << name << ", born in " << dateOfBirth << " at " << placeOfBirth << "." << std::endl;
        std::cout << "Motto in life: " << motto << std::endl;
    }

    void showMothersDetails(Human mother)
    {
        std::cout << "Your mother's name is " << mother.name << ", born at " << mother.placeOfBirth << "." << std::endl;
    }

    void showFathersDetails(Human father)
    {
        std::cout << "Your father's name is " << father.name << ", born at " << father.placeOfBirth << "." << std::endl;
    }
};

int main()
{
    Human person1, person2, person3;

    std::cout << "-------PERSONAL DETAILS-------" << std::endl;
    std::cout << "What is your name?: ";
    std::getline(std::cin, person1.name);

    std::cout << "What is the date of your birth? (DD/MM/YYYY): ";
    std::getline(std::cin, person1.dateOfBirth);

    std::cout << "What is the place of your birth?: ";
    std::getline(std::cin, person1.placeOfBirth);

    std::cout << "What is your motto in life?: ";
    std::getline(std::cin, person1.motto);

    std::cout << "\n-------MOTHER'S DETAILS-------" << std::endl;
    std::cout << "What is your mother's name?: ";
    std::getline(std::cin, person2.name);

    std::cout << "What is the place of your mother's birth?: ";
    std::getline(std::cin, person2.placeOfBirth);

    std::cout << "\n-------FATHER'S DETAILS-------" << std::endl;
    std::cout << "What is your father's name?: ";
    std::getline(std::cin, person3.name);

    std::cout << "What is the place of your father's birth?: ";
    std::getline(std::cin, person3.placeOfBirth);

    std::cout << "-------DETAILS-------" << std::endl;
    person1.showDetails();
    std::cout << "\n";
    person2.showMothersDetails(person2);
    std::cout << "\n";
    person3.showFathersDetails(person3);
}
