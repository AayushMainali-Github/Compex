#include <string>

enum TokenType
{
    ILLEGAL,
    ENOF,

    // IDENTIFIERS + LITERALS
    IDENTIFIER,
    INT,
    FLOAT,
    STRING,

    // ARITHMETIC OPERATORS
    EQUAL,
    PLUS,
    MINUS,
    MULTIPLY,
    DIVIDE,

    // COMPARISON OPERATORS
    EQUALS,
    LESSTHAN,
    MORETHAN,
    LESSTHANEQUALS,
    MORETHANEQUALS,
    NOTEQUALS,

    // LOGICAL OPERATORS
    AND,
    OR,
    NOT,

    // DELIMETERS
    COMMA,
    LPAREN,
    RPAREN,

    // KEYWORDS
    LET,
    IF,
    THEN,
    END

};

class Token
{
    int Type;
    std::string Literal;

    Token(int Type, std::string Literal);
};