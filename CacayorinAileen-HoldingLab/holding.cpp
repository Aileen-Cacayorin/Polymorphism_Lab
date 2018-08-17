//
//  holding.cpp
//  CacayorinAileen-HoldingLab
//
//  Created by Aileen Cacayorin on 8/16/18.
//  Copyright © 2018 com.aileenbull. All rights reserved.
//

#include "holding.hpp"
#include <string.h>

using namespace std;

Holding::Holding(char* name, int c_num){
    call_number = c_num;
    title = new char[strlen(name) + 1];
    
    for (int i = 0; i < strlen(name); i++) {
        title[i] = name[i];
    }
    
    title[strlen(name)] = '\0';
}

Holding::Holding(const Holding& hold) {
    call_number = hold.call_number;

    title = new char[strlen(hold.title + 1)];
    strcpy(title, hold.title);
}

Holding::~Holding() {
    delete[] title;
    call_number = 0;
}
