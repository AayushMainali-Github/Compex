#include <string>
#include "Token.h"

class Lexer
{
    std::string input;
    int pos;
    int readPos;
    char ch;

public:
    Lexer(std::string input);
    void readChar();
    Token nextToken();
};