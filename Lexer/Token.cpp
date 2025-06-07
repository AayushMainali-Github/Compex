#include "Token.h"
#include <string>

Token::Token(TokenType Type, std::string Literal) : Type(Type), Literal(Literal) {}