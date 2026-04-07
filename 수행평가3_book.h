#ifndef BOOK_H  
#define BOOK_H

typedef struct {
    int id;
    char title[50];
    int isAvailable;
} Book;

// 함수 프로토타입 선언
void printBookInfo(Book b);
void rentBook(Book *b);

#endif
