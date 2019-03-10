#pragma once

namespace Ccg {

    class CParser
    {
    public:
        CParser();
        virtual ~CParser();

        virtual void Parsing(const char* fileName);

    private:
        const char* buffer();
    };

}
