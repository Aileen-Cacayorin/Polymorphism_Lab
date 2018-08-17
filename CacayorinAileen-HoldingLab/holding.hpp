//
//  holding.hpp
//  CacayorinAileen-HoldingLab
//
//  Created by Aileen Cacayorin on 8/16/18.
//  Copyright © 2018 com.aileenbull. All rights reserved.
//

#ifndef holding_hpp
#define holding_hpp

#include <stdio.h>

using namespace std;

class Holding {
    protected:
        char* title;
        int call_number;
    
    public:
        Holding(char*, int);
        Holding(const Holding&);
        virtual ~Holding();
        virtual void print() = 0;
    
};

#endif /* holding_hpp */
