// Definition class and subclasses
// Used in AST representation

namespace AST{
    class Def{};

    class VarDef : public Def{
        Type type;
        std::string name;
        Exp val;
    };

    class FuncDef : public Def{
        std::string name;
        std::vector<Param> args;
        std::vector<Stmt> stmts;
        Type retType;
    };

    class ClassDef : public Def{
        std::string name;
        std::vector<VarDef> members;
    };

    class Param{
        Type type;
        std::string name;
    }
}