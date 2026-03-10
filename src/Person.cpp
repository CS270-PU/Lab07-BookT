#include "../include/Person.h"

Person::Person () {
  mcFirstName = "";
  mcLastName = "";
}

Person::Person (const std::string& rcFirstName, const std::string& rcLastName) {
  mcFirstName = rcFirstName;
  mcLastName = rcLastName;
}

std::string Person::getFirstName () const {
  return mcFirstName;
}

std::string Person::getLastName () const {
  return mcLastName;
}

void Person::read (std::istream& rcIn) {
  rcIn >> mcFirstName >> mcLastName;
}

void Person::write (std::ostream& rcOut) const {
  rcOut << mcFirstName << " " << mcLastName;
}