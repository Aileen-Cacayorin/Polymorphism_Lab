//
//  book.cpp
//  CacayorinAileen-HoldingLab
//
//  Created by Aileen Cacayorin on 8/16/18.
//  Copyright © 2018 com.aileenbull. All rights reserved.
//

#include "book.hpp"
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

extern ofstream csis;

Book::Book(char* b_title, char* b_auth, int b_num) : Holding(b_title, b_num) {
    author = new char[strlen(b_auth) + 1];
    
    for (int i = 0; i < strlen(b_auth); i++) {
        author[i] = b_auth[i];
    }
    author[strlen(b_auth)] = '\0';
}

Book::Book(const Book& book) : Holding(book) {
    author = new char[strlen(book.author + 1)];
    strcpy(author, book.author);
}

void Book::print() {
    cout << "BOOK: " << author << " \"" << title << "\" " << call_number << endl;
    csis << "BOOK: " << author << " \"" << title << "\" " << call_number << endl;
}

Book::~Book() {
    delete[] author;
}
