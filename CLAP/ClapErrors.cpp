//
//  ClapErrors.cpp
//  CLAP
//
//  Created by Andrea Domenico Giuliano on 02/04/22.
//

#include "ClapErrors.hpp"

ClapsError::ClapsError()
: _lastError(CLAP_ERRORS::NO_ERROR)
{}

/*static*/ std::string ClapsError::ClapErrorsDescription(const CLAP_ERRORS error)
{
    std::string errorDesc;
    
    switch (error) {
        case CLAP_ERRORS::NO_ERROR:
            errorDesc = std::string("no error");
            
        case CLAP_ERRORS::REPEATED_PARAMETER:
            errorDesc = std::string("parameter already present");
            
        case CLAP_ERRORS::MISSING_MANDATORY_PARAMETERS:
            errorDesc = std::string("there are mandatory parameters that are not valued.");
            
        case CLAP_ERRORS::THE_BANANA_ERROR:
        default:
            errorDesc = std::string("unknow error");
    }
    
    return errorDesc;
}
