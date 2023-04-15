// Expression class and subclasses
// Used in AST representation

// An expression has a type T that it 
template <typename T>
class Exp{
    T val;
    T eval();
};

template <typename T>
class BinExp : public Exp<T>{
    Exp<T> e1;
    Exp<T> e2;
};

template <typename T>
class Plus : public BinExp<T>{};

template <typename T>
class Minus : public BinExp<T>{};

template <typename T>
class Multiply: public BinExp<T>{};

template <typename T>
class Divide : public BinExp<T>{};