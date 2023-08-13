#include "../include/main.h"
#include "token.cpp"

// The Lexer is only created once, and it keeps track of where in the file it is, which is passed on to the tokens it creates.
// Imp creates a Lexer which tokenizes the file and passes it to the parser which passes the syntax tree to the compiler.

class Lexer {
public:
    Lexer()  {
        start = 0;
        current = 0;

        pos.row = 1;
        pos.column = 1;
    }

    std::vector<Token> scanTokens(std::string source, std::vector<Token>) {
        char c = advance();

        switch (c) {
            case '(': add_token(); break;
        }

    }

private:
    std::string source;
    
    // Token identifiers.
    int start;
    int current;

    // Line location identifiers.
    Position pos;

    Token scanToken(std::string source) {


    }

    Token add_token() {
    }
};
