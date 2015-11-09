from antlr4 import *
import lxml.etree as etree


from grammar.CalcParser import CalcParser
from grammar.CalcListener import CalcListener
from grammar.CalcLexer import CalcLexer


def antrl_parse(input_stream, debug):
    lexer = CalcLexer(input_stream)
    token_stream = CommonTokenStream(lexer)
    parser = CalcParser(token_stream)
    print "### PARSING ###"
    tree = parser.calcfile()

    if debug:
        lisp_tree_str = tree.toStringTree(recog=parser)
        print(lisp_tree_str)


    return tree

def tree2xml(tree):

    walker = ParseTreeWalker()

    listner = CalcListener()
    walker.walk(listner, tree)

    return etree.XML('<?xml version="1.0" ?>' + listner.output)
