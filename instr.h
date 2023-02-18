#include <stdlib.h>
#include <vector>
#include <stack>
using namespace std;

// --------------- Program ---------------

class Program{
    vector<Instr> instrs;
    stack<Instr*> call_stack;
}

// --------------- Instructions ---------------

class Instr{
    void exec(){
        return;
    }
}

// --------------- Expressions ---------------

class Exp{
    template <typename T>
    T eval(){
        return null;
    }
}

class Int : public Exp{
    int val;
    int eval(){
        return val;
    }
}

class Float : public Exp{
    float val;
    float eval(){
        return val;
    }
}

class Char : public Exp{
    char val;
    char eval(){
        return val;
    }
}

class BinExp : public Exp{
    Exp e1;
    Exp e2;
}

class Plus : public BinExp{
    template <typename T>
    T eval(){
        return e1.eval() + e2.eval();
    }
}

class Minus : public BinExp{
    template <typename T>
    T eval(){
        return e1.eval() - e2.eval();
    }
}

class Multiply: public BinExp{
    template <typename T>
    T eval(){
        return e1.eval() * e2.eval();
    }
}

class Divide : public BinExp{
    template <typename T>
    T eval(){
        return e1.eval() / e2.eval();
    }
}