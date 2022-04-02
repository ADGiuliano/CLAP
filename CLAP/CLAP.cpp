//
//  CLAP.cpp
//  CLAP
//
//  Created by Andrea Domenico Giuliano on 11/03/22.
//

#include <iostream>
#include "CLAP.hpp"
#include "CLAPPriv.hpp"

//void CLAP::HelloWorld(const char * s)
//{
//    CLAPPriv *theObj = new CLAPPriv;
//    theObj->HelloWorldPriv(s);
//    delete theObj;
//};

//void CLAPPriv::HelloWorldPriv(const char * s)
//{
//    std::cout << s << std::endl;
//};

bool CLAP::AddParameter(const std::string &parName,
                        const std::string &parShortName,
                        const std::string &parDescription,
                        const bool isMandatory,
                        const std::string &parDefValue)
{
    ArgumentName argName = {
        .name = parName,
        .shortName = parShortName };
    
    // Duplicate parameter check
//    if (_argumentMap.find(argName) != _argumentMap.end())
//    {
//        return (_lastError = ClapErrors::CLAP_ERRORS::REPEATED_PARAMETER);
//    }     TODO: TO FIX
    
//    _argumentMap.insert(std::make_pair(argName,
//                                       ArgumentValue{.argDescription = parDescription,
//                                                .isMandatory = isMandatory,
//                                                .argValue = parDefValue})); TODO: TO FIX
    
    
    return (GetLatError() == CLAP_ERRORS::NO_ERROR);
}


void CLAP::Description() const
{
    std::cout << "Parameters:\n";
    
    for (std::map<ArgumentName, ArgumentValue>::const_iterator parMapIt = _argumentMap.begin();
         parMapIt != _argumentMap.end();
         ++parMapIt )
    {
        std::cout << "\t" << parMapIt->first.name
            << " ( " << parMapIt->first.shortName << " )"
            << " :\t" << parMapIt->second.argDescription
            << CLAPPriv::GetParameterMandatoryString(parMapIt->second.isMandatory)
            << std::endl;
    }
    
    std::cout << std::endl;
}

