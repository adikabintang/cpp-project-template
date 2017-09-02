#include <iostream>
#include "FirstLibrary.h"
#include "SecondLibrary.h"
#include "ThirdLibrary.h"

#ifdef DEBUGGING_MY_APPLICATION
    #define PRINTING_DEBUG(...) std::cout << __VA_ARGS__ << std::endl
#else
    #define PRINTING_DEBUG(...)
#endif

int main() {
    FirstLibrary::FirstLibrary first;
    SecondLibrary::SecondLibrary second(&first);
    ThirdLibrary::ThirdLibrary third;

    std::cout << "A project for testing build tools\n";
    std::cout << "first -> " << first.getMember() << "\n";
    std::cout << "second -> " << second.getMember() << "\n";
    std::cout << "third -> " << third.getMember() << "\n";

    std::cout << "first inside second -> " << second.getTheFirstLibrary()->getMember() << "\n";
    
    PRINTING_DEBUG("DEBUGGING MODE");
    return 0;
}