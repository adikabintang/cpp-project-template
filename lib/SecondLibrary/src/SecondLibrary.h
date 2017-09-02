#pragma once

#include "FirstLibrary.h"

namespace SecondLibrary {
    class SecondLibrary {
        private:
            int member = 2;
            FirstLibrary::FirstLibrary *firstLib;
        public:
            SecondLibrary(FirstLibrary::FirstLibrary *theFirstLib);
            int getMember();
            void setMember(int member);
            FirstLibrary::FirstLibrary *getTheFirstLibrary();
    };
}
