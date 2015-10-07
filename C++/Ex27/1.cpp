#include<string>
#include<iostream>

class Contact {
    std::string first_name;
    std::string last_name;

public:
    void set_name(std::string, std::string);
    std::string get_name();
};

std::string Contact::get_name(){
    std::string name;
    name += first_name;
    name += " ";
    name += last_name;
    return name;
}

void Contact::set_name(std::string first, std::string last)
{
    first_name = first;
    last_name = last;
}

class ContactWithOccupation : public Contact{
    std::string occupation;

public:
    void setOccupation(std::string o) {occupation = o;}
    std::string getOccupation(){return occupation;}
};

int main()
{
    ContactWithOccupation cwo;
    cwo.set_name("Alex", "Aalbertsberg");
    cwo.setOccupation("Student");
    std::cout << cwo.get_name() << " occupation : " << cwo.getOccupation();

    return 0;
}
