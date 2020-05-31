//
//  doc4.cpp
//  project1
//
//  Created by Vivek Kumar on 9/15/19.
//  Copyright © 2019 Vivek Kumar. All rights reserved.
//
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main()
{
    double itemPrice;
    string customerName;
    string item;
    double amountTendered;
    int amountTochange;
    int numOnes;
    int numQuarters;
    int numDimes;
    int numNickels;
    int numPennies;
    cout << "Change making program by vivek" << endl;
    cout << "what is the name of the customer? ";
    cin >> customerName;
    cout << "Enter an item bought by the customer? ";
    cin >> item;
    srand((unsigned)time(0));
    itemPrice = (rand() % 2000) + 1;
    cout << "The price of the " << item << " is" << ": " << itemPrice << endl;
    cout << "Enter the amount tendered in cents: ";
    cin >> amountTendered;
    cout << customerName << " bought " << item << " for " << itemPrice / 100 << " and tendered " << amountTendered / 100 <<"." << endl;
    amountTochange = (amountTendered / 100) - (itemPrice / 100);
    amountTochange = amountTendered - itemPrice;
    cout << customerName <<"'s"<< " change is:" << endl;
    
    numOnes = amountTochange / 100;
    if ( numOnes == 1 ) {
        cout << numOnes << " one dollar bill " << endl;}
    else if ( numOnes > 1 ) {
        cout << numOnes << " one dollar bills " << endl;}
    numQuarters = (amountTochange % 100) / 25;
    if ( numQuarters == 1 ) {
        cout << numQuarters << " Quarter " << endl;}
    else if ( numQuarters > 1 ) {
        cout << numQuarters << " Quarters " << endl;}
    numDimes = ((amountTochange % 100) % 25) / 10;
    if ( numDimes == 1 ) {
        cout << numDimes << " Dime " << endl;}
    else if ( numDimes > 1 ) {
        cout << numDimes << " Dimes " << endl;}
    numNickels = (((amountTochange % 100) % 25) % 10) / 5;
    if ( numNickels == 1 ) {
        cout << numNickels << " Nickel " << endl;}
    else if ( numNickels > 1 ) {
        cout << numNickels << " Nickels " << endl;}
    numPennies = ((((amountTochange % 100) % 25) % 10) % 5) / 1;
    if ( numPennies == 1 ) {
        cout << numPennies << " Penny " << endl;}
    else if ( numPennies > 1 ) {
        cout << numPennies << " Pennies " << endl;}
    
    return 0;
}


