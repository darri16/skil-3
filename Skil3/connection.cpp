#include "connection.h"

Connection::Connection(int personID, int computerID) {
    this -> personID = personID;
    this -> computerID = computerID;
}

int Connection::getPersonID() {
    return personID;
}

int Connection::getComputerID() {
    return computerID;
}

void Connection::setPerson(Person *person) {
    this -> person = person;
}

void Connection::setComputer(Computer *computer) {
    this -> computer = computer;
}

string Connection::getName() { // we need to override this method due to both the person's and the computer's name could be edited
    return (person -> getName())+" <-> "+ (computer -> getName());
}

Person* Connection::getPerson() {
    return person;
}

Computer* Connection::getComputer() {
    return computer;
}
