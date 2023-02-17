#include <stdlib.h>
using namespace std;

class Instr{

}

class Exp{

}

class Int : public Exp{
    int val;
}

class Float : public Exp{
    float val;
}

class Char : public Exp{
    char val;
}

class BinExp : public Exp{
    Exp e1;
    Exp e2;
}

class Plus : public BinExp{
    
}

class Minus : public BinExp{
    
}

class Multiply: public BinExp{
    
}

class Divide : public BinExp{
    
}