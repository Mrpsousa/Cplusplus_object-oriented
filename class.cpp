#include <iostream>
#include <string>

using namespace std;

class Person {
    private:
        int ID;
        string Name;
        int Age;

    public:
        void setName(string nameGiven);
        void setID(int iDGiven);
        void setAge(int ageGiven);
    
        string getName();
        int getID();
        int getAge();
        

        void showPersonData();
};

    void Person::setName(string nameGiven){
        this->Name = nameGiven;
    };
    void Person::setID(int iDGiven){
        this->ID = iDGiven;
    };
    void Person::setAge(int ageGiven){
        this->Age = ageGiven;
    };


    string Person::getName(){
        return this->Name;
    };
    int Person::getID(){
        return this->ID;
    };
    int Person::getAge(){
        return this->Age;
    };

    void Person::showPersonData(){
        cout << "Name: " << this->getName() << endl;
        cout << "ID: " << this->getID() << endl;
        cout << "Age: " << this->getAge() << endl;
    }

    Person::~Person(){
        cout << "class was destroied" << endl;
    };

int main (){
    Person myFriend;
    myFriend.setName("Roger");
    myFriend.setID(12);
    myFriend.setAge(30);


    myFriend.showPersonData();

    return 0;
}