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
        buf.write(u"S\u01e0\4\2\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t")
        buf.write(u"\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t\13\4\f\t\f\4\r\t\r")
        buf.write(u"\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22\4")
        buf.write(u"\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30")
        buf.write(u"\t\30\4\31\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t")
        buf.write(u"\35\4\36\t\36\4\37\t\37\4 \t \4!\t!\4\"\t\"\4#\t#\4$")
        buf.write(u"\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4,\t")
        buf.write(u",\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\3\2")
        buf.write(u"\5\2f\n\2\3\2\7\2i\n\2\f\2\16\2l\13\2\3\3\3\3\5\3p\n")
        buf.write(u"\3\3\3\5\3s\n\3\3\4\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3")
        buf.write(u"\5\3\5\3\6\3\6\3\7\3\7\3\7\5\7\u0085\n\7\3\7\5\7\u0088")
        buf.write(u"\n\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\t")
        buf.write(u"\3\t\3\t\3\t\3\t\3\t\3\t\5\t\u009c\n\t\3\n\3\n\3\n\3")
        buf.write(u"\n\3\n\3\13\3\13\7\13\u00a5\n\13\f\13\16\13\u00a8\13")
        buf.write(u"\13\3\13\3\13\3\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r")
        buf.write(u"\3\r\3\r\3\r\5\r\u00b9\n\r\3\16\3\16\3\16\3\16\3\17\3")
        buf.write(u"\17\3\17\3\17\3\17\3\20\3\20\3\20\3\20\3\20\3\20\3\20")
        buf.write(u"\3\21\3\21\5\21\u00cd\n\21\3\22\3\22\5\22\u00d1\n\22")
        buf.write(u"\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3")
        buf.write(u"\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\5\23\u00e5\n\23")
        buf.write(u"\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3")
        buf.write(u"\23\3\23\3\23\3\23\3\23\7\23\u00f6\n\23\f\23\16\23\u00f9")
        buf.write(u"\13\23\3\24\3\24\3\24\7\24\u00fe\n\24\f\24\16\24\u0101")
        buf.write(u"\13\24\5\24\u0103\n\24\3\25\3\25\3\25\3\25\3\26\3\26")
        buf.write(u"\7\26\u010b\n\26\f\26\16\26\u010e\13\26\3\27\3\27\7\27")
        buf.write(u"\u0112\n\27\f\27\16\27\u0115\13\27\3\30\3\30\3\30\7\30")
        buf.write(u"\u011a\n\30\f\30\16\30\u011d\13\30\5\30\u011f\n\30\3")
        buf.write(u"\31\3\31\3\31\7\31\u0124\n\31\f\31\16\31\u0127\13\31")
        buf.write(u"\5\31\u0129\n\31\3\31\3\31\3\31\3\32\3\32\3\32\7\32\u0131")
        buf.write(u"\n\32\f\32\16\32\u0134\13\32\5\32\u0136\n\32\3\32\3\32")
        buf.write(u"\3\32\3\32\3\33\3\33\3\33\3\33\3\33\3\34\3\34\3\35\5")
        buf.write(u"\35\u0144\n\35\3\35\3\35\3\36\3\36\3\36\3\36\3\36\3\36")
        buf.write(u"\3\37\3\37\3\37\3\37\3\37\3\37\7\37\u0154\n\37\f\37\16")
        buf.write(u"\37\u0157\13\37\5\37\u0159\n\37\3\37\3\37\3 \3 \3!\3")
        buf.write(u"!\3!\3!\3!\3!\5!\u0165\n!\3\"\3\"\3\"\3\"\3\"\3\"\3\"")
        buf.write(u"\3\"\3\"\3#\3#\3#\3#\3#\3#\3#\3$\3$\3%\3%\3%\5%\u017c")
        buf.write(u"\n%\3%\3%\3%\3%\5%\u0182\n%\3&\3&\3&\3&\6&\u0188\n&\r")
        buf.write(u"&\16&\u0189\3&\3&\3\'\3\'\3\'\7\'\u0191\n\'\f\'\16\'")
        buf.write(u"\u0194\13\'\3\'\3\'\5\'\u0198\n\'\3\'\3\'\3(\3(\3(\3")
        buf.write(u"(\3(\3(\3(\3(\3(\3)\3)\3*\3*\5*\u01a9\n*\3+\3+\3+\3+")
        buf.write(u"\5+\u01af\n+\3+\3+\3,\3,\7,\u01b5\n,\f,\16,\u01b8\13")
        buf.write(u",\3,\3,\3-\3-\3-\3-\5-\u01c0\n-\3.\3.\5.\u01c4\n.\3.")
        buf.write(u"\7.\u01c7\n.\f.\16.\u01ca\13.\3.\5.\u01cd\n.\3/\3/\3")
        buf.write(u"/\3\60\3\60\3\60\5\60\u01d5\n\60\3\61\3\61\3\61\5\61")
        buf.write(u"\u01da\n\61\3\61\3\61\3\62\3\62\3\62\2\3$\63\2\4\6\b")
        buf.write(u"\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\66")
        buf.write(u"8:<>@BDFHJLNPRTVXZ\\^`b\2\13\3\2FH\3\2\32!\3\2\16\17")
        buf.write(u"\3\2\20\21\3\2;<\4\2\22\31::\4\2\3\3$$\3\2&\'\3\2OQ\u01eb")
        buf.write(u"\2e\3\2\2\2\4m\3\2\2\2\6t\3\2\2\2\bz\3\2\2\2\n\177\3")
        buf.write(u"\2\2\2\f\u0084\3\2\2\2\16\u008b\3\2\2\2\20\u0094\3\2")
        buf.write(u"\2\2\22\u009d\3\2\2\2\24\u00a2\3\2\2\2\26\u00ab\3\2\2")
        buf.write(u"\2\30\u00b8\3\2\2\2\32\u00ba\3\2\2\2\34\u00be\3\2\2\2")
        buf.write(u"\36\u00c3\3\2\2\2 \u00cc\3\2\2\2\"\u00d0\3\2\2\2$\u00e4")
        buf.write(u"\3\2\2\2&\u0102\3\2\2\2(\u0104\3\2\2\2*\u0108\3\2\2\2")
        buf.write(u",\u010f\3\2\2\2.\u011e\3\2\2\2\60\u0128\3\2\2\2\62\u0135")
        buf.write(u"\3\2\2\2\64\u013b\3\2\2\2\66\u0140\3\2\2\28\u0143\3\2")
        buf.write(u"\2\2:\u0147\3\2\2\2<\u014d\3\2\2\2>\u015c\3\2\2\2@\u015e")
        buf.write(u"\3\2\2\2B\u0166\3\2\2\2D\u016f\3\2\2\2F\u0176\3\2\2\2")
        buf.write(u"H\u0178\3\2\2\2J\u0183\3\2\2\2L\u0197\3\2\2\2N\u019b")
        buf.write(u"\3\2\2\2P\u01a4\3\2\2\2R\u01a6\3\2\2\2T\u01aa\3\2\2\2")
        buf.write(u"V\u01b2\3\2\2\2X\u01bb\3\2\2\2Z\u01c1\3\2\2\2\\\u01ce")
        buf.write(u"\3\2\2\2^\u01d1\3\2\2\2`\u01d6\3\2\2\2b\u01dd\3\2\2\2")
        buf.write(u"df\5\4\3\2ed\3\2\2\2ef\3\2\2\2fj\3\2\2\2gi\5\f\7\2hg")
        buf.write(u"\3\2\2\2il\3\2\2\2jh\3\2\2\2jk\3\2\2\2k\3\3\2\2\2lj\3")
        buf.write(u"\2\2\2mo\5\b\5\2np\5,\27\2on\3\2\2\2op\3\2\2\2pr\3\2")
        buf.write(u"\2\2qs\5*\26\2rq\3\2\2\2rs\3\2\2\2s\5\3\2\2\2tu\7\3\2")
        buf.write(u"\2uv\7I\2\2vw\7\4\2\2wx\5\n\6\2xy\7\5\2\2y\7\3\2\2\2")
        buf.write(u"z{\7\6\2\2{|\7I\2\2|}\7\7\2\2}~\7\5\2\2~\t\3\2\2\2\177")
        buf.write(u"\u0080\5Z.\2\u0080\13\3\2\2\2\u0081\u0085\5\20\t\2\u0082")
        buf.write(u"\u0085\5\16\b\2\u0083\u0085\5\22\n\2\u0084\u0081\3\2")
        buf.write(u"\2\2\u0084\u0082\3\2\2\2\u0084\u0083\3\2\2\2\u0085\u0087")
        buf.write(u"\3\2\2\2\u0086\u0088\5*\26\2\u0087\u0086\3\2\2\2\u0087")
        buf.write(u"\u0088\3\2\2\2\u0088\u0089\3\2\2\2\u0089\u008a\5\26\f")
        buf.write(u"\2\u008a\r\3\2\2\2\u008b\u008c\7\62\2\2\u008c\u008d\7")
        buf.write(u"I\2\2\u008d\u008e\7\b\2\2\u008e\u008f\5.\30\2\u008f\u0090")
        buf.write(u"\7\t\2\2\u0090\u0091\7\n\2\2\u0091\u0092\58\35\2\u0092")
        buf.write(u"\u0093\7\5\2\2\u0093\17\3\2\2\2\u0094\u0095\7\61\2\2")
        buf.write(u"\u0095\u0096\7I\2\2\u0096\u0097\7\b\2\2\u0097\u0098\5")
        buf.write(u".\30\2\u0098\u0099\7\t\2\2\u0099\u009b\7\5\2\2\u009a")
        buf.write(u"\u009c\5(\25\2\u009b\u009a\3\2\2\2\u009b\u009c\3\2\2")
        buf.write(u"\2\u009c\21\3\2\2\2\u009d\u009e\7>\2\2\u009e\u009f\7")
        buf.write(u"\b\2\2\u009f\u00a0\7\t\2\2\u00a0\u00a1\7\5\2\2\u00a1")
        buf.write(u"\23\3\2\2\2\u00a2\u00a6\7D\2\2\u00a3\u00a5\5\26\f\2\u00a4")
        buf.write(u"\u00a3\3\2\2\2\u00a5\u00a8\3\2\2\2\u00a6\u00a4\3\2\2")
        buf.write(u"\2\u00a6\u00a7\3\2\2\2\u00a7\u00a9\3\2\2\2\u00a8\u00a6")
        buf.write(u"\3\2\2\2\u00a9\u00aa\7E\2\2\u00aa\25\3\2\2\2\u00ab\u00ac")
        buf.write(u"\5\30\r\2\u00ac\u00ad\7\5\2\2\u00ad\27\3\2\2\2\u00ae")
        buf.write(u"\u00b9\5\32\16\2\u00af\u00b9\5\34\17\2\u00b0\u00b9\5")
        buf.write(u"R*\2\u00b1\u00b9\5\24\13\2\u00b2\u00b9\5J&\2\u00b3\u00b9")
        buf.write(u"\5N(\2\u00b4\u00b9\5@!\2\u00b5\u00b9\5B\"\2\u00b6\u00b9")
        buf.write(u"\5D#\2\u00b7\u00b9\5P)\2\u00b8\u00ae\3\2\2\2\u00b8\u00af")
        buf.write(u"\3\2\2\2\u00b8\u00b0\3\2\2\2\u00b8\u00b1\3\2\2\2\u00b8")
        buf.write(u"\u00b2\3\2\2\2\u00b8\u00b3\3\2\2\2\u00b8\u00b4\3\2\2")
        buf.write(u"\2\u00b8\u00b5\3\2\2\2\u00b8\u00b6\3\2\2\2\u00b8\u00b7")
        buf.write(u"\3\2\2\2\u00b9\31\3\2\2\2\u00ba\u00bb\5Z.\2\u00bb\u00bc")
        buf.write(u"\t\2\2\2\u00bc\u00bd\5$\23\2\u00bd\33\3\2\2\2\u00be\u00bf")
        buf.write(u"\7I\2\2\u00bf\u00c0\7\b\2\2\u00c0\u00c1\5&\24\2\u00c1")
        buf.write(u"\u00c2\7\t\2\2\u00c2\35\3\2\2\2\u00c3\u00c4\5Z.\2\u00c4")
        buf.write(u"\u00c5\7\13\2\2\u00c5\u00c6\5 \21\2\u00c6\u00c7\7\f\2")
        buf.write(u"\2\u00c7\u00c8\5\"\22\2\u00c8\u00c9\7\r\2\2\u00c9\37")
        buf.write(u"\3\2\2\2\u00ca\u00cd\7%\2\2\u00cb\u00cd\5$\23\2\u00cc")
        buf.write(u"\u00ca\3\2\2\2\u00cc\u00cb\3\2\2\2\u00cd!\3\2\2\2\u00ce")
        buf.write(u"\u00d1\7%\2\2\u00cf\u00d1\5$\23\2\u00d0\u00ce\3\2\2\2")
        buf.write(u"\u00d0\u00cf\3\2\2\2\u00d1#\3\2\2\2\u00d2\u00d3\b\23")
        buf.write(u"\1\2\u00d3\u00d4\7\66\2\2\u00d4\u00e5\5$\23\t\u00d5\u00e5")
        buf.write(u"\7%\2\2\u00d6\u00e5\5<\37\2\u00d7\u00e5\t\3\2\2\u00d8")
        buf.write(u"\u00e5\5\34\17\2\u00d9\u00e5\5\36\20\2\u00da\u00db\7")
        buf.write(u"\"\2\2\u00db\u00dc\7\b\2\2\u00dc\u00dd\5&\24\2\u00dd")
        buf.write(u"\u00de\7\t\2\2\u00de\u00e5\3\2\2\2\u00df\u00e0\7\b\2")
        buf.write(u"\2\u00e0\u00e1\5$\23\2\u00e1\u00e2\7\t\2\2\u00e2\u00e5")
        buf.write(u"\3\2\2\2\u00e3\u00e5\5Z.\2\u00e4\u00d2\3\2\2\2\u00e4")
        buf.write(u"\u00d5\3\2\2\2\u00e4\u00d6\3\2\2\2\u00e4\u00d7\3\2\2")
        buf.write(u"\2\u00e4\u00d8\3\2\2\2\u00e4\u00d9\3\2\2\2\u00e4\u00da")
        buf.write(u"\3\2\2\2\u00e4\u00df\3\2\2\2\u00e4\u00e3\3\2\2\2\u00e5")
        buf.write(u"\u00f7\3\2\2\2\u00e6\u00e7\f\20\2\2\u00e7\u00e8\t\4\2")
        buf.write(u"\2\u00e8\u00f6\5$\23\21\u00e9\u00ea\f\17\2\2\u00ea\u00eb")
        buf.write(u"\t\5\2\2\u00eb\u00f6\5$\23\20\u00ec\u00ed\f\16\2\2\u00ed")
        buf.write(u"\u00ee\7=\2\2\u00ee\u00f6\5$\23\17\u00ef\u00f0\f\r\2")
        buf.write(u"\2\u00f0\u00f1\t\6\2\2\u00f1\u00f6\5$\23\16\u00f2\u00f3")
        buf.write(u"\f\f\2\2\u00f3\u00f4\t\7\2\2\u00f4\u00f6\5$\23\r\u00f5")
        buf.write(u"\u00e6\3\2\2\2\u00f5\u00e9\3\2\2\2\u00f5\u00ec\3\2\2")
        buf.write(u"\2\u00f5\u00ef\3\2\2\2\u00f5\u00f2\3\2\2\2\u00f6\u00f9")
        buf.write(u"\3\2\2\2\u00f7\u00f5\3\2\2\2\u00f7\u00f8\3\2\2\2\u00f8")
        buf.write(u"%\3\2\2\2\u00f9\u00f7\3\2\2\2\u00fa\u00ff\5$\23\2\u00fb")
        buf.write(u"\u00fc\7#\2\2\u00fc\u00fe\5$\23\2\u00fd\u00fb\3\2\2\2")
        buf.write(u"\u00fe\u0101\3\2\2\2\u00ff\u00fd\3\2\2\2\u00ff\u0100")
        buf.write(u"\3\2\2\2\u0100\u0103\3\2\2\2\u0101\u00ff\3\2\2\2\u0102")
        buf.write(u"\u00fa\3\2\2\2\u0102\u0103\3\2\2\2\u0103\'\3\2\2\2\u0104")
        buf.write(u"\u0105\t\b\2\2\u0105\u0106\5Z.\2\u0106\u0107\7\5\2\2")
        buf.write(u"\u0107)\3\2\2\2\u0108\u010c\7+\2\2\u0109\u010b\5\62\32")
        buf.write(u"\2\u010a\u0109\3\2\2\2\u010b\u010e\3\2\2\2\u010c\u010a")
        buf.write(u"\3\2\2\2\u010c\u010d\3\2\2\2\u010d+\3\2\2\2\u010e\u010c")
        buf.write(u"\3\2\2\2\u010f\u0113\7,\2\2\u0110\u0112\5\64\33\2\u0111")
        buf.write(u"\u0110\3\2\2\2\u0112\u0115\3\2\2\2\u0113\u0111\3\2\2")
        buf.write(u"\2\u0113\u0114\3\2\2\2\u0114-\3\2\2\2\u0115\u0113\3\2")
        buf.write(u"\2\2\u0116\u011b\5\60\31\2\u0117\u0118\7\5\2\2\u0118")
        buf.write(u"\u011a\5\60\31\2\u0119\u0117\3\2\2\2\u011a\u011d\3\2")
        buf.write(u"\2\2\u011b\u0119\3\2\2\2\u011b\u011c\3\2\2\2\u011c\u011f")
        buf.write(u"\3\2\2\2\u011d\u011b\3\2\2\2\u011e\u0116\3\2\2\2\u011e")
        buf.write(u"\u011f\3\2\2\2\u011f/\3\2\2\2\u0120\u0125\5\66\34\2\u0121")
        buf.write(u"\u0122\7#\2\2\u0122\u0124\5\66\34\2\u0123\u0121\3\2\2")
        buf.write(u"\2\u0124\u0127\3\2\2\2\u0125\u0123\3\2\2\2\u0125\u0126")
        buf.write(u"\3\2\2\2\u0126\u0129\3\2\2\2\u0127\u0125\3\2\2\2\u0128")
        buf.write(u"\u0120\3\2\2\2\u0128\u0129\3\2\2\2\u0129\u012a\3\2\2")
        buf.write(u"\2\u012a\u012b\7\n\2\2\u012b\u012c\58\35\2\u012c\61\3")
        buf.write(u"\2\2\2\u012d\u0132\5\66\34\2\u012e\u012f\7#\2\2\u012f")
        buf.write(u"\u0131\5\66\34\2\u0130\u012e\3\2\2\2\u0131\u0134\3\2")
        buf.write(u"\2\2\u0132\u0130\3\2\2\2\u0132\u0133\3\2\2\2\u0133\u0136")
        buf.write(u"\3\2\2\2\u0134\u0132\3\2\2\2\u0135\u012d\3\2\2\2\u0135")
        buf.write(u"\u0136\3\2\2\2\u0136\u0137\3\2\2\2\u0137\u0138\7\n\2")
        buf.write(u"\2\u0138\u0139\58\35\2\u0139\u013a\7\5\2\2\u013a\63\3")
        buf.write(u"\2\2\2\u013b\u013c\5\66\34\2\u013c\u013d\7\26\2\2\u013d")
        buf.write(u"\u013e\7%\2\2\u013e\u013f\7\5\2\2\u013f\65\3\2\2\2\u0140")
        buf.write(u"\u0141\7I\2\2\u0141\67\3\2\2\2\u0142\u0144\5:\36\2\u0143")
        buf.write(u"\u0142\3\2\2\2\u0143\u0144\3\2\2\2\u0144\u0145\3\2\2")
        buf.write(u"\2\u0145\u0146\7I\2\2\u01469\3\2\2\2\u0147\u0148\t\t")
        buf.write(u"\2\2\u0148\u0149\7\13\2\2\u0149\u014a\7%\2\2\u014a\u014b")
        buf.write(u"\7\r\2\2\u014b\u014c\7(\2\2\u014c;\3\2\2\2\u014d\u014e")
        buf.write(u"\7\13\2\2\u014e\u0158\5$\23\2\u014f\u0150\7\f\2\2\u0150")
        buf.write(u"\u0159\5$\23\2\u0151\u0152\7#\2\2\u0152\u0154\5$\23\2")
        buf.write(u"\u0153\u0151\3\2\2\2\u0154\u0157\3\2\2\2\u0155\u0153")
        buf.write(u"\3\2\2\2\u0155\u0156\3\2\2\2\u0156\u0159\3\2\2\2\u0157")
        buf.write(u"\u0155\3\2\2\2\u0158\u014f\3\2\2\2\u0158\u0155\3\2\2")
        buf.write(u"\2\u0159\u015a\3\2\2\2\u015a\u015b\7\r\2\2\u015b=\3\2")
        buf.write(u"\2\2\u015c\u015d\5@!\2\u015d?\3\2\2\2\u015e\u015f\7-")
        buf.write(u"\2\2\u015f\u0160\5$\23\2\u0160\u0161\7/\2\2\u0161\u0164")
        buf.write(u"\5\30\r\2\u0162\u0163\7.\2\2\u0163\u0165\5\30\r\2\u0164")
        buf.write(u"\u0162\3\2\2\2\u0164\u0165\3\2\2\2\u0165A\3\2\2\2\u0166")
        buf.write(u"\u0167\78\2\2\u0167\u0168\7\b\2\2\u0168\u0169\5Z.\2\u0169")
        buf.write(u"\u016a\7#\2\2\u016a\u016b\5Z.\2\u016b\u016c\7\t\2\2\u016c")
        buf.write(u"\u016d\7\63\2\2\u016d\u016e\5\30\r\2\u016eC\3\2\2\2\u016f")
        buf.write(u"\u0170\79\2\2\u0170\u0171\7\b\2\2\u0171\u0172\5$\23\2")
        buf.write(u"\u0172\u0173\7\t\2\2\u0173\u0174\7\63\2\2\u0174\u0175")
        buf.write(u"\5\30\r\2\u0175E\3\2\2\2\u0176\u0177\5\26\f\2\u0177G")
        buf.write(u"\3\2\2\2\u0178\u017b\7\63\2\2\u0179\u017a\7@\2\2\u017a")
        buf.write(u"\u017c\5$\23\2\u017b\u0179\3\2\2\2\u017b\u017c\3\2\2")
        buf.write(u"\2\u017c\u017d\3\2\2\2\u017d\u017e\5\26\f\2\u017e\u0181")
        buf.write(u"\7A\2\2\u017f\u0180\7@\2\2\u0180\u0182\5$\23\2\u0181")
        buf.write(u"\u017f\3\2\2\2\u0181\u0182\3\2\2\2\u0182I\3\2\2\2\u0183")
        buf.write(u"\u0184\7)\2\2\u0184\u0185\5$\23\2\u0185\u0187\7(\2\2")
        buf.write(u"\u0186\u0188\5L\'\2\u0187\u0186\3\2\2\2\u0188\u0189\3")
        buf.write(u"\2\2\2\u0189\u0187\3\2\2\2\u0189\u018a\3\2\2\2\u018a")
        buf.write(u"\u018b\3\2\2\2\u018b\u018c\7E\2\2\u018cK\3\2\2\2\u018d")
        buf.write(u"\u0192\7%\2\2\u018e\u018f\7#\2\2\u018f\u0191\7%\2\2\u0190")
        buf.write(u"\u018e\3\2\2\2\u0191\u0194\3\2\2\2\u0192\u0190\3\2\2")
        buf.write(u"\2\u0192\u0193\3\2\2\2\u0193\u0195\3\2\2\2\u0194\u0192")
        buf.write(u"\3\2\2\2\u0195\u0198\7\n\2\2\u0196\u0198\7*\2\2\u0197")
        buf.write(u"\u018d\3\2\2\2\u0197\u0196\3\2\2\2\u0198\u0199\3\2\2")
        buf.write(u"\2\u0199\u019a\5\26\f\2\u019aM\3\2\2\2\u019b\u019c\7")
        buf.write(u"\65\2\2\u019c\u019d\7I\2\2\u019d\u019e\7F\2\2\u019e\u019f")
        buf.write(u"\5$\23\2\u019f\u01a0\7\64\2\2\u01a0\u01a1\5$\23\2\u01a1")
        buf.write(u"\u01a2\7\63\2\2\u01a2\u01a3\5\30\r\2\u01a3O\3\2\2\2\u01a4")
        buf.write(u"\u01a5\7\67\2\2\u01a5Q\3\2\2\2\u01a6\u01a8\7B\2\2\u01a7")
        buf.write(u"\u01a9\5$\23\2\u01a8\u01a7\3\2\2\2\u01a8\u01a9\3\2\2")
        buf.write(u"\2\u01a9S\3\2\2\2\u01aa\u01ab\5Z.\2\u01ab\u01ac\5Z.\2")
        buf.write(u"\u01ac\u01ae\5V,\2\u01ad\u01af\5*\26\2\u01ae\u01ad\3")
        buf.write(u"\2\2\2\u01ae\u01af\3\2\2\2\u01af\u01b0\3\2\2\2\u01b0")
        buf.write(u"\u01b1\5\24\13\2\u01b1U\3\2\2\2\u01b2\u01b6\7\b\2\2\u01b3")
        buf.write(u"\u01b5\5X-\2\u01b4\u01b3\3\2\2\2\u01b5\u01b8\3\2\2\2")
        buf.write(u"\u01b6\u01b4\3\2\2\2\u01b6\u01b7\3\2\2\2\u01b7\u01b9")
        buf.write(u"\3\2\2\2\u01b8\u01b6\3\2\2\2\u01b9\u01ba\7\t\2\2\u01ba")
        buf.write(u"W\3\2\2\2\u01bb\u01bc\58\35\2\u01bc\u01bf\5Z.\2\u01bd")
        buf.write(u"\u01be\7F\2\2\u01be\u01c0\5$\23\2\u01bf\u01bd\3\2\2\2")
        buf.write(u"\u01bf\u01c0\3\2\2\2\u01c0Y\3\2\2\2\u01c1\u01c3\7I\2")
        buf.write(u"\2\u01c2\u01c4\5`\61\2\u01c3\u01c2\3\2\2\2\u01c3\u01c4")
        buf.write(u"\3\2\2\2\u01c4\u01c8\3\2\2\2\u01c5\u01c7\5^\60\2\u01c6")
        buf.write(u"\u01c5\3\2\2\2\u01c7\u01ca\3\2\2\2\u01c8\u01c6\3\2\2")
        buf.write(u"\2\u01c8\u01c9\3\2\2\2\u01c9\u01cc\3\2\2\2\u01ca\u01c8")
        buf.write(u"\3\2\2\2\u01cb\u01cd\5\\/\2\u01cc\u01cb\3\2\2\2\u01cc")
        buf.write(u"\u01cd\3\2\2\2\u01cd[\3\2\2\2\u01ce\u01cf\7\n\2\2\u01cf")
        buf.write(u"\u01d0\5Z.\2\u01d0]\3\2\2\2\u01d1\u01d2\7\4\2\2\u01d2")
        buf.write(u"\u01d4\7I\2\2\u01d3\u01d5\5`\61\2\u01d4\u01d3\3\2\2\2")
        buf.write(u"\u01d4\u01d5\3\2\2\2\u01d5_\3\2\2\2\u01d6\u01d9\7\13")
        buf.write(u"\2\2\u01d7\u01da\7%\2\2\u01d8\u01da\5$\23\2\u01d9\u01d7")
        buf.write(u"\3\2\2\2\u01d9\u01d8\3\2\2\2\u01da\u01db\3\2\2\2\u01db")
        buf.write(u"\u01dc\7\r\2\2\u01dca\3\2\2\2\u01dd\u01de\t\n\2\2\u01de")
        buf.write(u"c\3\2\2\2,ejor\u0084\u0087\u009b\u00a6\u00b8\u00cc\u00d0")
        buf.write(u"\u00e4\u00f5\u00f7\u00ff\u0102\u010c\u0113\u011b\u011e")
        buf.write(u"\u0125\u0128\u0132\u0135\u0143\u0155\u0158\u0164\u017b")
        buf.write(u"\u0181\u0189\u0192\u0197\u01a8\u01ae\u01b6\u01bf\u01c3")
        buf.write(u"\u01c8\u01cc\u01d4\u01d9")
        return buf.getvalue()


