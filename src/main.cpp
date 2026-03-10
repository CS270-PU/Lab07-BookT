/*******************************************************************************
File:        main.cpp
Author:
Class:       CS270
Assignment:  Lab 07
Purpose:     This program reads and displays Book objects.

             First, the program reads one Book from the keyboard and
             displays it back to the user.

             Next, the program opens a file containing Book data,
             reads the books from the file into an array, and then
             displays all books that were read.

             The Book class uses object composition because each Book
             object contains a title, an author stored as a Person
             object, and a publication date stored as a Date object.

             A sentinel value of DONE is used in the input file to
             indicate that there are no more books to read.


             Sample Run:

CS270 Is Fun
Doug Ryan
10/3/2026

*** Enter a Book ***
The Hobbit
J.R.R. Tolkien
9 21 1937

*** You Entered ***
The Hobbit
J.R.R. Tolkien
9/21/1937

*** Books from File ***
The Hobbit
J.R.R. Tolkien
9/21/1937

Dune
Frank Herbert
8/1/1965

Foundation
Isaac Asimov
6/1/1951

The Martian
Andy Weir
2/11/2014
*******************************************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "../include/Book.h"

void readBooks (Book cBooks[], int& rCount, std::istream& rcIn);
void writeBooks (const Book cBooks[], int count, std::ostream& rcOut);

int main () {

  const int MAX_BOOKS = 10;
  const std::string BOOK_FILE_NAME = "data/books.txt";

  // TODO #1: Compile and run your program

  // TODO #2: Uncomment the following variables

  // Book cKeyboardBook;
  // Book cBooks[MAX_BOOKS];
  // std::ifstream cBookFile;
  // int count = 0;

  // TODO #3: Implement Book.cpp constructors, getters, and write (not read)
  //          In read, you will need to use the read functions from Person
  //          and Date. This is a BIG jump. Further, when reading in a book
  //          title, use std::getline (streamVariable, stringVariable);
  //          where streamVariable is the input stream being read from and 
  //          stringVariable is the string being read into. getline reads an
  //          entire line of text including the \n character. Produce the 
  //          output shown above using your name instead of mine.



    // TODO #4: Implement read. Declare a Book variable cBook with a title of 
    //          "CS270 Is Fun", the author is your first and last name, and the 
    //          date is today's date which is 3 10 2026



    // TODO #5: Implement readBooks and writeBooks functions in main. Then
    //          uncomment the following code which is to produce the 
    //          remaining output shown above.

    // cBookFile.open (BOOK_FILE_NAME);

    // if (cBookFile.fail ()) {
    //   std::cout << "Error Opening File" << std::endl;
    //   exit (EXIT_FAILURE);
    // }
    // else {

    //   readBooks (cBooks, count, cBookFile);

    //   cBookFile.close ();

    //   std::cout << "*** Books from File ***" << std::endl;
    //   writeBooks (cBooks, count, std::cout);
    // }

  return EXIT_SUCCESS;
}