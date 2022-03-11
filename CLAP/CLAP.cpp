//
//  CLAP.cpp
//  CLAP
//
//  Created by Andrea Domenico Giuliano on 11/03/22.
//

#include <iostream>
#include "CLAP.hpp"
#include "CLAPPriv.hpp"

void CLAP::HelloWorld(const char * s)
{
    CLAPPriv *theObj = new CLAPPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void CLAPPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

