#include <iostream>
#include <cstring>

using namespace std;

/*
Structure is another user defined data type which allows you to combine data items of different kinds.
Structures are used to represent a record, suppose you want to keep track of your books in a library. 
You might want to track the following attributes about each book −
    Title
    Author
    Subject
    Book ID
*/

void printBook(struct Books book);
void printBook2(struct Books *book);

struct Books 
{
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
};


void printBook(struct Books book) 
{
    /*
    Structures as Function Arguments
    */
    cout << "Book title : " << book.title << endl;
    cout << "Book author : " << book.author << endl;
    cout << "Book subject : " << book.subject << endl;
    cout << "Book id : " << book.book_id << endl;
}

void printBook2(struct Books *book)
{
    /*
    Pointers to Structures:
    Pointers to structures can be defined in very similar way as you define pointer to any other variable:
            struct Books *struct_pointer;

    Store the address of a structure variable in the above defined pointer variable. 
    To find the address of a structure variable, place the '&' operator before the structure's name:
            struct_pointer = &Book1;

    To access the members of a structure using a pointer to that structure, you must use the '->' operator:
            struct_pointer->title;

    */
    cout << "Book title : " << book->title << endl;
    cout << "Book author : " << book->author << endl;
    cout << "Book subject : " << book->subject << endl;
    cout << "Book id : " << book->book_id << endl;
}


int main() 
{
    struct Books Book1;        // Declare Book1 of type Book
    struct Books Book2;        // Declare Book2 of type Book

    // book 1 specification
    strcpy_s(Book1.title, "Learn C++ Programming");
    strcpy_s(Book1.author, "Chand Miyan");
    strcpy_s(Book1.subject, "C++ Programming");
    Book1.book_id = 6495407;

    // book 2 specification
    strcpy_s(Book2.title, "Telecom Billing");
    strcpy_s(Book2.author, "Yakit Singha");
    strcpy_s(Book2.subject, "Telecom");
    Book2.book_id = 6495700;

    // Print Book1 info
    cout << "Book 1 title : " << Book1.title << endl;
    cout << "Book 1 author : " << Book1.author << endl;
    cout << "Book 1 subject : " << Book1.subject << endl;
    cout << "Book 1 id : " << Book1.book_id << endl;

    
    printBook(Book2);
    printBook2(&Book2);

    // Print Book2 info
    //cout << "Book 2 title : " << Book2.title << endl;
    //cout << "Book 2 author : " << Book2.author << endl;
    //cout << "Book 2 subject : " << Book2.subject << endl;
    //cout << "Book 2 id : " << Book2.book_id << endl;

    return 0;
}