#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <iostream>
#include <program.h>
#include <parser.h>
using namespace std;

int main(int argc, char** argv){
    if(argc < 3){
        printf("usage: %s file.baz file.out\n", argv[0], argv[1]);
        return 1;
    }
    // read from file
    ifstream fs = ifstream(argv[1], fstream::in);
    stringstream buf;
    buf << fs.rdbuf();
    string code = buf.str();
    // parse w/ grammar
    return 0;
}