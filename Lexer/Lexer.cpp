#include "Lexer.h"
#include <string>
#include <iostream>

Lexer::Lexer(std::string input) : currentPos(0), readPos(1), input(input), ch(input[0]) {}

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
    readPos = currentPos + 1;
}

Token Lexer::nextToken()
{

    Token tok(TokenType::ILLEGAL, "II");
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
        break;
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
        break;
    case '*':
        tok.type = TokenType::MULTIPLY;
        tok.literal = ch;
        break;
    case '/':
        tok.type = TokenType::DIVIDE;
        tok.literal = ch;
        break;
    case 0:
        tok.type = TokenType::ENOF;
        tok.literal = "EE";
        break;
    }
    readChar();
    return tok;
}