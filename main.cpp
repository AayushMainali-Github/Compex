#include <iostream>
#include "Lexer/Lexer.h"
#include <string>
int main()
{
    std::string input = "--+  +--+-+++---*/*///--()()";
    Lexer l(input);
    Token t(l.nextToken());
    do
    {
        std::cout << t.literal << std::endl;
        t = l.nextToken();
    } while (t.type != TokenType::ENOF);
    getchar();
    return 0;
}