//
// Created by milan on 4/2/2019.
//

#include <iostream>
#include "person.h"

Person::Person() {}

Person::Person(const std::string &firstName, const std::string &lastName) : firstName(firstName), lastName(lastName) {}

Person::Person(const std::string &firstName, const std::string &lastName, int age) : firstName(firstName), age(age),
                                                                                     lastName(lastName) {}

Person::~Person() {
    std::cout << "Person destructor has been called!" << std::endl;
}

void Person::SayHello() {

}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

const std::string &Person::getFirstName() const {
    return firstName;
}

void Person::setFirstName(const std::string &firstName) {
    Person::firstName = firstName;
}

const std::string &Person::getLastName() const {
    return lastName;
}

void Person::setLastName(const std::string &lastName) {
    Person::lastName = lastName;
}