/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: cplummer
 *
 * Created on November 7, 2017, 12:56 PM
 */

#include <iostream>
#include <regex>
#include <string>

using namespace std;

class IPAddress
{
public:
    IPAddress(string sourceIPAddress, string destinationIPAddress)
    {
        regex pattern("((1[1-9]{2})|(2[1-4][1-9])|(25[1-5])).((1[1-9]{2})|(2[1-4][0-9])|(25[1-5])).((1[1-9]{2})|(2[1-4][1-9])|(25[1-5])).((25[1-5])|(2[1-4][1-9])|[1-9]{2}|[1-9])");
        if(regex_match(sourceIPAddress, pattern) && regex_match(destinationIPAddress, pattern))
        {
            cout << "This is a valid IP Address" << endl;
        }
        else
        {
            cout << "Invalid IP Header - Source IP Address is invalid." << endl;
        }
    }
};
/*
 * Main or driver method. Calls other methods to create the program.
 */
int main(int argc, char** argv) {
    string a = "212.112.212.11";
    string b = "212.112.212.12";
    IPAddress address(a, b);
    a = "212.112.212.333";
    b = "212.112.212.33";
    IPAddress address2(a, b);
    return 0;
}

