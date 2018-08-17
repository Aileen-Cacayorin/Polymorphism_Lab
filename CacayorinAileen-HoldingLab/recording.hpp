//
//  recording.hpp
//  CacayorinAileen-HoldingLab
//
//  Created by Aileen Cacayorin on 8/16/18.
//  Copyright © 2018 com.aileenbull. All rights reserved.
//

#ifndef recording_hpp
#define recording_hpp

#include <stdio.h>
#include "holding.hpp"

using namespace std;

class Recording : public Holding {
    private:
        char* performer;
        char* format;
    
    public:
        Recording(const Recording&);                    // copy constructor
        Recording(char*, char, char*, int);             // constructor with title, performer, format as char args and int
        virtual ~Recording();                           // virtual destructor
        virtual void print();                           // virtual print function
};

#endif /* recording_hpp */
