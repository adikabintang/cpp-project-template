#include "SecondLibrary.h"

namespace SecondLibrary {
    SecondLibrary::SecondLibrary(FirstLibrary::FirstLibrary *theFirstLib) :
       firstLib(theFirstLib) {

    }

    int SecondLibrary::getMember() {
        return member;
    }

    void SecondLibrary::setMember(int member) {
        this->member = member;
    }

    FirstLibrary::FirstLibrary *SecondLibrary::getTheFirstLibrary() {
        return this->firstLib;
    }
}