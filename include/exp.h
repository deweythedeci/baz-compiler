// Expression class and subclasses
// Used in AST representation

namespace AST{
    class Exp{
        Type T;
    };

    // unary and binary expressions
    class UnExp : public Exp{
        Exp e;
    };
    class BinExp : public Exp{
        Exp e1;
        Exp e2;
    };

    // boolean operations
    class Or : public BinExp{};
    class And : public BinExp{};
    class Not : public UnExp{};

    // bitwise operations
    class BitOr : public BinExp{};
    class BitXor : public BinExp{};
    class BitAnd : public BinExp{};
    class BitLShift : public BinExp{};
    class BitRShift : public BinExp{};
    class BitNot : public UnExp{};

    // comparison operations
    class Less : public BinExp{};
    class Greater : public BinExp{};
    class Equal : public BinExp{};
    class NotEqual : public BinExp{};

    // arithmetic operations
    class Add : public BinExp{};
    class Subtract : public BinExp{};
    class Multiply: public BinExp{};
    class Divide : public BinExp{};
    class Modulus : public BinExp{};
    class Negative : public UnExp{};

    // literals
    template <typename T>
    class Literal : public Exp{
        T val;
    };

    class ArrayLiteral : public Literal<Exp*>{
        int length;
        Exp* val;
    };

    // variable reference
    class Variable : public Exp{
        std::string name;
    };

    // array element
    class ArrayElem : public Exp{
        Exp arr;
        Exp idx;
    };

    // class element
    class ClassElem : public Exp{
        Exp obj;
        std::string member;
    };

    // function call
    class CallExp : public Exp{
        std::string func;
        std::vector<Exp> args;
    };
}