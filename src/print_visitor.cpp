#include "parse/print_visitor.h"

std::any parse::PrintVisitor::visitProgram(BazParser::ProgramContext *ctx) {
    std::cout << std::string(indent, '\t') << "Program" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitFuncblock(BazParser::FuncblockContext *ctx) {
    std::cout << std::string(indent, '\t') << "Funcblock" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitFunc(BazParser::FuncContext *ctx) {
    std::cout << std::string(indent, '\t') << "Func" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitArg(BazParser::ArgContext *ctx) {
    std::cout << std::string(indent, '\t') << "Arg" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitRettype(BazParser::RettypeContext *ctx) {
    std::cout << std::string(indent, '\t') << "Rettype" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitClassblock(BazParser::ClassblockContext *ctx) {
    std::cout << std::string(indent, '\t') << "Classblock" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitClass(BazParser::ClassContext *ctx) {
    std::cout << std::string(indent, '\t') << "Class" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitStmt(BazParser::StmtContext *ctx) {
    std::cout << std::string(indent, '\t') << "Stmt" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitDecl(BazParser::DeclContext *ctx) {
    std::cout << std::string(indent, '\t') << "Decl" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitArrdecl(BazParser::ArrdeclContext *ctx) {
    std::cout << std::string(indent, '\t') << "Arrdecl" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitAssign(BazParser::AssignContext *ctx) {
    std::cout << std::string(indent, '\t') << "Assign" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitCallstmt(BazParser::CallstmtContext *ctx) {
    std::cout << std::string(indent, '\t') << "Callstmt" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitStmtblock(BazParser::StmtblockContext *ctx) {
    std::cout << std::string(indent, '\t') << "Stmtblock" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitIfblock(BazParser::IfblockContext *ctx) {
    std::cout << std::string(indent, '\t') << "Ifblock" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitIf(BazParser::IfContext *ctx) {
    std::cout << std::string(indent, '\t') << "If" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitElseif(BazParser::ElseifContext *ctx) {
    std::cout << std::string(indent, '\t') << "Elseif" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitElse(BazParser::ElseContext *ctx) {
    std::cout << std::string(indent, '\t') << "Else" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitWhileblock(BazParser::WhileblockContext *ctx) {
    std::cout << std::string(indent, '\t') << "Whileblock" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitDowhileblock(BazParser::DowhileblockContext *ctx) {
    std::cout << std::string(indent, '\t') << "Dowhileblock" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitWhile(BazParser::WhileContext *ctx) {
    std::cout << std::string(indent, '\t') << "While" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitDowhile(BazParser::DowhileContext *ctx) {
    std::cout << std::string(indent, '\t') << "Dowhile" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitForblock(BazParser::ForblockContext *ctx) {
    std::cout << std::string(indent, '\t') << "Forblock" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitFor(BazParser::ForContext *ctx) {
    std::cout << std::string(indent, '\t') << "For" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitBlock(BazParser::BlockContext *ctx) {
    std::cout << std::string(indent, '\t') << "Block" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitBreak(BazParser::BreakContext *ctx) {
    std::cout << std::string(indent, '\t') << "Break" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitEnd(BazParser::EndContext *ctx) {
    std::cout << std::string(indent, '\t') << "End" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitReturn(BazParser::ReturnContext *ctx) {
    std::cout << std::string(indent, '\t') << "Return" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitStmtlist(BazParser::StmtlistContext *ctx) {
    std::cout << std::string(indent, '\t') << "Stmtlist" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitExp(BazParser::ExpContext *ctx) {
    std::cout << std::string(indent, '\t') << "Exp" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitBoollit(BazParser::BoollitContext *ctx) {
    std::cout << std::string(indent, '\t') << "Boollit" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitCharlit(BazParser::CharlitContext *ctx) {
    std::cout << std::string(indent, '\t') << "Charlit" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitIntlit(BazParser::IntlitContext *ctx) {
    std::cout << std::string(indent, '\t') << "Intlit" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitReallit(BazParser::ReallitContext *ctx) {
    std::cout << std::string(indent, '\t') << "Reallit" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitStringlit(BazParser::StringlitContext *ctx) {
    std::cout << std::string(indent, '\t') << "Stringlit" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitVariable(BazParser::VariableContext *ctx) {
    std::cout << std::string(indent, '\t') << "Variable" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitType(BazParser::TypeContext *ctx) {
    std::cout << std::string(indent, '\t') << "Type" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitArraytype(BazParser::ArraytypeContext *ctx) {
    std::cout << std::string(indent, '\t') << "Arraytype" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}

std::any parse::PrintVisitor::visitBasetype(BazParser::BasetypeContext *ctx) {
    std::cout << std::string(indent, '\t') << "Basetype" << std::endl;
    indent++;
    std::any ret = visitChildren(ctx);
    indent--;
    return ret;
}