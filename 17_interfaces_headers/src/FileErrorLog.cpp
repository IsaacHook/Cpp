#include <FileErrorLog.h>
#include <iostream>

    bool FileErrorLog::writeError(const char *errorMessage){
        std::cout << errorMessage << std::endl;
        return 1;
    };
