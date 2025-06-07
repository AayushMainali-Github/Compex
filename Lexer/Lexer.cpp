#include "Lexer.h"
#include "Token.h"
#include <string>

Lexer::Lexer(std::string input) : currentPos(0), readPos(0), input(input), ch(input[0]) {}

void Lexer::readChar()
{
    if (readPos >= input.size())
        ch = 0;
    else
        ch = input[readPos];
    currentPos = readPos;
    readPos++;
}

void Lexer::changePos(int pos)
{
    currentPos = pos;
    ch = input[currentPos];
    readPos = pos + 1;
}

Token Lexer::nextToken()
{
    Token tok(TokenType::ILLEGAL, "");
    switch (ch)
    {
    // ARITHMETIC AND UNARY OPERATORS
    case '+':
        readChar();
        if (ch == '+')
        {
            tok.type = TokenType::INCREMENT;
            tok.literal = "++";
        }
        else
        {
            tok.type = TokenType::PLUS;
            tok.literal = "+";
            changePos(currentPos - 1);
        }
    case '-':
        readChar();
        if (ch == '-')
        {
            tok.type = TokenType::DECREMENT;
            tok.literal = "--";
        }
        else
        {
            tok.type = TokenType::MINUS;
            tok.literal = "-";
            changePos(currentPos - 1);
        }
    case '*':
        tok.type = TokenType::MULTIPLY;
        tok.literal = ch;
    case '/':
        tok.type = TokenType::DIVIDE;
        tok.literal = ch;
    case 0:
        tok.type = TokenType::ENOF;
        tok.literal = "";
    }
    readChar();
    return tok;
}