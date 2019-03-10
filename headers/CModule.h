#pragma once

#include "CParser.h"

namespace Ccg {

    class CModule
    {
    public:
        CModule();
        virtual ~CModule();

        const char* getName() const { return name; }
        float getVersuon() const { return version; }

    private:
        const char* name;
        float version;
        CParser* parser;
    };

}
