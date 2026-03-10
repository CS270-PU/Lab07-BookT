#ifndef DATE_H
#define DATE_H

#include <istream>
#include <ostream>

class Date {

public:

  Date ();
  Date (int day, int month, int year);

  int getDay () const;
  int getMonth () const;
  int getYear () const;

  void read (std::istream& rcIn);
  void write (std::ostream& rcOut) const;

private:

  int mDay;
  int mMonth;
  int mYear;

};

#endif