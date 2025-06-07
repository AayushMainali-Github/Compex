#include "Token.h"
#include <string>

class Lexer {
  std::string input;
  int currentPos;
  int readPos;
  char ch;

public:
  Lexer(std::string input);
  void readChar();
  void changePos(int pos);
  Token nextToken();
};