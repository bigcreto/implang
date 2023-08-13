#ifndef TOKEN_H
#define TOKEN_H

struct Position {
    int row;
    int column;
};

union Literal {

    int int_lit;
    double doub_lit;
    char* str_lit;

};

enum TokenType {

    BANG, BANG_EQUAL,
    EQUAL, EQUAL_EQUAL,
    GREATER, GREATER_EQUAL,
    LESS, LESS_EQUAL,
    PLUS_EQUAL, MINUS_EQUAL,
    STAR_EQUAL, SLASH_EQUAL,

    // Increment and decrement operators.
    INCREMENT, DECREMENT,

    // Booleans.
    TRUE, FALSE,

    FOR, DO, WHILE, 
    IF, ELSE_IF, ELSE,

    NIL,

    FEND,

};

enum LitTokType {

    ID_LIT,  // Identifier literals: function/var/struct/enum names.
    STR_LIT, // String literals.
    INT_LIT, // Integer literal.
    FLO_LIT, // Floating point literal.
};

enum ArithTokType {

    PLUS, MINUS, STAR, SLASH, MODULO,

};

#endif // !TOKEN_H