class CalcParser ( Parser ):

    grammarFileName = "java-escape"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ u"<INVALID>", u"'FORM'", u"'.'", u"';'", u"'XMLConverter'", 
                     u"'EFXML'", u"'('", u"')'", u"':'", u"'['", u"'..'", 
                     u"']'", u"'/'", u"'*'", u"'+'", u"'-'", u"'>'", u"'<'", 
                     u"'<='", u"'>='", u"'='", u"'!='", u"'<>'", u"'=='", 
                     u"'True'", u"'TRUE'", u"'false'", u"'FALSE'", u"'False'", 
                     u"'Checked'", u"'checked'", u"'CHECKED'", u"'MAX'", 
                     u"','", u"'Form'", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"':='", u"'?='", u"'#='", 
                     u"<INVALID>", u"<INVALID>", u"'\"\"'", u"<INVALID>", 
                     u"'''" ]

    symbolicNames = [ u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"LITERAL", 
                      u"ARRAY", u"AUTOARRAY", u"OF", u"CASE", u"OTHERWISE", 
                      u"VAR", u"CONSTANT", u"IF", u"ELSE", u"THEN", u"SECTION", 
                      u"PROCEDURE", u"FUNCTION", u"DO", u"TO", u"FOR", u"NOT", 
                      u"BREAK", u"WITHFORMS", u"WITHNEWTAG", u"IN", u"AND", 
                      u"OR", u"MOD", u"MAIN", u"FORM", u"WHILE", u"LOOP", 
                      u"RETURN", u"WS", u"BEGIN", u"END", u"LET", u"ALTLET", 
                      u"CRAZYLET", u"ID", u"INT", u"ESC", u"STRING", u"QUOTE", 
                      u"CHAR", u"TRUE", u"FALSE", u"CHECKED", u"COMMENT", 
                      u"LINE_COMMENT" ]

    RULE_calcfile = 0
    RULE_presection = 1
    RULE_formset = 2
    RULE_converter = 3
    RULE_form = 4
    RULE_section = 5
    RULE_functionDecl = 6
    RULE_procedureDecl = 7
    RULE_mainDecl = 8
    RULE_block = 9
    RULE_stmt = 10
    RULE_open_stmt = 11
    RULE_assign = 12
    RULE_call = 13
    RULE_multicopy_accum = 14
    RULE_start_index = 15
    RULE_end_index = 16
    RULE_expr = 17
    RULE_argList = 18
    RULE_formdecl = 19
    RULE_vardecl = 20
    RULE_constdecl = 21
    RULE_typeDeclList = 22
    RULE_typeDecl = 23
    RULE_declList = 24
    RULE_constdeclList = 25
    RULE_varDecl = 26
    RULE_r_type = 27
    RULE_arrayDecl = 28
    RULE_rangeExpr = 29
    RULE_ctrlStruct = 30
    RULE_ifStruct = 31
    RULE_withForms = 32
    RULE_withNewTag = 33
    RULE_elseStruct = 34
    RULE_loopStruct = 35
    RULE_caseStuct = 36
    RULE_caseStmt = 37
    RULE_forloopstruct = 38
    RULE_breakStruct = 39
    RULE_ret = 40
    RULE_function = 41
    RULE_formParList = 42
    RULE_formPar = 43
    RULE_full_id = 44
    RULE_child_id = 45
    RULE_sub_id = 46
    RULE_array_index = 47
    RULE_boolean = 48

    ruleNames =  [ u"calcfile", u"presection", u"formset", u"converter", 
                   u"form", u"section", u"functionDecl", u"procedureDecl", 
                   u"mainDecl", u"block", u"stmt", u"open_stmt", u"assign", 
                   u"call", u"multicopy_accum", u"start_index", u"end_index", 
                   u"expr", u"argList", u"formdecl", u"vardecl", u"constdecl", 
                   u"typeDeclList", u"typeDecl", u"declList", u"constdeclList", 
                   u"varDecl", u"r_type", u"arrayDecl", u"rangeExpr", u"ctrlStruct", 
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
    T__33=34
    LITERAL=35
    ARRAY=36
    AUTOARRAY=37
    OF=38
    CASE=39
    OTHERWISE=40
    VAR=41
    CONSTANT=42
    IF=43
    ELSE=44
    THEN=45
    SECTION=46
    PROCEDURE=47
    FUNCTION=48
    DO=49
    TO=50
    FOR=51
    NOT=52
    BREAK=53
    WITHFORMS=54
    WITHNEWTAG=55
    IN=56
    AND=57
    OR=58
    MOD=59
    MAIN=60
    FORM=61
    WHILE=62
    LOOP=63
    RETURN=64
    WS=65
    BEGIN=66
    END=67
    LET=68
    ALTLET=69
    CRAZYLET=70
    ID=71
    INT=72
    ESC=73
    STRING=74
    QUOTE=75
    CHAR=76
    TRUE=77
    FALSE=78
    CHECKED=79
    COMMENT=80
    LINE_COMMENT=81

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
            self.state = 99
            _la = self._input.LA(1)
            if _la==CalcParser.T__3:
                self.state = 98
                self.presection()


            self.state = 104
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while (((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.PROCEDURE) | (1 << CalcParser.FUNCTION) | (1 << CalcParser.MAIN))) != 0):
                self.state = 101
                self.section()
                self.state = 106
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
            self.state = 107
            self.converter()
            self.state = 109
            _la = self._input.LA(1)
            if _la==CalcParser.CONSTANT:
                self.state = 108
                self.constdecl()


            self.state = 112
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 111
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
            self.state = 114
            self.match(CalcParser.T__0)
            self.state = 115
            self.match(CalcParser.ID)
            self.state = 116
            self.match(CalcParser.T__1)
            self.state = 117
            self.form()
            self.state = 118
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
            self.state = 120
            self.match(CalcParser.T__3)
            self.state = 121
            self.match(CalcParser.ID)
            self.state = 122
            self.match(CalcParser.T__4)
            self.state = 123
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
            self.state = 125
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


        def mainDecl(self):
            return self.getTypedRuleContext(CalcParser.MainDeclContext,0)


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
            self.state = 130
            token = self._input.LA(1)
            if token in [CalcParser.PROCEDURE]:
                self.state = 127
                self.procedureDecl()

            elif token in [CalcParser.FUNCTION]:
                self.state = 128
                self.functionDecl()

            elif token in [CalcParser.MAIN]:
                self.state = 129
                self.mainDecl()

            else:
                raise NoViableAltException(self)

            self.state = 133
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 132
                self.vardecl()


            self.state = 135
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
            self.state = 137
            self.match(CalcParser.FUNCTION)
            self.state = 138
            self.match(CalcParser.ID)
            self.state = 139
            self.match(CalcParser.T__5)
            self.state = 140
            self.typeDeclList()
            self.state = 141
            self.match(CalcParser.T__6)
            self.state = 142
            self.match(CalcParser.T__7)
            self.state = 143
            self.r_type()
            self.state = 144
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
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 146
            self.match(CalcParser.PROCEDURE)
            self.state = 147
            self.match(CalcParser.ID)
            self.state = 148
            self.match(CalcParser.T__5)
            self.state = 149
            self.typeDeclList()
            self.state = 150
            self.match(CalcParser.T__6)
            self.state = 151
            self.match(CalcParser.T__2)
            self.state = 153
            _la = self._input.LA(1)
            if _la==CalcParser.T__0 or _la==CalcParser.T__33:
                self.state = 152
                self.formdecl()


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx

    class MainDeclContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.MainDeclContext, self).__init__(parent, invokingState)
            self.parser = parser

        def MAIN(self):
            return self.getToken(CalcParser.MAIN, 0)

        def getRuleIndex(self):
            return CalcParser.RULE_mainDecl

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterMainDecl(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitMainDecl(self)




    def mainDecl(self):

        localctx = CalcParser.MainDeclContext(self, self._ctx, self.state)
        self.enterRule(localctx, 16, self.RULE_mainDecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 155
            self.match(CalcParser.MAIN)
            self.state = 156
            self.match(CalcParser.T__5)
            self.state = 157
            self.match(CalcParser.T__6)
            self.state = 158
            self.match(CalcParser.T__2)
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
        self.enterRule(localctx, 18, self.RULE_block)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 160
            self.match(CalcParser.BEGIN)
            self.state = 164
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while ((((_la - 39)) & ~0x3f) == 0 and ((1 << (_la - 39)) & ((1 << (CalcParser.CASE - 39)) | (1 << (CalcParser.IF - 39)) | (1 << (CalcParser.FOR - 39)) | (1 << (CalcParser.BREAK - 39)) | (1 << (CalcParser.WITHFORMS - 39)) | (1 << (CalcParser.WITHNEWTAG - 39)) | (1 << (CalcParser.RETURN - 39)) | (1 << (CalcParser.BEGIN - 39)) | (1 << (CalcParser.ID - 39)))) != 0):
                self.state = 161
                self.stmt()
                self.state = 166
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 167
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

        def open_stmt(self):
            return self.getTypedRuleContext(CalcParser.Open_stmtContext,0)


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
        self.enterRule(localctx, 20, self.RULE_stmt)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 169
            self.open_stmt()
            self.state = 170
            self.match(CalcParser.T__2)
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


        def breakStruct(self):
            return self.getTypedRuleContext(CalcParser.BreakStructContext,0)


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
        self.enterRule(localctx, 22, self.RULE_open_stmt)
        try:
            self.state = 182
            la_ = self._interp.adaptivePredict(self._input,8,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 172
                self.assign()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 173
                self.call()
                pass

            elif la_ == 3:
                self.enterOuterAlt(localctx, 3)
                self.state = 174
                self.ret()
                pass

            elif la_ == 4:
                self.enterOuterAlt(localctx, 4)
                self.state = 175
                self.block()
                pass

            elif la_ == 5:
                self.enterOuterAlt(localctx, 5)
                self.state = 176
                self.caseStuct()
                pass

            elif la_ == 6:
                self.enterOuterAlt(localctx, 6)
                self.state = 177
                self.forloopstruct()
                pass

            elif la_ == 7:
                self.enterOuterAlt(localctx, 7)
                self.state = 178
                self.ifStruct()
                pass

            elif la_ == 8:
                self.enterOuterAlt(localctx, 8)
                self.state = 179
                self.withForms()
                pass

            elif la_ == 9:
                self.enterOuterAlt(localctx, 9)
                self.state = 180
                self.withNewTag()
                pass

            elif la_ == 10:
                self.enterOuterAlt(localctx, 10)
                self.state = 181
                self.breakStruct()
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
        self.enterRule(localctx, 24, self.RULE_assign)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 184
            self.full_id()
            self.state = 185
            _la = self._input.LA(1)
            if not(((((_la - 68)) & ~0x3f) == 0 and ((1 << (_la - 68)) & ((1 << (CalcParser.LET - 68)) | (1 << (CalcParser.ALTLET - 68)) | (1 << (CalcParser.CRAZYLET - 68)))) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self.consume()
            self.state = 186
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
        self.enterRule(localctx, 26, self.RULE_call)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 188
            self.match(CalcParser.ID)
            self.state = 189
            self.match(CalcParser.T__5)
            self.state = 190
            self.argList()
            self.state = 191
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
        self.enterRule(localctx, 28, self.RULE_multicopy_accum)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 193
            self.full_id()
            self.state = 194
            self.match(CalcParser.T__8)
            self.state = 195
            self.start_index()
            self.state = 196
            self.match(CalcParser.T__9)
            self.state = 197
            self.end_index()
            self.state = 198
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
        self.enterRule(localctx, 30, self.RULE_start_index)
        try:
            self.state = 202
            la_ = self._interp.adaptivePredict(self._input,9,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 200
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 201
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
        self.enterRule(localctx, 32, self.RULE_end_index)
        try:
            self.state = 206
            la_ = self._interp.adaptivePredict(self._input,10,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 204
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 205
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


    class ModContext(ExprContext):

        def __init__(self, parser, ctx): # actually a CalcParser.ExprContext)
            super(CalcParser.ModContext, self).__init__(parser)
            self.op = None # Token
            self.copyFrom(ctx)

        def expr(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.ExprContext)
            else:
                return self.getTypedRuleContext(CalcParser.ExprContext,i)

        def MOD(self):
            return self.getToken(CalcParser.MOD, 0)

        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterMod(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitMod(self)


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
        _startState = 34
        self.enterRecursionRule(localctx, 34, self.RULE_expr, _p)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 226
            la_ = self._interp.adaptivePredict(self._input,11,self._ctx)
            if la_ == 1:
                localctx = CalcParser.NotContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx

                self.state = 209
                self.match(CalcParser.NOT)
                self.state = 210
                self.expr(7)
                pass

            elif la_ == 2:
                localctx = CalcParser.LiteralContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 211
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 3:
                localctx = CalcParser.RangeContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 212
                self.rangeExpr()
                pass

            elif la_ == 4:
                localctx = CalcParser.BoolContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 213
                _la = self._input.LA(1)
                if not((((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.T__23) | (1 << CalcParser.T__24) | (1 << CalcParser.T__25) | (1 << CalcParser.T__26) | (1 << CalcParser.T__27) | (1 << CalcParser.T__28) | (1 << CalcParser.T__29) | (1 << CalcParser.T__30))) != 0)):
                    self._errHandler.recoverInline(self)
                else:
                    self.consume()
                pass

            elif la_ == 5:
                localctx = CalcParser.FunctionCallContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 214
                self.call()
                pass

            elif la_ == 6:
                localctx = CalcParser.MultiCopyAccumulateContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 215
                self.multicopy_accum()
                pass

            elif la_ == 7:
                localctx = CalcParser.MaxContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 216
                self.match(CalcParser.T__31)
                self.state = 217
                self.match(CalcParser.T__5)
                self.state = 218
                self.argList()
                self.state = 219
                self.match(CalcParser.T__6)
                pass

            elif la_ == 8:
                localctx = CalcParser.ParensContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 221
                self.match(CalcParser.T__5)
                self.state = 222
                self.expr(0)
                self.state = 223
                self.match(CalcParser.T__6)
                pass

            elif la_ == 9:
                localctx = CalcParser.VarRefContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 225
                self.full_id()
                pass


            self._ctx.stop = self._input.LT(-1)
            self.state = 245
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,13,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    self.state = 243
                    la_ = self._interp.adaptivePredict(self._input,12,self._ctx)
                    if la_ == 1:
                        localctx = CalcParser.DivMulContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 228
                        if not self.precpred(self._ctx, 14):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 14)")
                        self.state = 229
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.T__11 or _la==CalcParser.T__12):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 230
                        self.expr(15)
                        pass

                    elif la_ == 2:
                        localctx = CalcParser.AddSubContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 231
                        if not self.precpred(self._ctx, 13):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 13)")
                        self.state = 232
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.T__13 or _la==CalcParser.T__14):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 233
                        self.expr(14)
                        pass

                    elif la_ == 3:
                        localctx = CalcParser.ModContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 234
                        if not self.precpred(self._ctx, 12):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 12)")
                        self.state = 235
                        localctx.op = self.match(CalcParser.MOD)
                        self.state = 236
                        self.expr(13)
                        pass

                    elif la_ == 4:
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

                    elif la_ == 5:
                        localctx = CalcParser.PredicateContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 240
                        if not self.precpred(self._ctx, 10):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 10)")
                        self.state = 241
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not((((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.T__15) | (1 << CalcParser.T__16) | (1 << CalcParser.T__17) | (1 << CalcParser.T__18) | (1 << CalcParser.T__19) | (1 << CalcParser.T__20) | (1 << CalcParser.T__21) | (1 << CalcParser.T__22) | (1 << CalcParser.IN))) != 0)):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 242
                        self.expr(11)
                        pass

             
                self.state = 247
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,13,self._ctx)

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
        self.enterRule(localctx, 36, self.RULE_argList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 256
            _la = self._input.LA(1)
            if (((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.T__5) | (1 << CalcParser.T__8) | (1 << CalcParser.T__23) | (1 << CalcParser.T__24) | (1 << CalcParser.T__25) | (1 << CalcParser.T__26) | (1 << CalcParser.T__27) | (1 << CalcParser.T__28) | (1 << CalcParser.T__29) | (1 << CalcParser.T__30) | (1 << CalcParser.T__31) | (1 << CalcParser.LITERAL) | (1 << CalcParser.NOT))) != 0) or _la==CalcParser.ID:
                self.state = 248
                self.expr(0)
                self.state = 253
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__32:
                    self.state = 249
                    self.match(CalcParser.T__32)
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
        self.enterRule(localctx, 38, self.RULE_formdecl)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 258
            _la = self._input.LA(1)
            if not(_la==CalcParser.T__0 or _la==CalcParser.T__33):
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
        self.enterRule(localctx, 40, self.RULE_vardecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 262
            self.match(CalcParser.VAR)
            self.state = 266
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,16,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    self.state = 263
                    self.declList() 
                self.state = 268
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,16,self._ctx)

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
        self.enterRule(localctx, 42, self.RULE_constdecl)
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
        self.enterRule(localctx, 44, self.RULE_typeDeclList)
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
        self.enterRule(localctx, 46, self.RULE_typeDecl)
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
                while _la==CalcParser.T__32:
                    self.state = 287
                    self.match(CalcParser.T__32)
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
        self.enterRule(localctx, 48, self.RULE_declList)
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
                while _la==CalcParser.T__32:
                    self.state = 300
                    self.match(CalcParser.T__32)
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
        self.enterRule(localctx, 50, self.RULE_constdeclList)
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
        self.enterRule(localctx, 52, self.RULE_varDecl)
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
        self.enterRule(localctx, 54, self.RULE_r_type)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 321
            _la = self._input.LA(1)
            if _la==CalcParser.ARRAY or _la==CalcParser.AUTOARRAY:
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

        def LITERAL(self):
            return self.getToken(CalcParser.LITERAL, 0)

        def OF(self):
            return self.getToken(CalcParser.OF, 0)

        def ARRAY(self):
            return self.getToken(CalcParser.ARRAY, 0)

        def AUTOARRAY(self):
            return self.getToken(CalcParser.AUTOARRAY, 0)

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
        self.enterRule(localctx, 56, self.RULE_arrayDecl)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 325
            _la = self._input.LA(1)
            if not(_la==CalcParser.ARRAY or _la==CalcParser.AUTOARRAY):
                self._errHandler.recoverInline(self)
            else:
                self.consume()
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
        self.enterRule(localctx, 58, self.RULE_rangeExpr)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 331
            self.match(CalcParser.T__8)
            self.state = 332
            self.expr(0)
            self.state = 342
            token = self._input.LA(1)
            if token in [CalcParser.T__9]:
                self.state = 333
                self.match(CalcParser.T__9)
                self.state = 334
                self.expr(0)

            elif token in [CalcParser.T__10, CalcParser.T__32]:
                self.state = 339
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__32:
                    self.state = 335
                    self.match(CalcParser.T__32)
                    self.state = 336
                    self.expr(0)
                    self.state = 341
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)


            else:
                raise NoViableAltException(self)

            self.state = 344
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
        self.enterRule(localctx, 60, self.RULE_ctrlStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 346
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

        def open_stmt(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.Open_stmtContext)
            else:
                return self.getTypedRuleContext(CalcParser.Open_stmtContext,i)


        def ELSE(self):
            return self.getToken(CalcParser.ELSE, 0)

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
        self.enterRule(localctx, 62, self.RULE_ifStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 348
            self.match(CalcParser.IF)
            self.state = 349
            self.expr(0)
            self.state = 350
            self.match(CalcParser.THEN)
            self.state = 351
            self.open_stmt()
            self.state = 354
            la_ = self._interp.adaptivePredict(self._input,27,self._ctx)
            if la_ == 1:
                self.state = 352
                self.match(CalcParser.ELSE)
                self.state = 353
                self.open_stmt()


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

        def open_stmt(self):
            return self.getTypedRuleContext(CalcParser.Open_stmtContext,0)


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
        self.enterRule(localctx, 64, self.RULE_withForms)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 356
            self.match(CalcParser.WITHFORMS)
            self.state = 357
            self.match(CalcParser.T__5)
            self.state = 358
            self.full_id()
            self.state = 359
            self.match(CalcParser.T__32)
            self.state = 360
            self.full_id()
            self.state = 361
            self.match(CalcParser.T__6)
            self.state = 362
            self.match(CalcParser.DO)
            self.state = 363
            self.open_stmt()
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

        def open_stmt(self):
            return self.getTypedRuleContext(CalcParser.Open_stmtContext,0)


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
        self.enterRule(localctx, 66, self.RULE_withNewTag)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 365
            self.match(CalcParser.WITHNEWTAG)
            self.state = 366
            self.match(CalcParser.T__5)
            self.state = 367
            self.expr(0)
            self.state = 368
            self.match(CalcParser.T__6)
            self.state = 369
            self.match(CalcParser.DO)
            self.state = 370
            self.open_stmt()
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
        self.enterRule(localctx, 68, self.RULE_elseStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 372
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
        self.enterRule(localctx, 70, self.RULE_loopStruct)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 374
            self.match(CalcParser.DO)
            self.state = 377
            _la = self._input.LA(1)
            if _la==CalcParser.WHILE:
                self.state = 375
                self.match(CalcParser.WHILE)
                self.state = 376
                localctx.preCond = self.expr(0)


            self.state = 379
            self.stmt()
            self.state = 380
            self.match(CalcParser.LOOP)
            self.state = 383
            _la = self._input.LA(1)
            if _la==CalcParser.WHILE:
                self.state = 381
                self.match(CalcParser.WHILE)
                self.state = 382
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
        self.enterRule(localctx, 72, self.RULE_caseStuct)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 385
            self.match(CalcParser.CASE)
            self.state = 386
            self.expr(0)
            self.state = 387
            self.match(CalcParser.OF)
            self.state = 389 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 388
                self.caseStmt()
                self.state = 391 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not (_la==CalcParser.LITERAL or _la==CalcParser.OTHERWISE):
                    break

            self.state = 393
            self.match(CalcParser.END)
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

        def stmt(self):
            return self.getTypedRuleContext(CalcParser.StmtContext,0)


        def LITERAL(self, i=None):
            if i is None:
                return self.getTokens(CalcParser.LITERAL)
            else:
                return self.getToken(CalcParser.LITERAL, i)

        def OTHERWISE(self):
            return self.getToken(CalcParser.OTHERWISE, 0)

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
        self.enterRule(localctx, 74, self.RULE_caseStmt)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 405
            token = self._input.LA(1)
            if token in [CalcParser.LITERAL]:
                self.state = 395
                self.match(CalcParser.LITERAL)
                self.state = 400
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__32:
                    self.state = 396
                    self.match(CalcParser.T__32)
                    self.state = 397
                    self.match(CalcParser.LITERAL)
                    self.state = 402
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)

                self.state = 403
                self.match(CalcParser.T__7)

            elif token in [CalcParser.OTHERWISE]:
                self.state = 404
                self.match(CalcParser.OTHERWISE)

            else:
                raise NoViableAltException(self)

            self.state = 407
            self.stmt()
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

        def open_stmt(self):
            return self.getTypedRuleContext(CalcParser.Open_stmtContext,0)


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
        self.enterRule(localctx, 76, self.RULE_forloopstruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 409
            self.match(CalcParser.FOR)
            self.state = 410
            self.match(CalcParser.ID)
            self.state = 411
            self.match(CalcParser.LET)
            self.state = 412
            self.expr(0)
            self.state = 413
            self.match(CalcParser.TO)
            self.state = 414
            self.expr(0)
            self.state = 415
            self.match(CalcParser.DO)
            self.state = 416
            self.open_stmt()
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
        self.enterRule(localctx, 78, self.RULE_breakStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 418
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
        self.enterRule(localctx, 80, self.RULE_ret)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 420
            self.match(CalcParser.RETURN)
            self.state = 422
            _la = self._input.LA(1)
            if (((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.T__5) | (1 << CalcParser.T__8) | (1 << CalcParser.T__23) | (1 << CalcParser.T__24) | (1 << CalcParser.T__25) | (1 << CalcParser.T__26) | (1 << CalcParser.T__27) | (1 << CalcParser.T__28) | (1 << CalcParser.T__29) | (1 << CalcParser.T__30) | (1 << CalcParser.T__31) | (1 << CalcParser.LITERAL) | (1 << CalcParser.NOT))) != 0) or _la==CalcParser.ID:
                self.state = 421
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
        self.enterRule(localctx, 82, self.RULE_function)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 424
            localctx.retType = self.full_id()
            self.state = 425
            localctx.fnName = self.full_id()
            self.state = 426
            self.formParList()
            self.state = 428
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 427
                self.vardecl()


            self.state = 430
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
        self.enterRule(localctx, 84, self.RULE_formParList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 432
            self.match(CalcParser.T__5)
            self.state = 436
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while ((((_la - 36)) & ~0x3f) == 0 and ((1 << (_la - 36)) & ((1 << (CalcParser.ARRAY - 36)) | (1 << (CalcParser.AUTOARRAY - 36)) | (1 << (CalcParser.ID - 36)))) != 0):
                self.state = 433
                self.formPar()
                self.state = 438
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 439
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
        self.enterRule(localctx, 86, self.RULE_formPar)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 441
            self.r_type()
            self.state = 442
            localctx.name = self.full_id()
            self.state = 445
            _la = self._input.LA(1)
            if _la==CalcParser.LET:
                self.state = 443
                self.match(CalcParser.LET)
                self.state = 444
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
        self.enterRule(localctx, 88, self.RULE_full_id)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 447
            self.match(CalcParser.ID)
            self.state = 449
            la_ = self._interp.adaptivePredict(self._input,37,self._ctx)
            if la_ == 1:
                self.state = 448
                self.array_index()


            self.state = 454
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,38,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    self.state = 451
                    self.sub_id() 
                self.state = 456
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,38,self._ctx)

            self.state = 458
            la_ = self._interp.adaptivePredict(self._input,39,self._ctx)
            if la_ == 1:
                self.state = 457
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
        self.enterRule(localctx, 90, self.RULE_child_id)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 460
            self.match(CalcParser.T__7)
            self.state = 461
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
        self.enterRule(localctx, 92, self.RULE_sub_id)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 463
            self.match(CalcParser.T__1)
            self.state = 464
            self.match(CalcParser.ID)
            self.state = 466
            la_ = self._interp.adaptivePredict(self._input,40,self._ctx)
            if la_ == 1:
                self.state = 465
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

        def LITERAL(self):
            return self.getToken(CalcParser.LITERAL, 0)

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
        self.enterRule(localctx, 94, self.RULE_array_index)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 468
            self.match(CalcParser.T__8)
            self.state = 471
            la_ = self._interp.adaptivePredict(self._input,41,self._ctx)
            if la_ == 1:
                self.state = 469
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 2:
                self.state = 470
                self.expr(0)
                pass


            self.state = 473
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
        self.enterRule(localctx, 96, self.RULE_boolean)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 475
            _la = self._input.LA(1)
            if not(((((_la - 77)) & ~0x3f) == 0 and ((1 << (_la - 77)) & ((1 << (CalcParser.TRUE - 77)) | (1 << (CalcParser.FALSE - 77)) | (1 << (CalcParser.CHECKED - 77)))) != 0)):
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
        self._predicates[17] = self.expr_sempred
        pred = self._predicates.get(ruleIndex, None)
        if pred is None:
            raise Exception("No predicate with index:" + str(ruleIndex))
        else:
            return pred(localctx, predIndex)

    def expr_sempred(self, localctx, predIndex):
            if predIndex == 0:
                return self.precpred(self._ctx, 14)
         

            if predIndex == 1:
                return self.precpred(self._ctx, 13)
         

            if predIndex == 2:
                return self.precpred(self._ctx, 12)
         

            if predIndex == 3:
                return self.precpred(self._ctx, 11)
         

            if predIndex == 4:
                return self.precpred(self._ctx, 10)
         



