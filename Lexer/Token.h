#include <string>

enum class TokenType {
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
  MODULUS,
  EXPONENTIATION,

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
  SEMICOLON,
  LPAREN,
  RPAREN,

  // KEYWORDS
  LET,
  IF,
  ELSE,
  WHILE,
  THEN,
  END,
  CALL

};

class Token {
public:
  TokenType type;
  std::string literal;
  Token(TokenType type, std::string literal);
};
