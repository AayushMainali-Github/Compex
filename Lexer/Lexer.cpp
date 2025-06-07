#include "Lexer.h"
#include <string>

Lexer::Lexer(std::string input) : pos(0), readPos(0), input(input), ch(input[0]) {}

void Lexer::readChar()
{
    if (readPos >= input.size())
        ch = 0;
    else
        ch = input[readPos];
    pos = readPos;
    readPos++;
}