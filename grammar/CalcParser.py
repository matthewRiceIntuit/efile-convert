# Generated from java-escape by ANTLR 4.5
# encoding: utf-8
from __future__ import print_function
from antlr4 import *
from io import StringIO
package = globals().get("__package__", None)
ischild = len(package)>0 if package is not None else False
if ischild:
    from .CalcListener import CalcListener
else:
    from CalcListener import CalcListener
def serializedATN():
    with StringIO() as buf:
        buf.write(u"\3\u0430\ud6d1\u8206\uad2d\u4417\uaef1\u8d80\uaadd\3")
        buf.write(u"K\u01cf\4\2\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t")
        buf.write(u"\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t\13\4\f\t\f\4\r\t\r")
        buf.write(u"\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22\4")
        buf.write(u"\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30")
        buf.write(u"\t\30\4\31\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t")
        buf.write(u"\35\4\36\t\36\4\37\t\37\4 \t \4!\t!\4\"\t\"\4#\t#\4$")
        buf.write(u"\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4,\t")
        buf.write(u",\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\3\2\5\2d\n\2")
        buf.write(u"\3\2\7\2g\n\2\f\2\16\2j\13\2\3\3\3\3\5\3n\n\3\3\3\5\3")
        buf.write(u"q\n\3\3\4\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\6")
        buf.write(u"\3\6\3\7\3\7\5\7\u0082\n\7\3\7\5\7\u0085\n\7\3\7\3\7")
        buf.write(u"\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t")
        buf.write(u"\3\t\3\t\3\t\3\t\3\n\3\n\7\n\u009c\n\n\f\n\16\n\u009f")
        buf.write(u"\13\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\5\13\u00a8\n\13")
        buf.write(u"\3\13\3\13\3\13\3\13\3\13\3\13\3\13\5\13\u00b1\n\13\3")
        buf.write(u"\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\5\f\u00bc\n\f\3\r")
        buf.write(u"\3\r\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3\17")
        buf.write(u"\3\17\3\17\3\17\3\17\3\20\3\20\5\20\u00d0\n\20\3\21\3")
        buf.write(u"\21\5\21\u00d4\n\21\3\22\3\22\3\22\3\22\3\22\3\22\3\22")
        buf.write(u"\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3")
        buf.write(u"\22\5\22\u00e8\n\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22")
        buf.write(u"\3\22\3\22\3\22\3\22\3\22\7\22\u00f6\n\22\f\22\16\22")
        buf.write(u"\u00f9\13\22\3\23\3\23\3\23\7\23\u00fe\n\23\f\23\16\23")
        buf.write(u"\u0101\13\23\5\23\u0103\n\23\3\24\3\24\3\24\3\24\3\25")
        buf.write(u"\3\25\7\25\u010b\n\25\f\25\16\25\u010e\13\25\3\26\3\26")
        buf.write(u"\7\26\u0112\n\26\f\26\16\26\u0115\13\26\3\27\3\27\3\27")
        buf.write(u"\7\27\u011a\n\27\f\27\16\27\u011d\13\27\5\27\u011f\n")
        buf.write(u"\27\3\30\3\30\3\30\7\30\u0124\n\30\f\30\16\30\u0127\13")
        buf.write(u"\30\5\30\u0129\n\30\3\30\3\30\3\30\3\31\3\31\3\31\7\31")
        buf.write(u"\u0131\n\31\f\31\16\31\u0134\13\31\5\31\u0136\n\31\3")
        buf.write(u"\31\3\31\3\31\3\31\3\32\3\32\3\32\3\32\3\32\3\33\3\33")
        buf.write(u"\3\34\5\34\u0144\n\34\3\34\3\34\3\35\3\35\3\35\3\35\3")
        buf.write(u"\35\3\35\3\36\3\36\3\36\3\36\3\36\3\36\3\37\3\37\3 \3")
        buf.write(u" \3 \3 \3 \3 \3 \5 \u015d\n \3!\3!\3!\3!\3!\3!\3!\3!")
        buf.write(u"\3!\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3#\3#\3$\3$\3$\5$\u0174")
        buf.write(u"\n$\3$\3$\3$\3$\5$\u017a\n$\3%\3%\3%\3%\6%\u0180\n%\r")
        buf.write(u"%\16%\u0181\3%\3%\3%\3&\3&\3&\3&\3&\3\'\3\'\3\'\3\'\3")
        buf.write(u"\'\3\'\3\'\3\'\3\'\5\'\u0195\n\'\3(\3(\3)\3)\5)\u019b")
        buf.write(u"\n)\3*\3*\3*\3*\5*\u01a1\n*\3*\3*\3+\3+\7+\u01a7\n+\f")
        buf.write(u"+\16+\u01aa\13+\3+\3+\3,\3,\3,\3,\5,\u01b2\n,\3-\3-\5")
        buf.write(u"-\u01b6\n-\3-\7-\u01b9\n-\f-\16-\u01bc\13-\3-\5-\u01bf")
        buf.write(u"\n-\3.\3.\3.\3/\3/\3/\5/\u01c7\n/\3\60\3\60\3\60\3\60")
        buf.write(u"\3\61\3\61\3\61\2\3\"\62\2\4\6\b\n\f\16\20\22\24\26\30")
        buf.write(u"\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\^`")
        buf.write(u"\2\13\3\2AC\3\2\31 \3\2\16\17\3\2\20\21\3\289\4\2\22")
        buf.write(u"\30\67\67\4\2\3\3##\4\2\f\f\"\"\3\2GI\u01dd\2c\3\2\2")
        buf.write(u"\2\4k\3\2\2\2\6r\3\2\2\2\bx\3\2\2\2\n}\3\2\2\2\f\u0081")
        buf.write(u"\3\2\2\2\16\u0088\3\2\2\2\20\u0091\3\2\2\2\22\u0099\3")
        buf.write(u"\2\2\2\24\u00b0\3\2\2\2\26\u00bb\3\2\2\2\30\u00bd\3\2")
        buf.write(u"\2\2\32\u00c1\3\2\2\2\34\u00c6\3\2\2\2\36\u00cf\3\2\2")
        buf.write(u"\2 \u00d3\3\2\2\2\"\u00e7\3\2\2\2$\u0102\3\2\2\2&\u0104")
        buf.write(u"\3\2\2\2(\u0108\3\2\2\2*\u010f\3\2\2\2,\u011e\3\2\2\2")
        buf.write(u".\u0128\3\2\2\2\60\u0135\3\2\2\2\62\u013b\3\2\2\2\64")
        buf.write(u"\u0140\3\2\2\2\66\u0143\3\2\2\28\u0147\3\2\2\2:\u014d")
        buf.write(u"\3\2\2\2<\u0153\3\2\2\2>\u0155\3\2\2\2@\u015e\3\2\2\2")
        buf.write(u"B\u0167\3\2\2\2D\u016e\3\2\2\2F\u0170\3\2\2\2H\u017b")
        buf.write(u"\3\2\2\2J\u0186\3\2\2\2L\u018b\3\2\2\2N\u0196\3\2\2\2")
        buf.write(u"P\u0198\3\2\2\2R\u019c\3\2\2\2T\u01a4\3\2\2\2V\u01ad")
        buf.write(u"\3\2\2\2X\u01b3\3\2\2\2Z\u01c0\3\2\2\2\\\u01c3\3\2\2")
        buf.write(u"\2^\u01c8\3\2\2\2`\u01cc\3\2\2\2bd\5\4\3\2cb\3\2\2\2")
        buf.write(u"cd\3\2\2\2dh\3\2\2\2eg\5\f\7\2fe\3\2\2\2gj\3\2\2\2hf")
        buf.write(u"\3\2\2\2hi\3\2\2\2i\3\3\2\2\2jh\3\2\2\2km\5\b\5\2ln\5")
        buf.write(u"*\26\2ml\3\2\2\2mn\3\2\2\2np\3\2\2\2oq\5(\25\2po\3\2")
        buf.write(u"\2\2pq\3\2\2\2q\5\3\2\2\2rs\7\3\2\2st\7D\2\2tu\7\4\2")
        buf.write(u"\2uv\5\n\6\2vw\7\5\2\2w\7\3\2\2\2xy\7\6\2\2yz\7D\2\2")
        buf.write(u"z{\7\7\2\2{|\7\5\2\2|\t\3\2\2\2}~\5X-\2~\13\3\2\2\2\177")
        buf.write(u"\u0082\5\20\t\2\u0080\u0082\5\16\b\2\u0081\177\3\2\2")
        buf.write(u"\2\u0081\u0080\3\2\2\2\u0082\u0084\3\2\2\2\u0083\u0085")
        buf.write(u"\5(\25\2\u0084\u0083\3\2\2\2\u0084\u0085\3\2\2\2\u0085")
        buf.write(u"\u0086\3\2\2\2\u0086\u0087\5\24\13\2\u0087\r\3\2\2\2")
        buf.write(u"\u0088\u0089\7/\2\2\u0089\u008a\7D\2\2\u008a\u008b\7")
        buf.write(u"\b\2\2\u008b\u008c\5,\27\2\u008c\u008d\7\t\2\2\u008d")
        buf.write(u"\u008e\7\n\2\2\u008e\u008f\5\66\34\2\u008f\u0090\7\5")
        buf.write(u"\2\2\u0090\17\3\2\2\2\u0091\u0092\7.\2\2\u0092\u0093")
        buf.write(u"\7D\2\2\u0093\u0094\7\b\2\2\u0094\u0095\5,\27\2\u0095")
        buf.write(u"\u0096\7\t\2\2\u0096\u0097\7\5\2\2\u0097\u0098\5&\24")
        buf.write(u"\2\u0098\21\3\2\2\2\u0099\u009d\7?\2\2\u009a\u009c\5")
        buf.write(u"\24\13\2\u009b\u009a\3\2\2\2\u009c\u009f\3\2\2\2\u009d")
        buf.write(u"\u009b\3\2\2\2\u009d\u009e\3\2\2\2\u009e\u00a0\3\2\2")
        buf.write(u"\2\u009f\u009d\3\2\2\2\u00a0\u00a1\7@\2\2\u00a1\23\3")
        buf.write(u"\2\2\2\u00a2\u00a8\5\30\r\2\u00a3\u00a8\5\32\16\2\u00a4")
        buf.write(u"\u00a8\5P)\2\u00a5\u00a8\5\22\n\2\u00a6\u00a8\5N(\2\u00a7")
        buf.write(u"\u00a2\3\2\2\2\u00a7\u00a3\3\2\2\2\u00a7\u00a4\3\2\2")
        buf.write(u"\2\u00a7\u00a5\3\2\2\2\u00a7\u00a6\3\2\2\2\u00a8\u00a9")
        buf.write(u"\3\2\2\2\u00a9\u00aa\7\5\2\2\u00aa\u00b1\3\2\2\2\u00ab")
        buf.write(u"\u00b1\5L\'\2\u00ac\u00b1\5> \2\u00ad\u00b1\5H%\2\u00ae")
        buf.write(u"\u00b1\5@!\2\u00af\u00b1\5B\"\2\u00b0\u00a7\3\2\2\2\u00b0")
        buf.write(u"\u00ab\3\2\2\2\u00b0\u00ac\3\2\2\2\u00b0\u00ad\3\2\2")
        buf.write(u"\2\u00b0\u00ae\3\2\2\2\u00b0\u00af\3\2\2\2\u00b1\25\3")
        buf.write(u"\2\2\2\u00b2\u00bc\5\30\r\2\u00b3\u00bc\5\32\16\2\u00b4")
        buf.write(u"\u00bc\5P)\2\u00b5\u00bc\5\22\n\2\u00b6\u00bc\5H%\2\u00b7")
        buf.write(u"\u00bc\5L\'\2\u00b8\u00bc\5> \2\u00b9\u00bc\5@!\2\u00ba")
        buf.write(u"\u00bc\5B\"\2\u00bb\u00b2\3\2\2\2\u00bb\u00b3\3\2\2\2")
        buf.write(u"\u00bb\u00b4\3\2\2\2\u00bb\u00b5\3\2\2\2\u00bb\u00b6")
        buf.write(u"\3\2\2\2\u00bb\u00b7\3\2\2\2\u00bb\u00b8\3\2\2\2\u00bb")
        buf.write(u"\u00b9\3\2\2\2\u00bb\u00ba\3\2\2\2\u00bc\27\3\2\2\2\u00bd")
        buf.write(u"\u00be\5X-\2\u00be\u00bf\t\2\2\2\u00bf\u00c0\5\"\22\2")
        buf.write(u"\u00c0\31\3\2\2\2\u00c1\u00c2\7D\2\2\u00c2\u00c3\7\b")
        buf.write(u"\2\2\u00c3\u00c4\5$\23\2\u00c4\u00c5\7\t\2\2\u00c5\33")
        buf.write(u"\3\2\2\2\u00c6\u00c7\5X-\2\u00c7\u00c8\7\13\2\2\u00c8")
        buf.write(u"\u00c9\5\36\20\2\u00c9\u00ca\7\f\2\2\u00ca\u00cb\5 \21")
        buf.write(u"\2\u00cb\u00cc\7\r\2\2\u00cc\35\3\2\2\2\u00cd\u00d0\7")
        buf.write(u"$\2\2\u00ce\u00d0\5\"\22\2\u00cf\u00cd\3\2\2\2\u00cf")
        buf.write(u"\u00ce\3\2\2\2\u00d0\37\3\2\2\2\u00d1\u00d4\7$\2\2\u00d2")
        buf.write(u"\u00d4\5\"\22\2\u00d3\u00d1\3\2\2\2\u00d3\u00d2\3\2\2")
        buf.write(u"\2\u00d4!\3\2\2\2\u00d5\u00d6\b\22\1\2\u00d6\u00d7\7")
        buf.write(u"\63\2\2\u00d7\u00e8\5\"\22\t\u00d8\u00e8\7$\2\2\u00d9")
        buf.write(u"\u00e8\5:\36\2\u00da\u00e8\t\3\2\2\u00db\u00e8\5\32\16")
        buf.write(u"\2\u00dc\u00e8\5\34\17\2\u00dd\u00de\7!\2\2\u00de\u00df")
        buf.write(u"\7\b\2\2\u00df\u00e0\5$\23\2\u00e0\u00e1\7\t\2\2\u00e1")
        buf.write(u"\u00e8\3\2\2\2\u00e2\u00e3\7\b\2\2\u00e3\u00e4\5\"\22")
        buf.write(u"\2\u00e4\u00e5\7\t\2\2\u00e5\u00e8\3\2\2\2\u00e6\u00e8")
        buf.write(u"\5X-\2\u00e7\u00d5\3\2\2\2\u00e7\u00d8\3\2\2\2\u00e7")
        buf.write(u"\u00d9\3\2\2\2\u00e7\u00da\3\2\2\2\u00e7\u00db\3\2\2")
        buf.write(u"\2\u00e7\u00dc\3\2\2\2\u00e7\u00dd\3\2\2\2\u00e7\u00e2")
        buf.write(u"\3\2\2\2\u00e7\u00e6\3\2\2\2\u00e8\u00f7\3\2\2\2\u00e9")
        buf.write(u"\u00ea\f\17\2\2\u00ea\u00eb\t\4\2\2\u00eb\u00f6\5\"\22")
        buf.write(u"\20\u00ec\u00ed\f\16\2\2\u00ed\u00ee\t\5\2\2\u00ee\u00f6")
        buf.write(u"\5\"\22\17\u00ef\u00f0\f\r\2\2\u00f0\u00f1\t\6\2\2\u00f1")
        buf.write(u"\u00f6\5\"\22\16\u00f2\u00f3\f\f\2\2\u00f3\u00f4\t\7")
        buf.write(u"\2\2\u00f4\u00f6\5\"\22\r\u00f5\u00e9\3\2\2\2\u00f5\u00ec")
        buf.write(u"\3\2\2\2\u00f5\u00ef\3\2\2\2\u00f5\u00f2\3\2\2\2\u00f6")
        buf.write(u"\u00f9\3\2\2\2\u00f7\u00f5\3\2\2\2\u00f7\u00f8\3\2\2")
        buf.write(u"\2\u00f8#\3\2\2\2\u00f9\u00f7\3\2\2\2\u00fa\u00ff\5\"")
        buf.write(u"\22\2\u00fb\u00fc\7\"\2\2\u00fc\u00fe\5\"\22\2\u00fd")
        buf.write(u"\u00fb\3\2\2\2\u00fe\u0101\3\2\2\2\u00ff\u00fd\3\2\2")
        buf.write(u"\2\u00ff\u0100\3\2\2\2\u0100\u0103\3\2\2\2\u0101\u00ff")
        buf.write(u"\3\2\2\2\u0102\u00fa\3\2\2\2\u0102\u0103\3\2\2\2\u0103")
        buf.write(u"%\3\2\2\2\u0104\u0105\t\b\2\2\u0105\u0106\5X-\2\u0106")
        buf.write(u"\u0107\7\5\2\2\u0107\'\3\2\2\2\u0108\u010c\7(\2\2\u0109")
        buf.write(u"\u010b\5\60\31\2\u010a\u0109\3\2\2\2\u010b\u010e\3\2")
        buf.write(u"\2\2\u010c\u010a\3\2\2\2\u010c\u010d\3\2\2\2\u010d)\3")
        buf.write(u"\2\2\2\u010e\u010c\3\2\2\2\u010f\u0113\7)\2\2\u0110\u0112")
        buf.write(u"\5\62\32\2\u0111\u0110\3\2\2\2\u0112\u0115\3\2\2\2\u0113")
        buf.write(u"\u0111\3\2\2\2\u0113\u0114\3\2\2\2\u0114+\3\2\2\2\u0115")
        buf.write(u"\u0113\3\2\2\2\u0116\u011b\5.\30\2\u0117\u0118\7\5\2")
        buf.write(u"\2\u0118\u011a\5.\30\2\u0119\u0117\3\2\2\2\u011a\u011d")
        buf.write(u"\3\2\2\2\u011b\u0119\3\2\2\2\u011b\u011c\3\2\2\2\u011c")
        buf.write(u"\u011f\3\2\2\2\u011d\u011b\3\2\2\2\u011e\u0116\3\2\2")
        buf.write(u"\2\u011e\u011f\3\2\2\2\u011f-\3\2\2\2\u0120\u0125\5\64")
        buf.write(u"\33\2\u0121\u0122\7\"\2\2\u0122\u0124\5\64\33\2\u0123")
        buf.write(u"\u0121\3\2\2\2\u0124\u0127\3\2\2\2\u0125\u0123\3\2\2")
        buf.write(u"\2\u0125\u0126\3\2\2\2\u0126\u0129\3\2\2\2\u0127\u0125")
        buf.write(u"\3\2\2\2\u0128\u0120\3\2\2\2\u0128\u0129\3\2\2\2\u0129")
        buf.write(u"\u012a\3\2\2\2\u012a\u012b\7\n\2\2\u012b\u012c\5\66\34")
        buf.write(u"\2\u012c/\3\2\2\2\u012d\u0132\5\64\33\2\u012e\u012f\7")
        buf.write(u"\"\2\2\u012f\u0131\5\64\33\2\u0130\u012e\3\2\2\2\u0131")
        buf.write(u"\u0134\3\2\2\2\u0132\u0130\3\2\2\2\u0132\u0133\3\2\2")
        buf.write(u"\2\u0133\u0136\3\2\2\2\u0134\u0132\3\2\2\2\u0135\u012d")
        buf.write(u"\3\2\2\2\u0135\u0136\3\2\2\2\u0136\u0137\3\2\2\2\u0137")
        buf.write(u"\u0138\7\n\2\2\u0138\u0139\5\66\34\2\u0139\u013a\7\5")
        buf.write(u"\2\2\u013a\61\3\2\2\2\u013b\u013c\5\64\33\2\u013c\u013d")
        buf.write(u"\7\26\2\2\u013d\u013e\7$\2\2\u013e\u013f\7\5\2\2\u013f")
        buf.write(u"\63\3\2\2\2\u0140\u0141\7D\2\2\u0141\65\3\2\2\2\u0142")
        buf.write(u"\u0144\58\35\2\u0143\u0142\3\2\2\2\u0143\u0144\3\2\2")
        buf.write(u"\2\u0144\u0145\3\2\2\2\u0145\u0146\7D\2\2\u0146\67\3")
        buf.write(u"\2\2\2\u0147\u0148\7%\2\2\u0148\u0149\7\13\2\2\u0149")
        buf.write(u"\u014a\7$\2\2\u014a\u014b\7\r\2\2\u014b\u014c\7&\2\2")
        buf.write(u"\u014c9\3\2\2\2\u014d\u014e\7\13\2\2\u014e\u014f\5\"")
        buf.write(u"\22\2\u014f\u0150\t\t\2\2\u0150\u0151\5\"\22\2\u0151")
        buf.write(u"\u0152\7\r\2\2\u0152;\3\2\2\2\u0153\u0154\5> \2\u0154")
        buf.write(u"=\3\2\2\2\u0155\u0156\7*\2\2\u0156\u0157\5\"\22\2\u0157")
        buf.write(u"\u0158\7,\2\2\u0158\u015c\5\26\f\2\u0159\u015d\7\5\2")
        buf.write(u"\2\u015a\u015b\7+\2\2\u015b\u015d\5D#\2\u015c\u0159\3")
        buf.write(u"\2\2\2\u015c\u015a\3\2\2\2\u015c\u015d\3\2\2\2\u015d")
        buf.write(u"?\3\2\2\2\u015e\u015f\7\65\2\2\u015f\u0160\7\b\2\2\u0160")
        buf.write(u"\u0161\5X-\2\u0161\u0162\7\"\2\2\u0162\u0163\5X-\2\u0163")
        buf.write(u"\u0164\7\t\2\2\u0164\u0165\7\60\2\2\u0165\u0166\5\24")
        buf.write(u"\13\2\u0166A\3\2\2\2\u0167\u0168\7\66\2\2\u0168\u0169")
        buf.write(u"\7\b\2\2\u0169\u016a\5\"\22\2\u016a\u016b\7\t\2\2\u016b")
        buf.write(u"\u016c\7\60\2\2\u016c\u016d\5\24\13\2\u016dC\3\2\2\2")
        buf.write(u"\u016e\u016f\5\24\13\2\u016fE\3\2\2\2\u0170\u0173\7\60")
        buf.write(u"\2\2\u0171\u0172\7;\2\2\u0172\u0174\5\"\22\2\u0173\u0171")
        buf.write(u"\3\2\2\2\u0173\u0174\3\2\2\2\u0174\u0175\3\2\2\2\u0175")
        buf.write(u"\u0176\5\24\13\2\u0176\u0179\7<\2\2\u0177\u0178\7;\2")
        buf.write(u"\2\u0178\u017a\5\"\22\2\u0179\u0177\3\2\2\2\u0179\u017a")
        buf.write(u"\3\2\2\2\u017aG\3\2\2\2\u017b\u017c\7\'\2\2\u017c\u017d")
        buf.write(u"\5\"\22\2\u017d\u017f\7&\2\2\u017e\u0180\5J&\2\u017f")
        buf.write(u"\u017e\3\2\2\2\u0180\u0181\3\2\2\2\u0181\u017f\3\2\2")
        buf.write(u"\2\u0181\u0182\3\2\2\2\u0182\u0183\3\2\2\2\u0183\u0184")
        buf.write(u"\7@\2\2\u0184\u0185\7\5\2\2\u0185I\3\2\2\2\u0186\u0187")
        buf.write(u"\7$\2\2\u0187\u0188\7\n\2\2\u0188\u0189\5\22\n\2\u0189")
        buf.write(u"\u018a\7\5\2\2\u018aK\3\2\2\2\u018b\u018c\7\62\2\2\u018c")
        buf.write(u"\u018d\7D\2\2\u018d\u018e\7A\2\2\u018e\u018f\5\"\22\2")
        buf.write(u"\u018f\u0190\7\61\2\2\u0190\u0191\5\"\22\2\u0191\u0194")
        buf.write(u"\7\60\2\2\u0192\u0195\5\22\n\2\u0193\u0195\5\24\13\2")
        buf.write(u"\u0194\u0192\3\2\2\2\u0194\u0193\3\2\2\2\u0195M\3\2\2")
        buf.write(u"\2\u0196\u0197\7\64\2\2\u0197O\3\2\2\2\u0198\u019a\7")
        buf.write(u"=\2\2\u0199\u019b\5\"\22\2\u019a\u0199\3\2\2\2\u019a")
        buf.write(u"\u019b\3\2\2\2\u019bQ\3\2\2\2\u019c\u019d\5X-\2\u019d")
        buf.write(u"\u019e\5X-\2\u019e\u01a0\5T+\2\u019f\u01a1\5(\25\2\u01a0")
        buf.write(u"\u019f\3\2\2\2\u01a0\u01a1\3\2\2\2\u01a1\u01a2\3\2\2")
        buf.write(u"\2\u01a2\u01a3\5\22\n\2\u01a3S\3\2\2\2\u01a4\u01a8\7")
        buf.write(u"\b\2\2\u01a5\u01a7\5V,\2\u01a6\u01a5\3\2\2\2\u01a7\u01aa")
        buf.write(u"\3\2\2\2\u01a8\u01a6\3\2\2\2\u01a8\u01a9\3\2\2\2\u01a9")
        buf.write(u"\u01ab\3\2\2\2\u01aa\u01a8\3\2\2\2\u01ab\u01ac\7\t\2")
        buf.write(u"\2\u01acU\3\2\2\2\u01ad\u01ae\5\66\34\2\u01ae\u01b1\5")
        buf.write(u"X-\2\u01af\u01b0\7A\2\2\u01b0\u01b2\5\"\22\2\u01b1\u01af")
        buf.write(u"\3\2\2\2\u01b1\u01b2\3\2\2\2\u01b2W\3\2\2\2\u01b3\u01b5")
        buf.write(u"\7D\2\2\u01b4\u01b6\5^\60\2\u01b5\u01b4\3\2\2\2\u01b5")
        buf.write(u"\u01b6\3\2\2\2\u01b6\u01ba\3\2\2\2\u01b7\u01b9\5\\/\2")
        buf.write(u"\u01b8\u01b7\3\2\2\2\u01b9\u01bc\3\2\2\2\u01ba\u01b8")
        buf.write(u"\3\2\2\2\u01ba\u01bb\3\2\2\2\u01bb\u01be\3\2\2\2\u01bc")
        buf.write(u"\u01ba\3\2\2\2\u01bd\u01bf\5Z.\2\u01be\u01bd\3\2\2\2")
        buf.write(u"\u01be\u01bf\3\2\2\2\u01bfY\3\2\2\2\u01c0\u01c1\7\n\2")
        buf.write(u"\2\u01c1\u01c2\5X-\2\u01c2[\3\2\2\2\u01c3\u01c4\7\4\2")
        buf.write(u"\2\u01c4\u01c6\7D\2\2\u01c5\u01c7\5^\60\2\u01c6\u01c5")
        buf.write(u"\3\2\2\2\u01c6\u01c7\3\2\2\2\u01c7]\3\2\2\2\u01c8\u01c9")
        buf.write(u"\7\13\2\2\u01c9\u01ca\5\"\22\2\u01ca\u01cb\7\r\2\2\u01cb")
        buf.write(u"_\3\2\2\2\u01cc\u01cd\t\n\2\2\u01cda\3\2\2\2)chmp\u0081")
        buf.write(u"\u0084\u009d\u00a7\u00b0\u00bb\u00cf\u00d3\u00e7\u00f5")
        buf.write(u"\u00f7\u00ff\u0102\u010c\u0113\u011b\u011e\u0125\u0128")
        buf.write(u"\u0132\u0135\u0143\u015c\u0173\u0179\u0181\u0194\u019a")
        buf.write(u"\u01a0\u01a8\u01b1\u01b5\u01ba\u01be\u01c6")
        return buf.getvalue()


