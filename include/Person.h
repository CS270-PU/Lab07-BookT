#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <istream>
#include <ostream>

class Person {

public:

  Person ();
  Person (const std::string& rcFirstName, const std::string& rcLastName);

  std::string getFirstName () const;
  std::string getLastName () const;

  void read (std::istream& rcIn);
  void write (std::ostream& rcOut) const;

private:

  std::string mcFirstName;
  std::string mcLastName;

};

#endif