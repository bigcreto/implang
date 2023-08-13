#include "../include/main.h"
#include "lexer.cpp"

class Imp {
public:
    Imp() {
        error = false;
    }

    void scan_file(const char* file_path) {
        std::ifstream filep(file_path, std::ifstream::in);

        if(!filep) {
            printf("Error!\n");
            exit(65);
        }

        Lexer lexer;

        std::string line;

        std::vector<Token> tokens;

        while(getline(filep, line)) {

            lexer.scanTokens(line, tokens);

            printf("%s\n", line.c_str());
            run(line);
        }
    }

private:
    bool error;

    void run(std::string source) {}
};

// Main function, accepts command line arguments.
int main(int argc, char* argv[]) {
    // Instantiate the Imp class.
    Imp impc;

    // If there is more than one file passed as arg return error.
    if (argc > 2) {
        printf("Usage: impc <path_to_file>\n"); 
        exit(64);
    } else if (argc == 2)
    {
        const char* file_path = argv[1];
        impc.scan_file(file_path);
    }

    exit(0);
}
