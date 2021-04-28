#include <fstream>
#include "config/config.h"

#include <antlr4-runtime.h>
#include "grammar/Python3Lexer.h"
#include "grammar/Python3Parser.h"
#include "grammar/Python3BaseListener.h"

using namespace std;
using namespace antlr4;

int interpreterLoop(const string& filename) {
    ifstream pythonFile(filename, ios::binary);

    if(pythonFile.is_open()){
        //ANTLRInputStream input;
        /*
        input.load(pythonFile);
        Python3Lexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        Python3Parser parser(&tokens);
        */

        cout << "Hello" << endl;

        //Python3Lexer lexer(input);
    } else {
        cerr << "Couldn't open file " << filename << endl;
        return 1;
    }

    pythonFile.close();

    return 0;
}

int main (int argc, char *argv[])
{
    cout << PROJECT_NAME << " " << SOFT_VERSION << endl;

    if(argc < 2){
        cerr << "Interpreter not yet supported" << endl;
        exit(1);
    }

    return interpreterLoop(argv[1]);
}