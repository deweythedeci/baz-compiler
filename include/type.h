// Type class and subclasses
// Used in AST representation

namespace AST{
    class Type{};

    class BoolType : public Type{};
    class CharType : public Type{};
    class IntType : public Type{};
    class LongType : public Type{};
    class RealType : public Type{};

    class VoidType : public Type{};

    class ArrayType : public Type{
        Type base;
    };

    class ClassType : public Type{
        std::string name;
    };
}