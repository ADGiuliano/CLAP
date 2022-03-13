//
//  CLAPPriv.hpp
//  CLAP
//
//  Created by Andrea Domenico Giuliano on 11/03/22.
//

/* The classes below are not exported */
#pragma GCC visibility push(hidden)

#include <string>

class CLAPPriv
{
    public:
    void HelloWorldPriv(const char *);
    
    static std::string GetParameterMandatoryString(const bool isMandatory)
    {
        return (isMandatory) ? "\t(Mandatory)" : "\t(Opzional)";
    }
};

#pragma GCC visibility pop
