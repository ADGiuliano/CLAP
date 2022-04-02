//
//  ClapErrors.h
//  CLAP
//
//  Created by Andrea Domenico Giuliano on 13/03/22.
//

#ifndef ClapErrors_h
#define ClapErrors_h

#include <string>

class ClapsError
{
    
protected:
    enum CLAP_ERRORS
    {
        NO_ERROR                        = 0,
        REPEATED_PARAMETER              = -1,
        MISSING_MANDATORY_PARAMETERS    = -2,
        THE_BANANA_ERROR                = -892      // WTF is happened?
    };
    
public:
    ClapsError();
    
    
    CLAP_ERRORS GetLatError() const
    {
        return _lastError;
    }
    
    void updateLastError(const CLAP_ERRORS newError)
    {
        _lastError = newError;
    }
    
    static std::string ClapErrorsDescription(const CLAP_ERRORS error);
    
private:
    CLAP_ERRORS _lastError;
    
};

#endif /* ClapErrors_h */
