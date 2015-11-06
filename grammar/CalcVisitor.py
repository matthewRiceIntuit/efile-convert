# Generated from java-escape by ANTLR 4.5
from antlr4 import *

# This class defines a complete generic visitor for a parse tree produced by CalcParser.

class CalcVisitor(ParseTreeVisitor):

    # Visit a parse tree produced by CalcParser#section.
    def visitSection(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#block.
    def visitBlock(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#stmt.
    def visitStmt(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#assign.
    def visitAssign(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#call.
    def visitCall(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#Parens.
    def visitParens(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#Literal.
    def visitLiteral(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#DivMul.
    def visitDivMul(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#AddSub.
    def visitAddSub(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#Predicate.
    def visitPredicate(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#PercentageOf.
    def visitPercentageOf(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#Max.
    def visitMax(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#VarRef.
    def visitVarRef(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#FunctionCall.
    def visitFunctionCall(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#argList.
    def visitArgList(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#decl.
    def visitDecl(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#declList.
    def visitDeclList(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#varDecl.
    def visitVarDecl(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#r_type.
    def visitR_type(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#ctrlStruct.
    def visitCtrlStruct(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#ifStruct.
    def visitIfStruct(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#elseStruct.
    def visitElseStruct(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#loopStruct.
    def visitLoopStruct(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#ret.
    def visitRet(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#function.
    def visitFunction(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#formParList.
    def visitFormParList(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#formPar.
    def visitFormPar(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#full_id.
    def visitFull_id(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by CalcParser#sub_id.
    def visitSub_id(self, ctx):
        return self.visitChildren(ctx)


