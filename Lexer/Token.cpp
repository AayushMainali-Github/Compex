#include "Token.h"
#include <string>

Token::Token(TokenType type, std::string literal)
    : type(type), literal(literal) {}