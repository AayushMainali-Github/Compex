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
    TokenType Type;
    std::string Literal;

    Token(TokenType Type, std::string Literal);
};