#include "../include/Date.h"

Date::Date() {
  mDay = 1;
  mMonth = 1;
  mYear = 1900;
}

Date::Date(int day, int month, int year) {
  mDay = day;
  mMonth = month;
  mYear = year;
}

int Date::getDay() const {
  return mDay;
}

int Date::getMonth() const {
  return mMonth;
}

int Date::getYear() const {
  return mYear;
}

void Date::read(std::istream& rcIn) {
  rcIn >> mMonth >> mDay >> mYear;
}

void Date::write(std::ostream& rcOut) const {
  rcOut << mMonth << "/" << mDay << "/" << mYear;
}