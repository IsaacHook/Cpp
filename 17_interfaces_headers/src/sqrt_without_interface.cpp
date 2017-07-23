#include <cmath> // for sqrt()
#include <FileErrorLog.h>
#include <ScreenErrorLog.h>
#include <iostream>

using namespace std;

double mySqrt(double value, FileErrorLog &log)
{
    if (value < 0.0)
    {
        log.writeError("Tried to take square root of value less than 0");
        return 0.0;
    }
    else
        return sqrt(value);
}

int main(){
    FileErrorLog log1;
    mySqrt(-1.1, log1);

    // causes a compile error cause of class type mismatch
    // ScreenErrorLog log2;
    // mySqrt(-1.1, log2);
}