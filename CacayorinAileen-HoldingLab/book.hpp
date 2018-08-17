//
//  book.hpp
//  CacayorinAileen-HoldingLab
//
//  Created by Aileen Cacayorin on 8/16/18.
//  Copyright © 2018 com.aileenbull. All rights reserved.
//

#ifndef book_hpp
#define book_hpp

#include <stdio.h>
#include "holding.hpp"

class Book : public Holding  {
private:
    char* author;
    
public:
    Book(const Book&);                      // copy constructor
    Book(char*, char*, int);                // constructor with title, author as char args and call number as int arg
    virtual ~Book();                        // virtual destructor
    virtual void print();                   // virtual print function
};

#endif /* book_hpp */
