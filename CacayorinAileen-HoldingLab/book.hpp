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
    Book(const Book&);
    Book(char*, char*, int);
    virtual ~Book();
    virtual void print();
};

#endif /* book_hpp */
