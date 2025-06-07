#include <string>

enum class TokenType
{
    ILLEGAL,
    ENOF,

    // IDENTIFIERS + LITERALS
    IDENTIFIER,
    INT,
    FLOAT,
    STRING,

    // ASSIGNMENT OPERATORS
    EQUAL,

    // ARITHMETIC OPERATORS
    PLUS,
    MINUS,
    MULTIPLY,
    DIVIDE,

    // UNARY OPERATORS
    INCREMENT,
    DECREMENT,

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
public:
    TokenType type;
    std::string literal;
    Token(TokenType type, std::string literal);
};
