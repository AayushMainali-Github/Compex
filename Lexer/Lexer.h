#include <string>
#include "Token.h"

class Lexer
{
    std::string input;
    int pos;
    int readPos;
    char ch;
    Lexer(std::string input);

public:
    void readChar();
    Token nextToken();
};