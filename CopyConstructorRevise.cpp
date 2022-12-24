/*1. В классе Member добавить недостающие функции чтения и установки значений
для полей ФИО;*/

#include <iostream>

using namespace std;

class Member {
    const char* firstName;
    const char* lastName;
    const char* middleName;
public:
    Member() {
        firstName = nullptr;
        lastName = nullptr;
        middleName = nullptr;
    }
    Member(const char* firstName, const char* lastName, const char* middleName) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->setMiddleName(middleName);
    }
    Member(Member& m) {
        this->firstName = m.firstName;
        this->lastName = m.lastName;
        this->setMiddleName(m.middleName);
    }

    void setFirstName(const char* firstName) {
        this->firstName = firstName;
    }

    void setLastName(const char* lastName) {
        this->lastName = lastName;
    }

    void setMiddleName(const char* middleName) {
        this->middleName = middleName;
    }

    const char* getFirstName() {
        return this->firstName;
    }

    const char* getMiddleName() {
        return this->middleName;
    }

    const char* getLastName() {
        return this->lastName;
    }

    void print() {
        cout << "Member { First Name: " << firstName << ", Last Name: " << lastName << ", Middle Name: " << middleName << " }" << endl;
    }
};

int main()
{
    Member my;
    my.setFirstName("Anna");
    my.setMiddleName("Mary");
    my.setLastName("Smith");
    cout << my.getFirstName() << ' ' << my.getMiddleName() << ' ' << my.getLastName();
}