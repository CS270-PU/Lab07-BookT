#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <istream>
#include <ostream>

#include "Person.h"
#include "Date.h"

class Book {

public:

  Book ();
  Book (const std::string& rcTitle,
    const Person& rcAuthor,
    const Date& rcPubDate);

  std::string getTitle () const;
  Person getAuthor () const;
  Date getPubDate () const;

  bool read (std::istream& rcIn);
  void write (std::ostream& rcOut) const;

private:

  std::string mcTitle;
  Person mcAuthor;
  Date mcPubDate;

};

#endif