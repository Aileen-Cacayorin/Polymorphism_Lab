//
//  recording.cpp
//  CacayorinAileen-HoldingLab
//
//  Created by Aileen Cacayorin on 8/16/18.
//  Copyright © 2018 com.aileenbull. All rights reserved.
//

#include "recording.hpp"
#include <fstream>
#include <string.h>
#include <iostream>
#include <cstring>

using namespace std;
extern ofstream csis;

Recording::Recording(const Recording& record) : Holding(record) {
    performer = new char[strlen(record.performer + 1)];
    format = new char[strlen(record.format + 1)];
    
    strcpy(performer, record.performer);
    strcpy(format, record.format);
    
    return ;
};

Recording::Recording(char* r_name, char r_format, char* r_perf, int r_num) : Holding(r_name, r_num) {
    performer = new char[strlen(r_perf) + 1];
    
    for (int i = 0; i < strlen(r_perf); i++)
    {
        performer[i] = r_perf[i];
    }
    
    performer[strlen(r_perf)] = '\0';
    
    
    char option = r_format;
    char mp3[5]="MP3";
    char wav[5]= "WAV";
    char aiff[5] = "AIFF";
    switch (option) {
        default:
            cout << "Invalid format." << endl;
            break;
            
        case 'M': case 'm':
            format = new char[5];
            strcpy(format, mp3);
            break;
            
        case 'W': case 'w':
            format = new char[5];
            strcpy(format, wav);
            break;
            
        case 'A': case 'a':
            format = new char[5];
            strcpy(format, aiff);
            break;
    }
};

void Recording::print() {
    cout << "RECORDING: \"" << title << "\" " << performer << " (" << format << ") " << call_number << endl;
    csis << "RECORDING: \"" << title << "\" " << performer << " (" << format << ") " << call_number << endl;
}

Recording::~Recording() {
    delete[] performer;
    delete[] format;
}
