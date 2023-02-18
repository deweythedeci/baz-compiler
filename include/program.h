#include <stdlib.h>
#include <vector>
#include <stack>
#include <instr.h>
#include <exp.h>
using namespace std;

class Program{
    vector<Instr> instrs;
    stack<Instr*> call_stack;
};