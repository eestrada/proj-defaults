#include <iostream>
#include "header.hpp"

// Simple program that prints all it's arguments on newlines.
int main(int argc, char **argv)
{
    for(int i = 1; i < argc; ++i)
    {
        std::cout << argv[i] << "\n";
    }

    std::cout << STR_LIT << std::endl;
}

