# Generated from java-escape by ANTLR 4.5
from antlr4 import *
import cgi


class obj(object):
    def __init__(self, value, parent):
        self.value = value
        self.parent = parent
        self.children = []


INDENT = 3
# This class defines a complete listener for a parse tree produced by CalcParser.
class CalcListener(ParseTreeListener):
    def __init__(self):
        self.root = obj('root', None)
        self.current = self.root
        self.indent = 0
        self.output = ""

    def enter(self, name, value=None):
        self.indent += INDENT
        self.output += '<%s %s>' % (name, '' if not value else 'val="%s"' % value)
        child = obj(name, self.current)
        self.current.children.append(child)
        self.current = child

    def close(self, name, value=None):
        self.output += '<%s %s/>' % (name, '' if not value else 'val="%s"' % value)
        child = obj(name, self.current)
        self.current.children.append(child)

    def exit(self):
        self.output += '</%s>' % self.current.value
        self.indent -= INDENT
        if self.current:
            self.current = self.current.parent


    # Enter a parse tree produced by CalcParser#calcfile.
    def enterCalcfile(self, ctx):
        self.enter('CALC')

    # Exit a parse tree produced by CalcParser#calcfile.
    def exitCalcfile(self, ctx):
        self.exit()

    # Enter a parse tree produced by CalcParser#program.
    def enterSection(self, ctx):
        self.enter('Section', ctx.ID().getText())

    # Exit a parse tree produced by CalcParser#program.
    def exitSection(self, ctx):
        self.exit()

        # Enter a parse tree produced by CalcParser#formset.

    def enterFormset(self, ctx):
        self.enter('FORMSET', ctx.ID().getText())

    # Exit a parse tree produced by CalcParser#formset.
    def exitFormset(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#form.
    def enterForm(self, ctx):
        self.close('FORM', ctx.ID().getText())

    # Exit a parse tree produced by CalcParser#form.
    def exitForm(self, ctx):
        pass


    # Enter a parse tree produced by CalcParser#block.
    def enterBlock(self, ctx):
        pass

    # Exit a parse tree produced by CalcParser#block.
    def exitBlock(self, ctx):
        pass

        # Enter a parse tree produced by CalcParser#dumbblock.

    def enterDumbblock(self, ctx):
        self.enter('block')

    # Exit a parse tree produced by CalcParser#dumbblock.
    def exitDumbblock(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#stmt.
    def enterStmt(self, ctx):
        pass

    # Exit a parse tree produced by CalcParser#stmt.
    def exitStmt(self, ctx):
        pass

    def enterOpen_stmt(self, ctx):
        pass

    # Exit a parse tree produced by CalcParser#stmt.
    def exitOpen_stmt(self, ctx):
        pass


    # Enter a parse tree produced by CalcParser#assign.
    def enterAssign(self, ctx):
        self.enter('Assign')

    # Exit a parse tree produced by CalcParser#assign.
    def exitAssign(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#call.
    def enterCall(self, ctx):
        self.enter(ctx.ID().getText().upper() )

    # Exit a parse tree produced by CalcParser#call.
    def exitCall(self, ctx):
        self.exit()

        # Enter a parse tree produced by CalcParser#max.

    def enterMax(self, ctx):
        self.enter("Max")

    # Exit a parse tree produced by CalcParser#max.
    def exitMax(self, ctx):
        self.exit()

    # Enter a parse tree produced by CalcParser#Parens.
    def enterParens(self, ctx):
        self.enter("Parens")

    # Exit a parse tree produced by CalcParser#Parens.
    def exitParens(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#Literal.
    def enterLiteral(self, ctx):
        if  '"' in ctx.LITERAL().getText():
            self.close("String", cgi.escape(ctx.LITERAL().getText()).replace('"', ""))
        else:
            self.close("Literal", cgi.escape(ctx.LITERAL().getText()).replace('"', "&quot;"))

    # Exit a parse tree produced by CalcParser#Literal.
    def exitLiteral(self, ctx):
        pass


    # Enter a parse tree produced by CalcParser#DivMul.
    def enterDivMul(self, ctx):
        self.enter("DivMul", ctx.op.text)

    # Exit a parse tree produced by CalcParser#DivMul.
    def exitDivMul(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#AddSub.
    def enterAddSub(self, ctx):
        self.enter("AddSub", ctx.op.text)

    # Exit a parse tree produced by CalcParser#AddSub.
    def exitAddSub(self, ctx):
        self.exit()

    # Enter a parse tree produced by CalcParser#AddSub.
    def enterLogic(self, ctx):
        self.enter(ctx.op.text)

    # Exit a parse tree produced by CalcParser#AddSub.
    def exitLogic(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#Predicate.
    def enterPredicate(self, ctx):
        self.enter("Predicate", cgi.escape(ctx.op.text).lower())

    # Exit a parse tree produced by CalcParser#Predicate.
    def exitPredicate(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#VarRef.
    def enterVarRef(self, ctx):
        pass

    # Exit a parse tree produced by CalcParser#VarRef.
    def exitVarRef(self, ctx):
        pass


    # Enter a parse tree produced by CalcParser#FunctionCall.
    def enterFunctionCall(self, ctx):
        self.enter("FunctionCall", ctx.ID().getText().lower())

    # Exit a parse tree produced by CalcParser#FunctionCall.
    def exitFunctionCall(self, ctx):
        self.exit()

    # Enter a parse tree produced by CalcParser#argList.
    def enterArgList(self, ctx):
        self.enter("ArgList")

    # Exit a parse tree produced by CalcParser#argList.
    def exitArgList(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#decl.
    def enterVardecl(self, ctx):
        self.enter("Decl")

    # Exit a parse tree produced by CalcParser#decl.
    def exitVardecl(self, ctx):
        self.exit()

    # Enter a parse tree produced by CalcParser#decl.
    def enterConstdecl(self, ctx):
        self.enter("Constant")

    # Exit a parse tree produced by CalcParser#decl.
    def exitConstdecl(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#declList.
    def enterDeclList(self, ctx):
        self.enter("DeclList")

    # Exit a parse tree produced by CalcParser#declList.
    def exitDeclList(self, ctx):
        self.exit()

    # Enter a parse tree produced by CalcParser#declList.
    def enterConstdeclList(self, ctx):
        self.enter("DeclList")

    # Exit a parse tree produced by CalcParser#declList.
    def exitConstdeclList(self, ctx):
        self.exit()

    # Enter a parse tree produced by CalcParser#declList.
    def enterArrayDecl(self, ctx):
        self.enter("Array", ctx.LITERAL().getText())


    # Exit a parse tree produced by CalcParser#declList.
    def exitArrayDecl(self, ctx):
        self.exit()

    # Enter a parse tree produced by CalcParser#declList.
    def enterNot(self, ctx):
        self.enter("NOT")

    # Exit a parse tree produced by CalcParser#declList.
    def exitNot(self, ctx):
        self.exit()

        # Enter a parse tree produced by CalcParser#varDecl.

    def enterVarDecl(self, ctx):
        self.enter("VarDecl", ctx.ID().getText())

    # Exit a parse tree produced by CalcParser#varDecl.
    def exitVarDecl(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#r_type.
    def enterR_type(self, ctx):
        self.enter("Type", ctx.ID().getText())

    # Exit a parse tree produced by CalcParser#r_type.
    def exitR_type(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#ctrlStruct.
    def enterCtrlStruct(self, ctx):
        self.enter("CtrlStruct")

    # Exit a parse tree produced by CalcParser#ctrlStruct.
    def exitCtrlStruct(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#ifStruct.
    def enterIfStruct(self, ctx):
        self.enter("IfStruct")

    # Exit a parse tree produced by CalcParser#ifStruct.
    def exitIfStruct(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#elseStruct.
    def enterElseStruct(self, ctx):
        self.enter("ElseStruct")

    # Exit a parse tree produced by CalcParser#elseStruct.
    def exitElseStruct(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#loopStruct.
    def enterLoopStruct(self, ctx):
        self.enter("LoopStruct")

    # Exit a parse tree produced by CalcParser#loopStruct.
    def exitLoopStruct(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#ret.
    def enterRet(self, ctx):
        self.enter("Ret")

    # Exit a parse tree produced by CalcParser#ret.
    def exitRet(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#function.
    def enterFunction(self, ctx):
        self.enter("Function")

    # Exit a parse tree produced by CalcParser#function.
    def exitFunction(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#formParList.
    def enterFormParList(self, ctx):
        self.enter("FormParList")

    # Exit a parse tree produced by CalcParser#formParList.
    def exitFormParList(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#formPar.
    def enterFormPar(self, ctx):
        self.enter("FormPar")

    # Exit a parse tree produced by CalcParser#formPar.
    def exitFormPar(self, ctx):
        self.exit()


        # Enter a parse tree produced by CalcParser#FunctionCall.

    def enterFunctionCall(self, ctx):
        pass

    # Exit a parse tree produced by CalcParser#FunctionCall.
    def exitFunctionCall(self, ctx):
        pass

        # Enter a parse tree produced by CalcParser#full_id.

    def enterFull_id(self, ctx):
        self.enter("ID", ctx.ID().getText())


    # Exit a parse tree produced by CalcParser#full_id.
    def exitFull_id(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#sub_id.
    def enterSub_id(self, ctx):
        self.enter("Sub_ID", ctx.ID().getText())

    # Exit a parse tree produced by CalcParser#sub_id.
    def exitSub_id(self, ctx):
        self.exit()


        # Enter a parse tree produced by CalcParser#PercentageOf.

    def enterPercentageOf(self, ctx):
        self.enter("PercentageOf")

    # Exit a parse tree produced by CalcParser#PercentageOf.
    def exitPercentageOf(self, ctx):
        self.exit()

        # Enter a parse tree produced by CalcParser#MultiCopyAccumulate.

    def enterMulticopy_accum(self, ctx):
        self.enter("MultiCopyAccumulate");


    # Exit a parse tree produced by CalcParser#MultiCopyAccumulate.
    def exitMulticopy_accum(self, ctx):
        self.exit()

        # Enter a parse tree produced by CalcParser#MultiCopyAccumulate.

    def enterMultiCopyAccumulate(self, ctx):
        pass

    # Exit a parse tree produced by CalcParser#MultiCopyAccumulate.
    def exitMultiCopyAccumulate(self, ctx):
        pass

        # Enter a parse tree produced by CalcParser#start_index.

    def enterStart_index(self, ctx):

        self.enter("StartIndex", ctx.LITERAL().getText())

    # Exit a parse tree produced by CalcParser#start_index.
    def exitStart_index(self, ctx):
        self.exit()


    # Enter a parse tree produced by CalcParser#end_index.
    def enterEnd_index(self, ctx):
        self.enter("EndIndex")

    # Exit a parse tree produced by CalcParser#end_index.
    def exitEnd_index(self, ctx):
        self.exit()

    # Enter a parse tree produced by CalcParser#boolean.
    def enterBoolean(self, ctx):
        pass

    # Exit a parse tree produced by CalcParser#boolean.
    def exitBoolean(self, ctx):
        pass

    # Enter a parse tree produced by CalcParser#boolean.
    def enterBool(self, ctx):
        val = ctx.getText().upper()

        if val == 'CHECKED':
            val = 'TRUE'

        self.close('Boolean', val)

    # Exit a parse tree produced by CalcParser#boolean.
    def exitBool(self, ctx):
        pass

    # Enter a parse tree produced by CalcParser#end_index.
    def enterForloopstruct(self, ctx):
        self.enter("ForLoop")

    # Exit a parse tree produced by CalcParser#end_index.
    def exitForloopstruct(self, ctx):
        self.exit()

    # Enter a parse tree produced by CalcParser#end_index.
    def enterArray_index(self, ctx):
        self.enter("ArrayIndex")

    # Exit a parse tree produced by CalcParser#end_index.
    def exitArray_index(self, ctx):
        self.exit()

    # Enter a parse tree produced by CalcParser#end_index.
    def enterWithForms(self, ctx):
        self.enter("WithForms")

    # Exit a parse tree produced by CalcParser#end_index.
    def exitWithForms(self, ctx):
        self.exit()

    # Enter a parse tree produced by CalcParser#end_index.
    def enterBreakStruct(self, ctx):
        self.close("break")

    # Exit a parse tree produced by CalcParser#end_index.
    def exitBreakStruct(self, ctx):
        pass

        # Enter a parse tree produced by CalcParser#end_index.
    def enterConverter(self, ctx):
        pass

    # Exit a parse tree produced by CalcParser#end_index.
    def exitConverter(self, ctx):
        pass

        # Enter a parse tree produced by CalcParser#end_index.
    def enterTypeDecl(self, ctx):
        self.enter("TypeDecl")

    # Exit a parse tree produced by CalcParser#end_index.
    def exitTypeDecl(self, ctx):
        self.exit()

    def enterFormdecl(self, ctx):
        self.enter("FormDecl")

    # Exit a parse tree produced by CalcParser#end_index.
    def exitFormdecl(self, ctx):
        self.exit()

    def enterWithNewTag(self, ctx):
        self.enter("WithNewTag")

    # Exit a parse tree produced by CalcParser#end_index.
    def exitWithNewTag(self, ctx):
        self.exit()

    def enterTypeDeclList(self,ctx):
        pass

    def exitTypeDeclList(self,ctx):
        pass

    def enterChild_id(self,ctx):
        self.enter("child_id")

    def exitChild_id(self,ctx):
        self.exit()

    def enterCaseStuct(self,ctx):
        self.enter("CASE")

    def exitCaseStuct(self,ctx):
        self.exit()

    def enterCaseStmt(self,ctx):
        self.enter("CASESTATEMENT",ctx.LITERAL().getText())

    def exitCaseStmt(self,ctx):
        self.exit()

    def enterPresection(self,ctx):
        pass

    def exitPresection(self,ctx):
        pass

    def enterRange(self,ctx):
        pass

    def exitRange(self,ctx):
        pass

    def enterRangeExpr(self,ctx):
        self.enter("Range")

    def exitRangeExpr(self,ctx):
        self.exit()