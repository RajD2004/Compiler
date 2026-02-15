/**
 * File : AST.hpp
 * Abstract syntax tree for language
 * Will use Inheritance and polymorphism for different node types
 * The tree itself will be built in the parser
 * The generated code will be in a .ll file and the the translated code will be LLVM like IR
 * Will build a seperate parser to translate optimized IR into assembly (ARM64)
 *
 * Operators :  + - * / % && || & | ^ ! < > <= >= == != []
 *
 * Lowest precedence = 1
 *
 * prec 1 : = (right associative (chaining allowed))
 * prec 2 : || (left associative (chaining allowed))
 * prec 3 : && (left associative (chaining allowed))
 * prec 4 : | (left)
 * prec 5 : ^ (left)
 * prec 6 : & (left) 
 * prec 7 : == != (left associative (chaining is allowed))
 * prec 8: < > <= >= (left (chaining allowed))
 * prec 9: + - (left)
 * prec 10: * / % (left)
 * prec 11: - ! (right associative (unary))
 * prec 12: ** (right)
 * prec 13: [] (left associative)
 *
 */

#ifndef AST_HEADER_FILE
#define AST_HEADER_FILE

#include "Lexer/lexer.hpp"
//#include "SymbolTable.hpp"

class ASTNode{

};

class ASTNodeOperator : public ASTNode{

};

class ASTNodeIf : public ASTNode {

};

class ASTNodeWhile : public ASTNode {

};

class ASTNodeAssign : public ASTNode {

};

class ASTNodeFunction : public ASTNode {

};

class ASTNodeFunctionCall : public ASTNode {

};

class ASTNodeReturn : public ASTNode {

};

class ASTNodeIntLiteral : public ASTNode {

}

class ASTNodeFloatLiteral : public ASTNode {

}

class ASTNodeStringLiteral : public ASTNode {

};


#endif
