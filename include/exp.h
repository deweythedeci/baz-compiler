#include <stdlib.h>
using namespace std;

template <typename T>
class Exp{
    T eval(){
        return NULL;
    }
};

class Int : public Exp<int>{
    int val;
    int eval(){
        return val;
    }
};

class Float : public Exp<float>{
    float val;
    float eval(){
        return val;
    }
};

class Char : public Exp<char>{
    char val;
    char eval(){
        return val;
    }
};

template <typename T>
class BinExp : public Exp<T>{
    Exp<T> e1;
    Exp<T> e2;
};

template <typename T>
class Plus : public BinExp<T>{
    T eval(){
        return this.e1.eval() + this.e2.eval();
    }
};

template <typename T>
class Minus : public BinExp<T>{
    T eval(){
        return this.e1.eval() - this.e2.eval();
    }
};

template <typename T>
class Multiply: public BinExp<T>{
    T eval(){
        return this.e1.eval() * this.e2.eval();
    }
};

template <typename T>
class Divide : public BinExp<T>{
    T eval(){
        return this.e1.eval() / this.e2.eval();
    }
};