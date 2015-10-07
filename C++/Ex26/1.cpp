#include<string>
#include<iostream>
#include<cstdlib>

class Person
{
    std::string firstName, secondName;

public:
    Person(std::string fName, std::string sName){setNames(fName,sName);}
    void setNames(std::string, std::string);
    std::string getFullName(){return (firstName + " " + secondName);}
};

class PersonWithOccupation : public Person
{
    std::string occupation;

public:
    PersonWithOccupation(std::string fName, std::string sName) : Person(fName, sName)
    {
        occupation = "No occupation";
    }
    std::string getOccupation(){return occupation;}
    void setOccupation(std::string o) { occupation = o;}
};

void Person::setNames(std::string fName, std::string sName)
{
    if(fName != "" && sName != "")
    {
        firstName = fName;
        secondName = sName;
    }
    else
    {
            std::cerr << "Error in Person::setNames: " << "Names have to be set.";

            std::exit(-1);
    }
}

int main()
{
    Person p1("Alex", "Aalbertsberg");

    std::cout << p1.getFullName() << std::endl;

    PersonWithOccupation p2("Fred", "Aalbertsberg");
    std::cout << p2.getFullName() << " occupation : " << p2.getOccupation() << std::endl;
    p2.setOccupation("Retired");
    std::cout << p2.getFullName() << " occupation : " << p2.getOccupation() << std::endl;
}