class CalcParser ( Parser ):

    grammarFileName = "java-escape"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ u"<INVALID>", u"'FORM'", u"'.'", u"';'", u"'XMLConverter'", 
                     u"'EFXML'", u"'('", u"')'", u"':'", u"'['", u"'..'", 
                     u"']'", u"'/'", u"'*'", u"'+'", u"'-'", u"'>'", u"'<'", 
                     u"'<='", u"'>='", u"'='", u"'<>'", u"'=='", u"'True'", 
                     u"'TRUE'", u"'false'", u"'FALSE'", u"'False'", u"'Checked'", 
                     u"'checked'", u"'CHECKED'", u"'MAX'", u"','", u"'Form'", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"':='", u"'?='", u"'#='" ]

    symbolicNames = [ u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"LITERAL", u"ARRAY", 
                      u"OF", u"CASE", u"VAR", u"CONSTANT", u"IF", u"ELSE", 
                      u"THEN", u"SECTION", u"PROCEDURE", u"FUNCTION", u"DO", 
                      u"TO", u"FOR", u"NOT", u"BREAK", u"WITHFORMS", u"WITHNEWTAG", 
                      u"IN", u"AND", u"OR", u"FORM", u"WHILE", u"LOOP", 
                      u"RETURN", u"WS", u"BEGIN", u"END", u"LET", u"ALTLET", 
                      u"CRAZYLET", u"ID", u"INT", u"STRING", u"TRUE", u"FALSE", 
                      u"CHECKED", u"COMMENT", u"LINE_COMMENT" ]

    RULE_calcfile = 0
    RULE_presection = 1
    RULE_formset = 2
    RULE_converter = 3
    RULE_form = 4
    RULE_section = 5
    RULE_functionDecl = 6
    RULE_procedureDecl = 7
    RULE_block = 8
    RULE_stmt = 9
    RULE_open_stmt = 10
    RULE_assign = 11
    RULE_call = 12
    RULE_multicopy_accum = 13
    RULE_start_index = 14
    RULE_end_index = 15
    RULE_expr = 16
    RULE_argList = 17
    RULE_formdecl = 18
    RULE_vardecl = 19
    RULE_constdecl = 20
    RULE_typeDeclList = 21
    RULE_typeDecl = 22
    RULE_declList = 23
    RULE_constdeclList = 24
    RULE_varDecl = 25
    RULE_r_type = 26
    RULE_arrayDecl = 27
    RULE_rangeExpr = 28
    RULE_ctrlStruct = 29
    RULE_ifStruct = 30
    RULE_withForms = 31
    RULE_withNewTag = 32
    RULE_elseStruct = 33
    RULE_loopStruct = 34
    RULE_caseStuct = 35
    RULE_caseStmt = 36
    RULE_forloopstruct = 37
    RULE_breakStruct = 38
    RULE_ret = 39
    RULE_function = 40
    RULE_formParList = 41
    RULE_formPar = 42
    RULE_full_id = 43
    RULE_child_id = 44
    RULE_sub_id = 45
    RULE_array_index = 46
    RULE_boolean = 47

    ruleNames =  [ u"calcfile", u"presection", u"formset", u"converter", 
                   u"form", u"section", u"functionDecl", u"procedureDecl", 
                   u"block", u"stmt", u"open_stmt", u"assign", u"call", 
                   u"multicopy_accum", u"start_index", u"end_index", u"expr", 
                   u"argList", u"formdecl", u"vardecl", u"constdecl", u"typeDeclList", 
                   u"typeDecl", u"declList", u"constdeclList", u"varDecl", 
                   u"r_type", u"arrayDecl", u"rangeExpr", u"ctrlStruct", 
                   u"ifStruct", u"withForms", u"withNewTag", u"elseStruct", 
                   u"loopStruct", u"caseStuct", u"caseStmt", u"forloopstruct", 
                   u"breakStruct", u"ret", u"function", u"formParList", 
                   u"formPar", u"full_id", u"child_id", u"sub_id", u"array_index", 
                   u"boolean" ]

    EOF = Token.EOF
    T__0=1
    T__1=2
    T__2=3
    T__3=4
    T__4=5
    T__5=6
    T__6=7
    T__7=8
    T__8=9
    T__9=10
    T__10=11
    T__11=12
    T__12=13
    T__13=14
    T__14=15
    T__15=16
    T__16=17
    T__17=18
    T__18=19
    T__19=20
    T__20=21
    T__21=22
    T__22=23
    T__23=24
    T__24=25
    T__25=26
    T__26=27
    T__27=28
    T__28=29
    T__29=30
    T__30=31
    T__31=32
    T__32=33
    LITERAL=34
    ARRAY=35
    OF=36
    CASE=37
    VAR=38
    CONSTANT=39
    IF=40
    ELSE=41
    THEN=42
    SECTION=43
    PROCEDURE=44
    FUNCTION=45
    DO=46
    TO=47
    FOR=48
    NOT=49
    BREAK=50
    WITHFORMS=51
    WITHNEWTAG=52
    IN=53
    AND=54
    OR=55
    FORM=56
    WHILE=57
    LOOP=58
    RETURN=59
    WS=60
    BEGIN=61
    END=62
    LET=63
    ALTLET=64
    CRAZYLET=65
    ID=66
    INT=67
    STRING=68
    TRUE=69
    FALSE=70
    CHECKED=71
    COMMENT=72
    LINE_COMMENT=73

    def __init__(self, input):
        super(CalcParser, self).__init__(input)
        self.checkVersion("4.5")
        self._interp = ParserATNSimulator(self, self.atn, self.decisionsToDFA, self.sharedContextCache)
        self._predicates = None



    class CalcfileContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.CalcfileContext, self).__init__(parent, invokingState)
            self.parser = parser

        def presection(self):
            return self.getTypedRuleContext(CalcParser.PresectionContext,0)


        def section(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.SectionContext)
            else:
                return self.getTypedRuleContext(CalcParser.SectionContext,i)


        def getRuleIndex(self):
            return CalcParser.RULE_calcfile

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterCalcfile(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitCalcfile(self)




    def calcfile(self):

        localctx = CalcParser.CalcfileContext(self, self._ctx, self.state)
        self.enterRule(localctx, 0, self.RULE_calcfile)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 97
            _la = self._input.LA(1)
            if _la==CalcParser.T__3:
                self.state = 96
                self.presection()


            self.state = 102
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==CalcParser.PROCEDURE or _la==CalcParser.FUNCTION:
                self.state = 99
                self.section()
                self.state = 104
                self._errHandler.sync(self)
                _la = self._input.LA(1)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class PresectionContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.PresectionContext, self).__init__(parent, invokingState)
            self.parser = parser

        def converter(self):
            return self.getTypedRuleContext(CalcParser.ConverterContext,0)


        def constdecl(self):
            return self.getTypedRuleContext(CalcParser.ConstdeclContext,0)


        def vardecl(self):
            return self.getTypedRuleContext(CalcParser.VardeclContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_presection

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterPresection(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitPresection(self)




    def presection(self):

        localctx = CalcParser.PresectionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 2, self.RULE_presection)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 105
            self.converter()
            self.state = 107
            _la = self._input.LA(1)
            if _la==CalcParser.CONSTANT:
                self.state = 106
                self.constdecl()


            self.state = 110
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 109
                self.vardecl()


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class FormsetContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.FormsetContext, self).__init__(parent, invokingState)
            self.parser = parser

        def ID(self):
            return self.getToken(CalcParser.ID, 0)

        def form(self):
            return self.getTypedRuleContext(CalcParser.FormContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_formset

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterFormset(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitFormset(self)




    def formset(self):

        localctx = CalcParser.FormsetContext(self, self._ctx, self.state)
        self.enterRule(localctx, 4, self.RULE_formset)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 112
            self.match(CalcParser.T__0)
            self.state = 113
            self.match(CalcParser.ID)
            self.state = 114
            self.match(CalcParser.T__1)
            self.state = 115
            self.form()
            self.state = 116
            self.match(CalcParser.T__2)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class ConverterContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.ConverterContext, self).__init__(parent, invokingState)
            self.parser = parser

        def ID(self):
            return self.getToken(CalcParser.ID, 0)

        def getRuleIndex(self):
            return CalcParser.RULE_converter

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterConverter(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitConverter(self)




    def converter(self):

        localctx = CalcParser.ConverterContext(self, self._ctx, self.state)
        self.enterRule(localctx, 6, self.RULE_converter)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 118
            self.match(CalcParser.T__3)
            self.state = 119
            self.match(CalcParser.ID)
            self.state = 120
            self.match(CalcParser.T__4)
            self.state = 121
            self.match(CalcParser.T__2)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class FormContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.FormContext, self).__init__(parent, invokingState)
            self.parser = parser

        def full_id(self):
            return self.getTypedRuleContext(CalcParser.Full_idContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_form

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterForm(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitForm(self)




    def form(self):

        localctx = CalcParser.FormContext(self, self._ctx, self.state)
        self.enterRule(localctx, 8, self.RULE_form)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 123
            self.full_id()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class SectionContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.SectionContext, self).__init__(parent, invokingState)
            self.parser = parser

        def stmt(self):
            return self.getTypedRuleContext(CalcParser.StmtContext,0)


        def procedureDecl(self):
            return self.getTypedRuleContext(CalcParser.ProcedureDeclContext,0)


        def functionDecl(self):
            return self.getTypedRuleContext(CalcParser.FunctionDeclContext,0)


        def vardecl(self):
            return self.getTypedRuleContext(CalcParser.VardeclContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_section

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterSection(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitSection(self)




    def section(self):

        localctx = CalcParser.SectionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 10, self.RULE_section)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 127
            token = self._input.LA(1)
            if token in [CalcParser.PROCEDURE]:
                self.state = 125
                self.procedureDecl()

            elif token in [CalcParser.FUNCTION]:
                self.state = 126
                self.functionDecl()

            else:
                raise NoViableAltException(self)

            self.state = 130
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 129
                self.vardecl()


            self.state = 132
            self.stmt()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class FunctionDeclContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.FunctionDeclContext, self).__init__(parent, invokingState)
            self.parser = parser

        def FUNCTION(self):
            return self.getToken(CalcParser.FUNCTION, 0)

        def ID(self):
            return self.getToken(CalcParser.ID, 0)

        def typeDeclList(self):
            return self.getTypedRuleContext(CalcParser.TypeDeclListContext,0)


        def r_type(self):
            return self.getTypedRuleContext(CalcParser.R_typeContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_functionDecl

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterFunctionDecl(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitFunctionDecl(self)




    def functionDecl(self):

        localctx = CalcParser.FunctionDeclContext(self, self._ctx, self.state)
        self.enterRule(localctx, 12, self.RULE_functionDecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 134
            self.match(CalcParser.FUNCTION)
            self.state = 135
            self.match(CalcParser.ID)
            self.state = 136
            self.match(CalcParser.T__5)
            self.state = 137
            self.typeDeclList()
            self.state = 138
            self.match(CalcParser.T__6)
            self.state = 139
            self.match(CalcParser.T__7)
            self.state = 140
            self.r_type()
            self.state = 141
            self.match(CalcParser.T__2)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class ProcedureDeclContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.ProcedureDeclContext, self).__init__(parent, invokingState)
            self.parser = parser

        def PROCEDURE(self):
            return self.getToken(CalcParser.PROCEDURE, 0)

        def ID(self):
            return self.getToken(CalcParser.ID, 0)

        def typeDeclList(self):
            return self.getTypedRuleContext(CalcParser.TypeDeclListContext,0)


        def formdecl(self):
            return self.getTypedRuleContext(CalcParser.FormdeclContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_procedureDecl

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterProcedureDecl(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitProcedureDecl(self)




    def procedureDecl(self):

        localctx = CalcParser.ProcedureDeclContext(self, self._ctx, self.state)
        self.enterRule(localctx, 14, self.RULE_procedureDecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 143
            self.match(CalcParser.PROCEDURE)
            self.state = 144
            self.match(CalcParser.ID)
            self.state = 145
            self.match(CalcParser.T__5)
            self.state = 146
            self.typeDeclList()
            self.state = 147
            self.match(CalcParser.T__6)
            self.state = 148
            self.match(CalcParser.T__2)
            self.state = 149
            self.formdecl()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class BlockContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.BlockContext, self).__init__(parent, invokingState)
            self.parser = parser

        def BEGIN(self):
            return self.getToken(CalcParser.BEGIN, 0)

        def END(self):
            return self.getToken(CalcParser.END, 0)

        def stmt(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.StmtContext)
            else:
                return self.getTypedRuleContext(CalcParser.StmtContext,i)


        def getRuleIndex(self):
            return CalcParser.RULE_block

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterBlock(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitBlock(self)




    def block(self):

        localctx = CalcParser.BlockContext(self, self._ctx, self.state)
        self.enterRule(localctx, 16, self.RULE_block)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 151
            self.match(CalcParser.BEGIN)
            self.state = 155
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while ((((_la - 37)) & ~0x3f) == 0 and ((1 << (_la - 37)) & ((1 << (CalcParser.CASE - 37)) | (1 << (CalcParser.IF - 37)) | (1 << (CalcParser.FOR - 37)) | (1 << (CalcParser.BREAK - 37)) | (1 << (CalcParser.WITHFORMS - 37)) | (1 << (CalcParser.WITHNEWTAG - 37)) | (1 << (CalcParser.RETURN - 37)) | (1 << (CalcParser.BEGIN - 37)) | (1 << (CalcParser.ID - 37)))) != 0):
                self.state = 152
                self.stmt()
                self.state = 157
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 158
            self.match(CalcParser.END)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class StmtContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.StmtContext, self).__init__(parent, invokingState)
            self.parser = parser

        def assign(self):
            return self.getTypedRuleContext(CalcParser.AssignContext,0)


        def call(self):
            return self.getTypedRuleContext(CalcParser.CallContext,0)


        def ret(self):
            return self.getTypedRuleContext(CalcParser.RetContext,0)


        def block(self):
            return self.getTypedRuleContext(CalcParser.BlockContext,0)


        def breakStruct(self):
            return self.getTypedRuleContext(CalcParser.BreakStructContext,0)


        def forloopstruct(self):
            return self.getTypedRuleContext(CalcParser.ForloopstructContext,0)


        def ifStruct(self):
            return self.getTypedRuleContext(CalcParser.IfStructContext,0)


        def caseStuct(self):
            return self.getTypedRuleContext(CalcParser.CaseStuctContext,0)


        def withForms(self):
            return self.getTypedRuleContext(CalcParser.WithFormsContext,0)


        def withNewTag(self):
            return self.getTypedRuleContext(CalcParser.WithNewTagContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_stmt

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterStmt(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitStmt(self)




    def stmt(self):

        localctx = CalcParser.StmtContext(self, self._ctx, self.state)
        self.enterRule(localctx, 18, self.RULE_stmt)
        try:
            self.state = 174
            token = self._input.LA(1)
            if token in [CalcParser.BREAK, CalcParser.RETURN, CalcParser.BEGIN, CalcParser.ID]:
                self.enterOuterAlt(localctx, 1)
                self.state = 165
                la_ = self._interp.adaptivePredict(self._input,7,self._ctx)
                if la_ == 1:
                    self.state = 160
                    self.assign()
                    pass

                elif la_ == 2:
                    self.state = 161
                    self.call()
                    pass

                elif la_ == 3:
                    self.state = 162
                    self.ret()
                    pass

                elif la_ == 4:
                    self.state = 163
                    self.block()
                    pass

                elif la_ == 5:
                    self.state = 164
                    self.breakStruct()
                    pass


                self.state = 167
                self.match(CalcParser.T__2)

            elif token in [CalcParser.FOR]:
                self.enterOuterAlt(localctx, 2)
                self.state = 169
                self.forloopstruct()

            elif token in [CalcParser.IF]:
                self.enterOuterAlt(localctx, 3)
                self.state = 170
                self.ifStruct()

            elif token in [CalcParser.CASE]:
                self.enterOuterAlt(localctx, 4)
                self.state = 171
                self.caseStuct()

            elif token in [CalcParser.WITHFORMS]:
                self.enterOuterAlt(localctx, 5)
                self.state = 172
                self.withForms()

            elif token in [CalcParser.WITHNEWTAG]:
                self.enterOuterAlt(localctx, 6)
                self.state = 173
                self.withNewTag()

            else:
                raise NoViableAltException(self)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class Open_stmtContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.Open_stmtContext, self).__init__(parent, invokingState)
            self.parser = parser

        def assign(self):
            return self.getTypedRuleContext(CalcParser.AssignContext,0)


        def call(self):
            return self.getTypedRuleContext(CalcParser.CallContext,0)


        def ret(self):
            return self.getTypedRuleContext(CalcParser.RetContext,0)


        def block(self):
            return self.getTypedRuleContext(CalcParser.BlockContext,0)


        def caseStuct(self):
            return self.getTypedRuleContext(CalcParser.CaseStuctContext,0)


        def forloopstruct(self):
            return self.getTypedRuleContext(CalcParser.ForloopstructContext,0)


        def ifStruct(self):
            return self.getTypedRuleContext(CalcParser.IfStructContext,0)


        def withForms(self):
            return self.getTypedRuleContext(CalcParser.WithFormsContext,0)


        def withNewTag(self):
            return self.getTypedRuleContext(CalcParser.WithNewTagContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_open_stmt

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterOpen_stmt(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitOpen_stmt(self)




    def open_stmt(self):

        localctx = CalcParser.Open_stmtContext(self, self._ctx, self.state)
        self.enterRule(localctx, 20, self.RULE_open_stmt)
        try:
            self.state = 185
            la_ = self._interp.adaptivePredict(self._input,9,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 176
                self.assign()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 177
                self.call()
                pass

            elif la_ == 3:
                self.enterOuterAlt(localctx, 3)
                self.state = 178
                self.ret()
                pass

            elif la_ == 4:
                self.enterOuterAlt(localctx, 4)
                self.state = 179
                self.block()
                pass

            elif la_ == 5:
                self.enterOuterAlt(localctx, 5)
                self.state = 180
                self.caseStuct()
                pass

            elif la_ == 6:
                self.enterOuterAlt(localctx, 6)
                self.state = 181
                self.forloopstruct()
                pass

            elif la_ == 7:
                self.enterOuterAlt(localctx, 7)
                self.state = 182
                self.ifStruct()
                pass

            elif la_ == 8:
                self.enterOuterAlt(localctx, 8)
                self.state = 183
                self.withForms()
                pass

            elif la_ == 9:
                self.enterOuterAlt(localctx, 9)
                self.state = 184
                self.withNewTag()
                pass


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class AssignContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.AssignContext, self).__init__(parent, invokingState)
            self.parser = parser

        def full_id(self):
            return self.getTypedRuleContext(CalcParser.Full_idContext,0)


        def expr(self):
            return self.getTypedRuleContext(CalcParser.ExprContext,0)


        def LET(self):
            return self.getToken(CalcParser.LET, 0)

        def ALTLET(self):
            return self.getToken(CalcParser.ALTLET, 0)

        def CRAZYLET(self):
            return self.getToken(CalcParser.CRAZYLET, 0)

        def getRuleIndex(self):
            return CalcParser.RULE_assign

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterAssign(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitAssign(self)




    def assign(self):

        localctx = CalcParser.AssignContext(self, self._ctx, self.state)
        self.enterRule(localctx, 22, self.RULE_assign)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 187
            self.full_id()
            self.state = 188
            _la = self._input.LA(1)
            if not(((((_la - 63)) & ~0x3f) == 0 and ((1 << (_la - 63)) & ((1 << (CalcParser.LET - 63)) | (1 << (CalcParser.ALTLET - 63)) | (1 << (CalcParser.CRAZYLET - 63)))) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self.consume()
            self.state = 189
            self.expr(0)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class CallContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.CallContext, self).__init__(parent, invokingState)
            self.parser = parser

        def ID(self):
            return self.getToken(CalcParser.ID, 0)

        def argList(self):
            return self.getTypedRuleContext(CalcParser.ArgListContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_call

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterCall(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitCall(self)




    def call(self):

        localctx = CalcParser.CallContext(self, self._ctx, self.state)
        self.enterRule(localctx, 24, self.RULE_call)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 191
            self.match(CalcParser.ID)
            self.state = 192
            self.match(CalcParser.T__5)
            self.state = 193
            self.argList()
            self.state = 194
            self.match(CalcParser.T__6)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class Multicopy_accumContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.Multicopy_accumContext, self).__init__(parent, invokingState)
            self.parser = parser

        def full_id(self):
            return self.getTypedRuleContext(CalcParser.Full_idContext,0)


        def start_index(self):
            return self.getTypedRuleContext(CalcParser.Start_indexContext,0)


        def end_index(self):
            return self.getTypedRuleContext(CalcParser.End_indexContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_multicopy_accum

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterMulticopy_accum(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitMulticopy_accum(self)




    def multicopy_accum(self):

        localctx = CalcParser.Multicopy_accumContext(self, self._ctx, self.state)
        self.enterRule(localctx, 26, self.RULE_multicopy_accum)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 196
            self.full_id()
            self.state = 197
            self.match(CalcParser.T__8)
            self.state = 198
            self.start_index()
            self.state = 199
            self.match(CalcParser.T__9)
            self.state = 200
            self.end_index()
            self.state = 201
            self.match(CalcParser.T__10)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class Start_indexContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.Start_indexContext, self).__init__(parent, invokingState)
            self.parser = parser

        def LITERAL(self):
            return self.getToken(CalcParser.LITERAL, 0)

        def expr(self):
            return self.getTypedRuleContext(CalcParser.ExprContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_start_index

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterStart_index(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitStart_index(self)




    def start_index(self):

        localctx = CalcParser.Start_indexContext(self, self._ctx, self.state)
        self.enterRule(localctx, 28, self.RULE_start_index)
        try:
            self.state = 205
            la_ = self._interp.adaptivePredict(self._input,10,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 203
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 204
                self.expr(0)
                pass


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class End_indexContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.End_indexContext, self).__init__(parent, invokingState)
            self.parser = parser

        def LITERAL(self):
            return self.getToken(CalcParser.LITERAL, 0)

        def expr(self):
            return self.getTypedRuleContext(CalcParser.ExprContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_end_index

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterEnd_index(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitEnd_index(self)




    def end_index(self):

        localctx = CalcParser.End_indexContext(self, self._ctx, self.state)
        self.enterRule(localctx, 30, self.RULE_end_index)
        try:
            self.state = 209
            la_ = self._interp.adaptivePredict(self._input,11,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 207
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 208
                self.expr(0)
                pass


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class ExprContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.ExprContext, self).__init__(parent, invokingState)
            self.parser = parser


        def getRuleIndex(self):
            return CalcParser.RULE_expr

     
        def copyFrom(self, ctx):
            super(CalcParser.ExprContext, self).copyFrom(ctx)


    class LogicContext(ExprContext):

        def __init__(self, parser, ctx): # actually a CalcParser.ExprContext)
            super(CalcParser.LogicContext, self).__init__(parser)
            self.op = None # Token
            self.copyFrom(ctx)

        def expr(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.ExprContext)
            else:
                return self.getTypedRuleContext(CalcParser.ExprContext,i)

        def AND(self):
            return self.getToken(CalcParser.AND, 0)
        def OR(self):
            return self.getToken(CalcParser.OR, 0)

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterLogic(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitLogic(self)


    class RangeContext(ExprContext):

        def __init__(self, parser, ctx): # actually a CalcParser.ExprContext)
            super(CalcParser.RangeContext, self).__init__(parser)
            self.copyFrom(ctx)

        def rangeExpr(self):
            return self.getTypedRuleContext(CalcParser.RangeExprContext,0)


        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterRange(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitRange(self)


    class ParensContext(ExprContext):

        def __init__(self, parser, ctx): # actually a CalcParser.ExprContext)
            super(CalcParser.ParensContext, self).__init__(parser)
            self.copyFrom(ctx)

        def expr(self):
            return self.getTypedRuleContext(CalcParser.ExprContext,0)


        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterParens(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitParens(self)


    class BoolContext(ExprContext):

        def __init__(self, parser, ctx): # actually a CalcParser.ExprContext)
            super(CalcParser.BoolContext, self).__init__(parser)
            self.copyFrom(ctx)


        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterBool(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitBool(self)


    class LiteralContext(ExprContext):

        def __init__(self, parser, ctx): # actually a CalcParser.ExprContext)
            super(CalcParser.LiteralContext, self).__init__(parser)
            self.copyFrom(ctx)

        def LITERAL(self):
            return self.getToken(CalcParser.LITERAL, 0)

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterLiteral(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitLiteral(self)


    class DivMulContext(ExprContext):

        def __init__(self, parser, ctx): # actually a CalcParser.ExprContext)
            super(CalcParser.DivMulContext, self).__init__(parser)
            self.op = None # Token
            self.copyFrom(ctx)

        def expr(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.ExprContext)
            else:
                return self.getTypedRuleContext(CalcParser.ExprContext,i)


        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterDivMul(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitDivMul(self)


    class MultiCopyAccumulateContext(ExprContext):

        def __init__(self, parser, ctx): # actually a CalcParser.ExprContext)
            super(CalcParser.MultiCopyAccumulateContext, self).__init__(parser)
            self.copyFrom(ctx)

        def multicopy_accum(self):
            return self.getTypedRuleContext(CalcParser.Multicopy_accumContext,0)


        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterMultiCopyAccumulate(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitMultiCopyAccumulate(self)


    class AddSubContext(ExprContext):

        def __init__(self, parser, ctx): # actually a CalcParser.ExprContext)
            super(CalcParser.AddSubContext, self).__init__(parser)
            self.op = None # Token
            self.copyFrom(ctx)

        def expr(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.ExprContext)
            else:
                return self.getTypedRuleContext(CalcParser.ExprContext,i)


        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterAddSub(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitAddSub(self)


    class PredicateContext(ExprContext):

        def __init__(self, parser, ctx): # actually a CalcParser.ExprContext)
            super(CalcParser.PredicateContext, self).__init__(parser)
            self.op = None # Token
            self.copyFrom(ctx)

        def expr(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.ExprContext)
            else:
                return self.getTypedRuleContext(CalcParser.ExprContext,i)

        def IN(self):
            return self.getToken(CalcParser.IN, 0)

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterPredicate(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitPredicate(self)


    class MaxContext(ExprContext):

        def __init__(self, parser, ctx): # actually a CalcParser.ExprContext)
            super(CalcParser.MaxContext, self).__init__(parser)
            self.copyFrom(ctx)

        def argList(self):
            return self.getTypedRuleContext(CalcParser.ArgListContext,0)


        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterMax(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitMax(self)


    class VarRefContext(ExprContext):

        def __init__(self, parser, ctx): # actually a CalcParser.ExprContext)
            super(CalcParser.VarRefContext, self).__init__(parser)
            self.copyFrom(ctx)

        def full_id(self):
            return self.getTypedRuleContext(CalcParser.Full_idContext,0)


        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterVarRef(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitVarRef(self)


    class FunctionCallContext(ExprContext):

        def __init__(self, parser, ctx): # actually a CalcParser.ExprContext)
            super(CalcParser.FunctionCallContext, self).__init__(parser)
            self.copyFrom(ctx)

        def call(self):
            return self.getTypedRuleContext(CalcParser.CallContext,0)


        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterFunctionCall(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitFunctionCall(self)


    class NotContext(ExprContext):

        def __init__(self, parser, ctx): # actually a CalcParser.ExprContext)
            super(CalcParser.NotContext, self).__init__(parser)
            self.copyFrom(ctx)

        def NOT(self):
            return self.getToken(CalcParser.NOT, 0)
        def expr(self):
            return self.getTypedRuleContext(CalcParser.ExprContext,0)


        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterNot(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitNot(self)



    def expr(self, _p=0):
        _parentctx = self._ctx
        _parentState = self.state
        localctx = CalcParser.ExprContext(self, self._ctx, _parentState)
        _prevctx = localctx
        _startState = 32
        self.enterRecursionRule(localctx, 32, self.RULE_expr, _p)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 229
            la_ = self._interp.adaptivePredict(self._input,12,self._ctx)
            if la_ == 1:
                localctx = CalcParser.NotContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx

                self.state = 212
                self.match(CalcParser.NOT)
                self.state = 213
                self.expr(7)
                pass

            elif la_ == 2:
                localctx = CalcParser.LiteralContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 214
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 3:
                localctx = CalcParser.RangeContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 215
                self.rangeExpr()
                pass

            elif la_ == 4:
                localctx = CalcParser.BoolContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 216
                _la = self._input.LA(1)
                if not((((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.T__22) | (1 << CalcParser.T__23) | (1 << CalcParser.T__24) | (1 << CalcParser.T__25) | (1 << CalcParser.T__26) | (1 << CalcParser.T__27) | (1 << CalcParser.T__28) | (1 << CalcParser.T__29))) != 0)):
                    self._errHandler.recoverInline(self)
                else:
                    self.consume()
                pass

            elif la_ == 5:
                localctx = CalcParser.FunctionCallContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 217
                self.call()
                pass

            elif la_ == 6:
                localctx = CalcParser.MultiCopyAccumulateContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 218
                self.multicopy_accum()
                pass

            elif la_ == 7:
                localctx = CalcParser.MaxContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 219
                self.match(CalcParser.T__30)
                self.state = 220
                self.match(CalcParser.T__5)
                self.state = 221
                self.argList()
                self.state = 222
                self.match(CalcParser.T__6)
                pass

            elif la_ == 8:
                localctx = CalcParser.ParensContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 224
                self.match(CalcParser.T__5)
                self.state = 225
                self.expr(0)
                self.state = 226
                self.match(CalcParser.T__6)
                pass

            elif la_ == 9:
                localctx = CalcParser.VarRefContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 228
                self.full_id()
                pass


            self._ctx.stop = self._input.LT(-1)
            self.state = 245
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,14,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    self.state = 243
                    la_ = self._interp.adaptivePredict(self._input,13,self._ctx)
                    if la_ == 1:
                        localctx = CalcParser.DivMulContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 231
                        if not self.precpred(self._ctx, 13):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 13)")
                        self.state = 232
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.T__11 or _la==CalcParser.T__12):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 233
                        self.expr(14)
                        pass

                    elif la_ == 2:
                        localctx = CalcParser.AddSubContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 234
                        if not self.precpred(self._ctx, 12):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 12)")
                        self.state = 235
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.T__13 or _la==CalcParser.T__14):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 236
                        self.expr(13)
                        pass

                    elif la_ == 3:
                        localctx = CalcParser.LogicContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 237
                        if not self.precpred(self._ctx, 11):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 11)")
                        self.state = 238
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.AND or _la==CalcParser.OR):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 239
                        self.expr(12)
                        pass

                    elif la_ == 4:
                        localctx = CalcParser.PredicateContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 240
                        if not self.precpred(self._ctx, 10):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 10)")
                        self.state = 241
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not((((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.T__15) | (1 << CalcParser.T__16) | (1 << CalcParser.T__17) | (1 << CalcParser.T__18) | (1 << CalcParser.T__19) | (1 << CalcParser.T__20) | (1 << CalcParser.T__21) | (1 << CalcParser.IN))) != 0)):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 242
                        self.expr(11)
                        pass

             
                self.state = 247
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,14,self._ctx)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.unrollRecursionContexts(_parentctx)
        return localctx

    class ArgListContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.ArgListContext, self).__init__(parent, invokingState)
            self.parser = parser

        def expr(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.ExprContext)
            else:
                return self.getTypedRuleContext(CalcParser.ExprContext,i)


        def getRuleIndex(self):
            return CalcParser.RULE_argList

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterArgList(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitArgList(self)




    def argList(self):

        localctx = CalcParser.ArgListContext(self, self._ctx, self.state)
        self.enterRule(localctx, 34, self.RULE_argList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 256
            _la = self._input.LA(1)
            if ((((_la - 6)) & ~0x3f) == 0 and ((1 << (_la - 6)) & ((1 << (CalcParser.T__5 - 6)) | (1 << (CalcParser.T__8 - 6)) | (1 << (CalcParser.T__22 - 6)) | (1 << (CalcParser.T__23 - 6)) | (1 << (CalcParser.T__24 - 6)) | (1 << (CalcParser.T__25 - 6)) | (1 << (CalcParser.T__26 - 6)) | (1 << (CalcParser.T__27 - 6)) | (1 << (CalcParser.T__28 - 6)) | (1 << (CalcParser.T__29 - 6)) | (1 << (CalcParser.T__30 - 6)) | (1 << (CalcParser.LITERAL - 6)) | (1 << (CalcParser.NOT - 6)) | (1 << (CalcParser.ID - 6)))) != 0):
                self.state = 248
                self.expr(0)
                self.state = 253
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__31:
                    self.state = 249
                    self.match(CalcParser.T__31)
                    self.state = 250
                    self.expr(0)
                    self.state = 255
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class FormdeclContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.FormdeclContext, self).__init__(parent, invokingState)
            self.parser = parser

        def full_id(self):
            return self.getTypedRuleContext(CalcParser.Full_idContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_formdecl

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterFormdecl(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitFormdecl(self)




    def formdecl(self):

        localctx = CalcParser.FormdeclContext(self, self._ctx, self.state)
        self.enterRule(localctx, 36, self.RULE_formdecl)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 258
            _la = self._input.LA(1)
            if not(_la==CalcParser.T__0 or _la==CalcParser.T__32):
                self._errHandler.recoverInline(self)
            else:
                self.consume()
            self.state = 259
            self.full_id()
            self.state = 260
            self.match(CalcParser.T__2)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class VardeclContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.VardeclContext, self).__init__(parent, invokingState)
            self.parser = parser

        def VAR(self):
            return self.getToken(CalcParser.VAR, 0)

        def declList(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.DeclListContext)
            else:
                return self.getTypedRuleContext(CalcParser.DeclListContext,i)


        def getRuleIndex(self):
            return CalcParser.RULE_vardecl

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterVardecl(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitVardecl(self)




    def vardecl(self):

        localctx = CalcParser.VardeclContext(self, self._ctx, self.state)
        self.enterRule(localctx, 38, self.RULE_vardecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 262
            self.match(CalcParser.VAR)
            self.state = 266
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,17,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    self.state = 263
                    self.declList() 
                self.state = 268
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,17,self._ctx)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class ConstdeclContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.ConstdeclContext, self).__init__(parent, invokingState)
            self.parser = parser

        def CONSTANT(self):
            return self.getToken(CalcParser.CONSTANT, 0)

        def constdeclList(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.ConstdeclListContext)
            else:
                return self.getTypedRuleContext(CalcParser.ConstdeclListContext,i)


        def getRuleIndex(self):
            return CalcParser.RULE_constdecl

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterConstdecl(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitConstdecl(self)




    def constdecl(self):

        localctx = CalcParser.ConstdeclContext(self, self._ctx, self.state)
        self.enterRule(localctx, 40, self.RULE_constdecl)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 269
            self.match(CalcParser.CONSTANT)
            self.state = 273
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==CalcParser.ID:
                self.state = 270
                self.constdeclList()
                self.state = 275
                self._errHandler.sync(self)
                _la = self._input.LA(1)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class TypeDeclListContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.TypeDeclListContext, self).__init__(parent, invokingState)
            self.parser = parser

        def typeDecl(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.TypeDeclContext)
            else:
                return self.getTypedRuleContext(CalcParser.TypeDeclContext,i)


        def getRuleIndex(self):
            return CalcParser.RULE_typeDeclList

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterTypeDeclList(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitTypeDeclList(self)




    def typeDeclList(self):

        localctx = CalcParser.TypeDeclListContext(self, self._ctx, self.state)
        self.enterRule(localctx, 42, self.RULE_typeDeclList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 284
            _la = self._input.LA(1)
            if _la==CalcParser.T__7 or _la==CalcParser.ID:
                self.state = 276
                self.typeDecl()
                self.state = 281
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__2:
                    self.state = 277
                    self.match(CalcParser.T__2)
                    self.state = 278
                    self.typeDecl()
                    self.state = 283
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class TypeDeclContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.TypeDeclContext, self).__init__(parent, invokingState)
            self.parser = parser

        def r_type(self):
            return self.getTypedRuleContext(CalcParser.R_typeContext,0)


        def varDecl(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.VarDeclContext)
            else:
                return self.getTypedRuleContext(CalcParser.VarDeclContext,i)


        def getRuleIndex(self):
            return CalcParser.RULE_typeDecl

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterTypeDecl(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitTypeDecl(self)




    def typeDecl(self):

        localctx = CalcParser.TypeDeclContext(self, self._ctx, self.state)
        self.enterRule(localctx, 44, self.RULE_typeDecl)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 294
            _la = self._input.LA(1)
            if _la==CalcParser.ID:
                self.state = 286
                self.varDecl()
                self.state = 291
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__31:
                    self.state = 287
                    self.match(CalcParser.T__31)
                    self.state = 288
                    self.varDecl()
                    self.state = 293
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



            self.state = 296
            self.match(CalcParser.T__7)
            self.state = 297
            self.r_type()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class DeclListContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.DeclListContext, self).__init__(parent, invokingState)
            self.parser = parser

        def r_type(self):
            return self.getTypedRuleContext(CalcParser.R_typeContext,0)


        def varDecl(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.VarDeclContext)
            else:
                return self.getTypedRuleContext(CalcParser.VarDeclContext,i)


        def getRuleIndex(self):
            return CalcParser.RULE_declList

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterDeclList(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitDeclList(self)




    def declList(self):

        localctx = CalcParser.DeclListContext(self, self._ctx, self.state)
        self.enterRule(localctx, 46, self.RULE_declList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 307
            _la = self._input.LA(1)
            if _la==CalcParser.ID:
                self.state = 299
                self.varDecl()
                self.state = 304
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__31:
                    self.state = 300
                    self.match(CalcParser.T__31)
                    self.state = 301
                    self.varDecl()
                    self.state = 306
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



            self.state = 309
            self.match(CalcParser.T__7)
            self.state = 310
            self.r_type()
            self.state = 311
            self.match(CalcParser.T__2)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class ConstdeclListContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.ConstdeclListContext, self).__init__(parent, invokingState)
            self.parser = parser

        def varDecl(self):
            return self.getTypedRuleContext(CalcParser.VarDeclContext,0)


        def LITERAL(self):
            return self.getToken(CalcParser.LITERAL, 0)

        def getRuleIndex(self):
            return CalcParser.RULE_constdeclList

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterConstdeclList(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitConstdeclList(self)




    def constdeclList(self):

        localctx = CalcParser.ConstdeclListContext(self, self._ctx, self.state)
        self.enterRule(localctx, 48, self.RULE_constdeclList)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 313
            self.varDecl()
            self.state = 314
            self.match(CalcParser.T__19)
            self.state = 315
            self.match(CalcParser.LITERAL)
            self.state = 316
            self.match(CalcParser.T__2)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class VarDeclContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.VarDeclContext, self).__init__(parent, invokingState)
            self.parser = parser

        def ID(self):
            return self.getToken(CalcParser.ID, 0)

        def getRuleIndex(self):
            return CalcParser.RULE_varDecl

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterVarDecl(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitVarDecl(self)




    def varDecl(self):

        localctx = CalcParser.VarDeclContext(self, self._ctx, self.state)
        self.enterRule(localctx, 50, self.RULE_varDecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 318
            self.match(CalcParser.ID)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class R_typeContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.R_typeContext, self).__init__(parent, invokingState)
            self.parser = parser

        def ID(self):
            return self.getToken(CalcParser.ID, 0)

        def arrayDecl(self):
            return self.getTypedRuleContext(CalcParser.ArrayDeclContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_r_type

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterR_type(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitR_type(self)




    def r_type(self):

        localctx = CalcParser.R_typeContext(self, self._ctx, self.state)
        self.enterRule(localctx, 52, self.RULE_r_type)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 321
            _la = self._input.LA(1)
            if _la==CalcParser.ARRAY:
                self.state = 320
                self.arrayDecl()


            self.state = 323
            self.match(CalcParser.ID)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class ArrayDeclContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.ArrayDeclContext, self).__init__(parent, invokingState)
            self.parser = parser

        def ARRAY(self):
            return self.getToken(CalcParser.ARRAY, 0)

        def LITERAL(self):
            return self.getToken(CalcParser.LITERAL, 0)

        def OF(self):
            return self.getToken(CalcParser.OF, 0)

        def getRuleIndex(self):
            return CalcParser.RULE_arrayDecl

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterArrayDecl(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitArrayDecl(self)




    def arrayDecl(self):

        localctx = CalcParser.ArrayDeclContext(self, self._ctx, self.state)
        self.enterRule(localctx, 54, self.RULE_arrayDecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 325
            self.match(CalcParser.ARRAY)
            self.state = 326
            self.match(CalcParser.T__8)
            self.state = 327
            self.match(CalcParser.LITERAL)
            self.state = 328
            self.match(CalcParser.T__10)
            self.state = 329
            self.match(CalcParser.OF)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class RangeExprContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.RangeExprContext, self).__init__(parent, invokingState)
            self.parser = parser

        def expr(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.ExprContext)
            else:
                return self.getTypedRuleContext(CalcParser.ExprContext,i)


        def getRuleIndex(self):
            return CalcParser.RULE_rangeExpr

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterRangeExpr(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitRangeExpr(self)




    def rangeExpr(self):

        localctx = CalcParser.RangeExprContext(self, self._ctx, self.state)
        self.enterRule(localctx, 56, self.RULE_rangeExpr)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 331
            self.match(CalcParser.T__8)
            self.state = 332
            self.expr(0)
            self.state = 333
            _la = self._input.LA(1)
            if not(_la==CalcParser.T__9 or _la==CalcParser.T__31):
                self._errHandler.recoverInline(self)
            else:
                self.consume()
            self.state = 334
            self.expr(0)
            self.state = 335
            self.match(CalcParser.T__10)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class CtrlStructContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.CtrlStructContext, self).__init__(parent, invokingState)
            self.parser = parser

        def ifStruct(self):
            return self.getTypedRuleContext(CalcParser.IfStructContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_ctrlStruct

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterCtrlStruct(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitCtrlStruct(self)




    def ctrlStruct(self):

        localctx = CalcParser.CtrlStructContext(self, self._ctx, self.state)
        self.enterRule(localctx, 58, self.RULE_ctrlStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 337
            self.ifStruct()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class IfStructContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.IfStructContext, self).__init__(parent, invokingState)
            self.parser = parser

        def IF(self):
            return self.getToken(CalcParser.IF, 0)

        def expr(self):
            return self.getTypedRuleContext(CalcParser.ExprContext,0)


        def THEN(self):
            return self.getToken(CalcParser.THEN, 0)

        def open_stmt(self):
            return self.getTypedRuleContext(CalcParser.Open_stmtContext,0)


        def ELSE(self):
            return self.getToken(CalcParser.ELSE, 0)

        def elseStruct(self):
            return self.getTypedRuleContext(CalcParser.ElseStructContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_ifStruct

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterIfStruct(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitIfStruct(self)




    def ifStruct(self):

        localctx = CalcParser.IfStructContext(self, self._ctx, self.state)
        self.enterRule(localctx, 60, self.RULE_ifStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 339
            self.match(CalcParser.IF)
            self.state = 340
            self.expr(0)
            self.state = 341
            self.match(CalcParser.THEN)
            self.state = 342
            self.open_stmt()
            self.state = 346
            la_ = self._interp.adaptivePredict(self._input,26,self._ctx)
            if la_ == 1:
                self.state = 343
                self.match(CalcParser.T__2)

            elif la_ == 2:
                self.state = 344
                self.match(CalcParser.ELSE)
                self.state = 345
                self.elseStruct()


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class WithFormsContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.WithFormsContext, self).__init__(parent, invokingState)
            self.parser = parser

        def WITHFORMS(self):
            return self.getToken(CalcParser.WITHFORMS, 0)

        def full_id(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.Full_idContext)
            else:
                return self.getTypedRuleContext(CalcParser.Full_idContext,i)


        def DO(self):
            return self.getToken(CalcParser.DO, 0)

        def stmt(self):
            return self.getTypedRuleContext(CalcParser.StmtContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_withForms

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterWithForms(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitWithForms(self)




    def withForms(self):

        localctx = CalcParser.WithFormsContext(self, self._ctx, self.state)
        self.enterRule(localctx, 62, self.RULE_withForms)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 348
            self.match(CalcParser.WITHFORMS)
            self.state = 349
            self.match(CalcParser.T__5)
            self.state = 350
            self.full_id()
            self.state = 351
            self.match(CalcParser.T__31)
            self.state = 352
            self.full_id()
            self.state = 353
            self.match(CalcParser.T__6)
            self.state = 354
            self.match(CalcParser.DO)
            self.state = 355
            self.stmt()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class WithNewTagContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.WithNewTagContext, self).__init__(parent, invokingState)
            self.parser = parser

        def WITHNEWTAG(self):
            return self.getToken(CalcParser.WITHNEWTAG, 0)

        def expr(self):
            return self.getTypedRuleContext(CalcParser.ExprContext,0)


        def DO(self):
            return self.getToken(CalcParser.DO, 0)

        def stmt(self):
            return self.getTypedRuleContext(CalcParser.StmtContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_withNewTag

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterWithNewTag(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitWithNewTag(self)




    def withNewTag(self):

        localctx = CalcParser.WithNewTagContext(self, self._ctx, self.state)
        self.enterRule(localctx, 64, self.RULE_withNewTag)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 357
            self.match(CalcParser.WITHNEWTAG)
            self.state = 358
            self.match(CalcParser.T__5)
            self.state = 359
            self.expr(0)
            self.state = 360
            self.match(CalcParser.T__6)
            self.state = 361
            self.match(CalcParser.DO)
            self.state = 362
            self.stmt()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class ElseStructContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.ElseStructContext, self).__init__(parent, invokingState)
            self.parser = parser

        def stmt(self):
            return self.getTypedRuleContext(CalcParser.StmtContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_elseStruct

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterElseStruct(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitElseStruct(self)




    def elseStruct(self):

        localctx = CalcParser.ElseStructContext(self, self._ctx, self.state)
        self.enterRule(localctx, 66, self.RULE_elseStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 364
            self.stmt()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class LoopStructContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.LoopStructContext, self).__init__(parent, invokingState)
            self.parser = parser
            self.preCond = None # ExprContext
            self.postCond = None # ExprContext

        def DO(self):
            return self.getToken(CalcParser.DO, 0)

        def stmt(self):
            return self.getTypedRuleContext(CalcParser.StmtContext,0)


        def LOOP(self):
            return self.getToken(CalcParser.LOOP, 0)

        def WHILE(self, i=None):
            if i is None:
                return self.getTokens(CalcParser.WHILE)
            else:
                return self.getToken(CalcParser.WHILE, i)

        def expr(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.ExprContext)
            else:
                return self.getTypedRuleContext(CalcParser.ExprContext,i)


        def getRuleIndex(self):
            return CalcParser.RULE_loopStruct

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterLoopStruct(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitLoopStruct(self)




    def loopStruct(self):

        localctx = CalcParser.LoopStructContext(self, self._ctx, self.state)
        self.enterRule(localctx, 68, self.RULE_loopStruct)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 366
            self.match(CalcParser.DO)
            self.state = 369
            _la = self._input.LA(1)
            if _la==CalcParser.WHILE:
                self.state = 367
                self.match(CalcParser.WHILE)
                self.state = 368
                localctx.preCond = self.expr(0)


            self.state = 371
            self.stmt()
            self.state = 372
            self.match(CalcParser.LOOP)
            self.state = 375
            _la = self._input.LA(1)
            if _la==CalcParser.WHILE:
                self.state = 373
                self.match(CalcParser.WHILE)
                self.state = 374
                localctx.postCond = self.expr(0)


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class CaseStuctContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.CaseStuctContext, self).__init__(parent, invokingState)
            self.parser = parser

        def CASE(self):
            return self.getToken(CalcParser.CASE, 0)

        def expr(self):
            return self.getTypedRuleContext(CalcParser.ExprContext,0)


        def OF(self):
            return self.getToken(CalcParser.OF, 0)

        def END(self):
            return self.getToken(CalcParser.END, 0)

        def caseStmt(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.CaseStmtContext)
            else:
                return self.getTypedRuleContext(CalcParser.CaseStmtContext,i)


        def getRuleIndex(self):
            return CalcParser.RULE_caseStuct

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterCaseStuct(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitCaseStuct(self)




    def caseStuct(self):

        localctx = CalcParser.CaseStuctContext(self, self._ctx, self.state)
        self.enterRule(localctx, 70, self.RULE_caseStuct)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 377
            self.match(CalcParser.CASE)
            self.state = 378
            self.expr(0)
            self.state = 379
            self.match(CalcParser.OF)
            self.state = 381 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 380
                self.caseStmt()
                self.state = 383 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not (_la==CalcParser.LITERAL):
                    break

            self.state = 385
            self.match(CalcParser.END)
            self.state = 386
            self.match(CalcParser.T__2)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class CaseStmtContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.CaseStmtContext, self).__init__(parent, invokingState)
            self.parser = parser

        def LITERAL(self):
            return self.getToken(CalcParser.LITERAL, 0)

        def block(self):
            return self.getTypedRuleContext(CalcParser.BlockContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_caseStmt

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterCaseStmt(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitCaseStmt(self)




    def caseStmt(self):

        localctx = CalcParser.CaseStmtContext(self, self._ctx, self.state)
        self.enterRule(localctx, 72, self.RULE_caseStmt)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 388
            self.match(CalcParser.LITERAL)
            self.state = 389
            self.match(CalcParser.T__7)
            self.state = 390
            self.block()
            self.state = 391
            self.match(CalcParser.T__2)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class ForloopstructContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.ForloopstructContext, self).__init__(parent, invokingState)
            self.parser = parser

        def FOR(self):
            return self.getToken(CalcParser.FOR, 0)

        def ID(self):
            return self.getToken(CalcParser.ID, 0)

        def expr(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.ExprContext)
            else:
                return self.getTypedRuleContext(CalcParser.ExprContext,i)


        def TO(self):
            return self.getToken(CalcParser.TO, 0)

        def DO(self):
            return self.getToken(CalcParser.DO, 0)

        def block(self):
            return self.getTypedRuleContext(CalcParser.BlockContext,0)


        def stmt(self):
            return self.getTypedRuleContext(CalcParser.StmtContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_forloopstruct

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterForloopstruct(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitForloopstruct(self)




    def forloopstruct(self):

        localctx = CalcParser.ForloopstructContext(self, self._ctx, self.state)
        self.enterRule(localctx, 74, self.RULE_forloopstruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 393
            self.match(CalcParser.FOR)
            self.state = 394
            self.match(CalcParser.ID)
            self.state = 395
            self.match(CalcParser.LET)
            self.state = 396
            self.expr(0)
            self.state = 397
            self.match(CalcParser.TO)
            self.state = 398
            self.expr(0)
            self.state = 399
            self.match(CalcParser.DO)
            self.state = 402
            la_ = self._interp.adaptivePredict(self._input,30,self._ctx)
            if la_ == 1:
                self.state = 400
                self.block()
                pass

            elif la_ == 2:
                self.state = 401
                self.stmt()
                pass


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class BreakStructContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.BreakStructContext, self).__init__(parent, invokingState)
            self.parser = parser

        def BREAK(self):
            return self.getToken(CalcParser.BREAK, 0)

        def getRuleIndex(self):
            return CalcParser.RULE_breakStruct

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterBreakStruct(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitBreakStruct(self)




    def breakStruct(self):

        localctx = CalcParser.BreakStructContext(self, self._ctx, self.state)
        self.enterRule(localctx, 76, self.RULE_breakStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 404
            self.match(CalcParser.BREAK)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class RetContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.RetContext, self).__init__(parent, invokingState)
            self.parser = parser

        def RETURN(self):
            return self.getToken(CalcParser.RETURN, 0)

        def expr(self):
            return self.getTypedRuleContext(CalcParser.ExprContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_ret

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterRet(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitRet(self)




    def ret(self):

        localctx = CalcParser.RetContext(self, self._ctx, self.state)
        self.enterRule(localctx, 78, self.RULE_ret)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 406
            self.match(CalcParser.RETURN)
            self.state = 408
            la_ = self._interp.adaptivePredict(self._input,31,self._ctx)
            if la_ == 1:
                self.state = 407
                self.expr(0)


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class FunctionContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.FunctionContext, self).__init__(parent, invokingState)
            self.parser = parser
            self.retType = None # Full_idContext
            self.fnName = None # Full_idContext

        def formParList(self):
            return self.getTypedRuleContext(CalcParser.FormParListContext,0)


        def block(self):
            return self.getTypedRuleContext(CalcParser.BlockContext,0)


        def full_id(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.Full_idContext)
            else:
                return self.getTypedRuleContext(CalcParser.Full_idContext,i)


        def vardecl(self):
            return self.getTypedRuleContext(CalcParser.VardeclContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_function

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterFunction(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitFunction(self)




    def function(self):

        localctx = CalcParser.FunctionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 80, self.RULE_function)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 410
            localctx.retType = self.full_id()
            self.state = 411
            localctx.fnName = self.full_id()
            self.state = 412
            self.formParList()
            self.state = 414
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 413
                self.vardecl()


            self.state = 416
            self.block()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class FormParListContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.FormParListContext, self).__init__(parent, invokingState)
            self.parser = parser

        def formPar(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.FormParContext)
            else:
                return self.getTypedRuleContext(CalcParser.FormParContext,i)


        def getRuleIndex(self):
            return CalcParser.RULE_formParList

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterFormParList(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitFormParList(self)




    def formParList(self):

        localctx = CalcParser.FormParListContext(self, self._ctx, self.state)
        self.enterRule(localctx, 82, self.RULE_formParList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 418
            self.match(CalcParser.T__5)
            self.state = 422
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==CalcParser.ARRAY or _la==CalcParser.ID:
                self.state = 419
                self.formPar()
                self.state = 424
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 425
            self.match(CalcParser.T__6)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class FormParContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.FormParContext, self).__init__(parent, invokingState)
            self.parser = parser
            self.name = None # Full_idContext
            self.defaultVal = None # ExprContext

        def r_type(self):
            return self.getTypedRuleContext(CalcParser.R_typeContext,0)


        def full_id(self):
            return self.getTypedRuleContext(CalcParser.Full_idContext,0)


        def LET(self):
            return self.getToken(CalcParser.LET, 0)

        def expr(self):
            return self.getTypedRuleContext(CalcParser.ExprContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_formPar

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterFormPar(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitFormPar(self)




    def formPar(self):

        localctx = CalcParser.FormParContext(self, self._ctx, self.state)
        self.enterRule(localctx, 84, self.RULE_formPar)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 427
            self.r_type()
            self.state = 428
            localctx.name = self.full_id()
            self.state = 431
            _la = self._input.LA(1)
            if _la==CalcParser.LET:
                self.state = 429
                self.match(CalcParser.LET)
                self.state = 430
                localctx.defaultVal = self.expr(0)


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class Full_idContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.Full_idContext, self).__init__(parent, invokingState)
            self.parser = parser

        def ID(self):
            return self.getToken(CalcParser.ID, 0)

        def array_index(self):
            return self.getTypedRuleContext(CalcParser.Array_indexContext,0)


        def sub_id(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.Sub_idContext)
            else:
                return self.getTypedRuleContext(CalcParser.Sub_idContext,i)


        def child_id(self):
            return self.getTypedRuleContext(CalcParser.Child_idContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_full_id

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterFull_id(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitFull_id(self)




    def full_id(self):

        localctx = CalcParser.Full_idContext(self, self._ctx, self.state)
        self.enterRule(localctx, 86, self.RULE_full_id)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 433
            self.match(CalcParser.ID)
            self.state = 435
            la_ = self._interp.adaptivePredict(self._input,35,self._ctx)
            if la_ == 1:
                self.state = 434
                self.array_index()


            self.state = 440
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,36,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    self.state = 437
                    self.sub_id() 
                self.state = 442
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,36,self._ctx)

            self.state = 444
            la_ = self._interp.adaptivePredict(self._input,37,self._ctx)
            if la_ == 1:
                self.state = 443
                self.child_id()


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class Child_idContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.Child_idContext, self).__init__(parent, invokingState)
            self.parser = parser

        def full_id(self):
            return self.getTypedRuleContext(CalcParser.Full_idContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_child_id

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterChild_id(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitChild_id(self)




    def child_id(self):

        localctx = CalcParser.Child_idContext(self, self._ctx, self.state)
        self.enterRule(localctx, 88, self.RULE_child_id)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 446
            self.match(CalcParser.T__7)
            self.state = 447
            self.full_id()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class Sub_idContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.Sub_idContext, self).__init__(parent, invokingState)
            self.parser = parser

        def ID(self):
            return self.getToken(CalcParser.ID, 0)

        def array_index(self):
            return self.getTypedRuleContext(CalcParser.Array_indexContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_sub_id

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterSub_id(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitSub_id(self)




    def sub_id(self):

        localctx = CalcParser.Sub_idContext(self, self._ctx, self.state)
        self.enterRule(localctx, 90, self.RULE_sub_id)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 449
            self.match(CalcParser.T__1)
            self.state = 450
            self.match(CalcParser.ID)
            self.state = 452
            la_ = self._interp.adaptivePredict(self._input,38,self._ctx)
            if la_ == 1:
                self.state = 451
                self.array_index()


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class Array_indexContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.Array_indexContext, self).__init__(parent, invokingState)
            self.parser = parser

        def expr(self):
            return self.getTypedRuleContext(CalcParser.ExprContext,0)


        def getRuleIndex(self):
            return CalcParser.RULE_array_index

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterArray_index(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitArray_index(self)




    def array_index(self):

        localctx = CalcParser.Array_indexContext(self, self._ctx, self.state)
        self.enterRule(localctx, 92, self.RULE_array_index)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 454
            self.match(CalcParser.T__8)
            self.state = 455
            self.expr(0)
            self.state = 456
            self.match(CalcParser.T__10)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class BooleanContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.BooleanContext, self).__init__(parent, invokingState)
            self.parser = parser

        def TRUE(self):
            return self.getToken(CalcParser.TRUE, 0)

        def FALSE(self):
            return self.getToken(CalcParser.FALSE, 0)

        def CHECKED(self):
            return self.getToken(CalcParser.CHECKED, 0)

        def getRuleIndex(self):
            return CalcParser.RULE_boolean

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterBoolean(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitBoolean(self)




    def boolean(self):

        localctx = CalcParser.BooleanContext(self, self._ctx, self.state)
        self.enterRule(localctx, 94, self.RULE_boolean)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 458
            _la = self._input.LA(1)
            if not(((((_la - 69)) & ~0x3f) == 0 and ((1 << (_la - 69)) & ((1 << (CalcParser.TRUE - 69)) | (1 << (CalcParser.FALSE - 69)) | (1 << (CalcParser.CHECKED - 69)))) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx



    def sempred(self, localctx, ruleIndex, predIndex):
        if self._predicates == None:
            self._predicates = dict()
        self._predicates[16] = self.expr_sempred
        pred = self._predicates.get(ruleIndex, None)
        if pred is None:
            raise Exception("No predicate with index:" + str(ruleIndex))
        else:
            return pred(localctx, predIndex)

    def expr_sempred(self, localctx, predIndex):
            if predIndex == 0:
                return self.precpred(self._ctx, 13)
         

            if predIndex == 1:
                return self.precpred(self._ctx, 12)
         

            if predIndex == 2:
                return self.precpred(self._ctx, 11)
         

            if predIndex == 3:
                return self.precpred(self._ctx, 10)
         



