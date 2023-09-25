#include <iostream>
#include <string>

using namespace std;

class Person {
    protected:
        int ID;
        string Name;
        int Age;

    public:
        Person(int idGiven, string nameGiven, int ageGiven);
        ~Person();
        void setName(string nameGiven);
        void setID(int iDGiven);
        void setAge(int ageGiven);
    
        string getName();
        int getID();
        int getAge();
        
    
        void showPersonData();
};

Person::Person(int idGiven, string nameGiven, int ageGiven){
    this->setAge(ageGiven);
    this->setID(idGiven);
    this->setName(nameGiven);    
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
};

Person::~Person(){
    cout << "class was destroied" << endl;
};


// child class
class Client : public Person {
    private:
        int salary;
    public:
        void setSalary(int salaryGiven);
        int getSalary();
        Client(int idGiven, string nameGiven, int ageGiven, int salaryGiven);
        void showClientData();
  
};


void Client::showClientData(){
    cout << "Name: " << this->getName() << endl;
    cout << "ID: " << this->getID() << endl;
    cout << "Age: " << this->getAge() << endl;
    cout << "Salary: " << this->getSalary() << endl;
};

void Client::setSalary(int salaryGiven){
    this->salary = salaryGiven;
};


int Client::getSalary(){
    return this->salary;
};

Client::Client(int idGiven, string nameGiven, int ageGiven, int salaryGiven) : Person(idGiven, nameGiven, ageGiven){ 
    this->setSalary(salaryGiven);    
};

int main (){
    Client myClyent = Client(1, "Roger", 30, 1200);
    myClyent.showClientData();

    return 0;
}