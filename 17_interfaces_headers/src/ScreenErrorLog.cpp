#include <ScreenErrorLog.h>
#include <iostream>

    bool ScreenErrorLog::writeError(const char *errorMessage){
        std::cout << errorMessage << std::endl;
        return 1;
    };
