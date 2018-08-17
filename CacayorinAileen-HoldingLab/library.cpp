//
//  library.cpp
//  CacayorinAileen-HoldingLab
//
//  Created by Aileen Cacayorin on 8/17/18.
//  Copyright © 2018 com.aileenbull. All rights reserved.
//

#include "library.hpp"
#include <fstream>
#include <iostream>
#include <istream>

#include "holding.hpp"
#include "library.hpp"

const int SIZE = 256;

using namespace std;
ofstream csis;

int main() {
    
    Holding *libraryHoldings[5]; //creates arry of 5 pointers to holding objects
    
    csis.open("csis.txt");
    
    cout << "Enter holdings to be stored in a list: " << endl;
    csis << "Enter holdings to be stored in a list: " << endl;

    
    for (int i = 0; i < 5; i++)
    {
        libraryHoldings[i] = enterLibHolding(); 
    }
    
    cout << endl << "Here are the holdings: " << endl;
    
    for (int i = 0; i < 5; i++)
    {
        libraryHoldings [i]->print();
    }
    
    csis.close();
    
    return 0;
};

Holding *enterLibHolding() {
    Holding *holdingPtr = nullptr;
    
    char holding_title[SIZE];
    int holding_num;
    
    char option;
    
tryagain: //jump to label
    cout << "Enter B for book, R for recording: ";
    cin >> option;
    cin.ignore();
    csis << "Enter B for book, R for recording: " << option << endl;
    
    //***    case switch for option     ***//
    switch (option)
    {
        default:
            cout << "Invalid option. Try again." << endl;
            goto tryagain;
            break;
            
        case 'B': case 'b':
            char book_author[SIZE];
            
            cout << "Enter book title: ";
            cin.getline(holding_title, SIZE);
            csis << "Enter book title: " << holding_title << endl;
            
            cout << "Enter book author: ";
            cin.getline(book_author, SIZE);
            csis << "Enter book author: " << book_author << endl;
            
            cout << "Enter call number: ";
            cin >> holding_num;
            csis << "Enter call number: " << holding_num << endl;
            
            holdingPtr = new Book(holding_title, book_author, holding_num);
            
            return holdingPtr;
            break;
            
        case 'R': case 'r':
            char rec_performer[SIZE];
            char rec_format;
            
            cout << "Enter recording title: ";
            cin.getline(holding_title, SIZE);
            csis << "Enter recording title: " << holding_title << endl;
            
            cout << "Enter performer: ";
            cin.getline(rec_performer, SIZE);
            csis << "Enter performer: " << rec_performer << endl;
            
            cout << "Enter format: (M)P3, (W)AV, (A)IFF: ";
            cin >> rec_format; cin.ignore();
            csis << "Enter format: (M)P3, (W)AV, (A)IFF: " << rec_format << endl;
            
            cout << "Enter call number: ";
            cin >> holding_num;
            csis << "Enter call number: " << holding_num << endl;
            
            holdingPtr = new Recording(holding_title, rec_format, rec_performer, holding_num); //pointer holds recording
            
            return holdingPtr;
            break;
    }
    
    return holdingPtr; 
};
