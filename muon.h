#ifndef muon_h
#define muon_h

#include <vector>
#include <iostream>
#include <functional>

#include "MuonSelections.h"
#include "VVVSelections.h"
#include "Base.h"

namespace CoreUtil
{
    class muon
    {

        public:

            std::vector<int> index;
            std::vector<int> tagindex;

            muon() {}
            ~muon() {}

            void setup();
            void process(std::function<bool(int)> pass, std::function<bool(int, int)> tagpass=nullptr);

    };
}

#endif
