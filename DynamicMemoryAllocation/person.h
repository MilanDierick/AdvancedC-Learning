//
// Created by milan on 4/2/2019.
//

#ifndef POINTERS_PERSON_H
#define POINTERS_PERSON_H


#include <string>

class Person {
public:
    Person();
    Person(const std::string &firstName, const std::string &lastName);
    Person(const std::string &firstName, const std::string &lastName, int age);

    ~Person();

    void SayHello();

    int getAge() const;
    void setAge(int age);
    const std::string &getFirstName() const;
    void setFirstName(const std::string &firstName);
    const std::string &getLastName() const;
    void setLastName(const std::string &lastName);

private:
    std::string firstName;
    std::string lastName;
    int age;
};


#endif //POINTERS_PERSON_H
