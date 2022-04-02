//
//  CLAP.hpp
//  CLAP (Command Line Argument Parser)
//
//  Created by Andrea Domenico Giuliano on 11/03/22.
//

#ifndef CLAP_
#define CLAP_

/* The classes below are exported */
#pragma GCC visibility push(default)

#include <string>
#include <set>
#include <map>

#include "ClapErrors.hpp"

struct ArgumentValue
{
    std::string argValue;
    std::string argDescription;
    bool isMandatory;
};

struct ArgumentName
{
    std::string name;
    std::string shortName;
};

class CLAP : public ClapsError
{
    std::map<ArgumentName, ArgumentValue> _argumentMap;
    std::set<ArgumentName> _mandatoryArgsSet;
    
    public:
    
    // Clap Class Costructor
    CLAP()
    : ClapsError()
    {}
    
    //void HelloWorld(const char * s);
    
    bool AreMandatoryArgsPresent()
    {
        return _mandatoryArgsSet.empty();
    }
    
    
    bool AddParameter(const std::string &parName,
                      const std::string &parShortName,
                      const std::string &parDescription,
                      const bool isMandatory = false,
                      const std::string &parDefValue = std::string(""));
    
    bool Validate() const;
    
    // Print the parameter's list and descriptions
    void Description() const;
    
};

#pragma GCC visibility pop
#endif
