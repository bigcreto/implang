#include "../include/main.h"

// For each token there should be the token type, lexeme, and then the literal if there is one.
class Token { 
public:
    TokenType type;
    std::string lexeme;
    Literal literal;

    // Location identifiers.
    Position pos;
    int row;
    int collumn;

    Token(TokenType type, std::string lexeme, Literal literal) : type(type), lexeme(lexeme) {}

    // Return token as a string.
    std::string to_string() const {
        std::stringstream ftok_string;
        ftok_string << "Type: " + tokent_to_string(type);

        return ftok_string.str();
    }

private:
    std::string tokent_to_string(TokenType type) const {
        std::string tok_string;

        switch (type) {
            case TokenType::ID_LIT: 
                tok_string = "Identfier Literal";
                break;
            case TokenType::STR_LIT: 
                tok_string = "String Literal";
                break;
            case TokenType::NUM_LIT: 
                tok_string = "Number Literal";
                break;
            case TokenType::BANG: 
                tok_string = "!";
                break;
            case TokenType::BANG_EQUAL: 
                tok_string = "!=";
                break;
            case TokenType::EQUAL: 
                tok_string = "=";
                break;
            case TokenType::EQUAL_EQUAL: 
                tok_string = "==";
                break;
            case TokenType::GREATER:
                tok_string = ">";
                break;
            case TokenType::GREATER_EQUAL:
                tok_string = ">=";
                break;
            case TokenType::LESS:
                tok_string = "<";
                break;
            case TokenType::LESS_EQUAL:
                tok_string = "<=";
                break;
            case TokenType::PLUS_EQUAL:
                tok_string = "+=";
                break;
            case TokenType::MINUS_EQUAL:
                tok_string = "-=";
                break;
            case TokenType::STAR_EQUAL:
                tok_string = "*=";
                break;
            case TokenType::SLASH_EQUAL:
                tok_string = "/=";
                break;
            case TokenType::PLUS:
                tok_string = "+";
                break;
            case TokenType::MINUS:
                tok_string = "-";
                break;
            case TokenType::STAR:
                tok_string = "*";
                break;
            case TokenType::SLASH:
                tok_string = "/";
                break;
            case TokenType::MODULO:
                tok_string = "%";
                break;
            case TokenType::INCREMENT:
                tok_string = "++";
                break;
            case TokenType::DECREMENT:
                tok_string = "--";
                break;
            case TokenType::TRUE:
                tok_string = "true";
                break;
            case TokenType::FALSE:
                tok_string = "false";
                break;
            case TokenType::FOR:
                tok_string = "for";
                break;
            case TokenType::DO:
                tok_string = "do";
                break;
            case TokenType::WHILE:
                tok_string = "while";
                break;
            case TokenType::IF:
                tok_string = "if";
                break;
            case TokenType::ELSE_IF:
                tok_string = "else if";
                break;
            case TokenType::ELSE:
                tok_string = "else";
                break;
            case TokenType::NIL:
                tok_string = "nil";
                break;
            case TokenType::FEND:
                tok_string = "EOF";
                break;
        }

        return tok_string;
    }

};

class LitToken : public Token {

    LitTokType type; // What type of literal.
    Literal literal; // The literal.

};

