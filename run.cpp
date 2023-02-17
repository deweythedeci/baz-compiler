#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <peglib.h>
using namespace std;

int main(int argc, char** argv){
    if(argc < 2){
        printf("usage: %s file.code\n", argv[0]);
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