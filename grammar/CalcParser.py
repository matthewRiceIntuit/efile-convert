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
        buf.write(u"R\u01ef\4\2\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t")
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
        buf.write(u"\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\13")
        buf.write(u"\3\13\7\13\u00a4\n\13\f\13\16\13\u00a7\13\13\3\13\3\13")
        buf.write(u"\3\f\3\f\3\f\3\f\3\f\5\f\u00b0\n\f\3\f\3\f\3\f\3\f\3")
        buf.write(u"\f\3\f\3\f\5\f\u00b9\n\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r")
        buf.write(u"\3\r\3\r\5\r\u00c4\n\r\3\16\3\16\3\16\3\16\3\17\3\17")
        buf.write(u"\3\17\3\17\3\17\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3")
        buf.write(u"\21\3\21\5\21\u00d8\n\21\3\22\3\22\5\22\u00dc\n\22\3")
        buf.write(u"\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23")
        buf.write(u"\3\23\3\23\3\23\3\23\3\23\3\23\3\23\5\23\u00f0\n\23\3")
        buf.write(u"\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23")
        buf.write(u"\3\23\3\23\3\23\3\23\7\23\u0101\n\23\f\23\16\23\u0104")
        buf.write(u"\13\23\3\24\3\24\3\24\7\24\u0109\n\24\f\24\16\24\u010c")
        buf.write(u"\13\24\5\24\u010e\n\24\3\25\3\25\3\25\3\25\3\26\3\26")
        buf.write(u"\7\26\u0116\n\26\f\26\16\26\u0119\13\26\3\27\3\27\7\27")
        buf.write(u"\u011d\n\27\f\27\16\27\u0120\13\27\3\30\3\30\3\30\7\30")
        buf.write(u"\u0125\n\30\f\30\16\30\u0128\13\30\5\30\u012a\n\30\3")
        buf.write(u"\31\3\31\3\31\7\31\u012f\n\31\f\31\16\31\u0132\13\31")
        buf.write(u"\5\31\u0134\n\31\3\31\3\31\3\31\3\32\3\32\3\32\7\32\u013c")
        buf.write(u"\n\32\f\32\16\32\u013f\13\32\5\32\u0141\n\32\3\32\3\32")
        buf.write(u"\3\32\3\32\3\33\3\33\3\33\3\33\3\33\3\34\3\34\3\35\5")
        buf.write(u"\35\u014f\n\35\3\35\3\35\3\36\3\36\3\36\3\36\3\36\3\36")
        buf.write(u"\3\37\3\37\3\37\3\37\3\37\3\37\7\37\u015f\n\37\f\37\16")
        buf.write(u"\37\u0162\13\37\5\37\u0164\n\37\3\37\3\37\3 \3 \3!\3")
        buf.write(u"!\3!\3!\3!\3!\3!\5!\u0171\n!\3\"\3\"\3\"\3\"\3\"\3\"")
        buf.write(u"\3\"\3\"\3\"\3#\3#\3#\3#\3#\3#\3#\3$\3$\3%\3%\3%\5%\u0188")
        buf.write(u"\n%\3%\3%\3%\3%\5%\u018e\n%\3&\3&\3&\3&\6&\u0194\n&\r")
        buf.write(u"&\16&\u0195\3&\3&\3&\3\'\3\'\3\'\7\'\u019e\n\'\f\'\16")
        buf.write(u"\'\u01a1\13\'\3\'\3\'\5\'\u01a5\n\'\3\'\3\'\3(\3(\3(")
        buf.write(u"\3(\3(\3(\3(\3(\3(\5(\u01b2\n(\3)\3)\3*\3*\5*\u01b8\n")
        buf.write(u"*\3+\3+\3+\3+\5+\u01be\n+\3+\3+\3,\3,\7,\u01c4\n,\f,")
        buf.write(u"\16,\u01c7\13,\3,\3,\3-\3-\3-\3-\5-\u01cf\n-\3.\3.\5")
        buf.write(u".\u01d3\n.\3.\7.\u01d6\n.\f.\16.\u01d9\13.\3.\5.\u01dc")
        buf.write(u"\n.\3/\3/\3/\3\60\3\60\3\60\5\60\u01e4\n\60\3\61\3\61")
        buf.write(u"\3\61\5\61\u01e9\n\61\3\61\3\61\3\62\3\62\3\62\2\3$\63")
        buf.write(u"\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62")
        buf.write(u"\64\668:<>@BDFHJLNPRTVXZ\\^`b\2\13\3\2EG\3\2\31 \3\2")
        buf.write(u"\16\17\3\2\20\21\3\2:;\4\2\22\3099\4\2\3\3##\3\2%&\3")
        buf.write(u"\2NP\u0203\2e\3\2\2\2\4m\3\2\2\2\6t\3\2\2\2\bz\3\2\2")
        buf.write(u"\2\n\177\3\2\2\2\f\u0084\3\2\2\2\16\u008b\3\2\2\2\20")
        buf.write(u"\u0094\3\2\2\2\22\u009c\3\2\2\2\24\u00a1\3\2\2\2\26\u00b8")
        buf.write(u"\3\2\2\2\30\u00c3\3\2\2\2\32\u00c5\3\2\2\2\34\u00c9\3")
        buf.write(u"\2\2\2\36\u00ce\3\2\2\2 \u00d7\3\2\2\2\"\u00db\3\2\2")
        buf.write(u"\2$\u00ef\3\2\2\2&\u010d\3\2\2\2(\u010f\3\2\2\2*\u0113")
        buf.write(u"\3\2\2\2,\u011a\3\2\2\2.\u0129\3\2\2\2\60\u0133\3\2\2")
        buf.write(u"\2\62\u0140\3\2\2\2\64\u0146\3\2\2\2\66\u014b\3\2\2\2")
        buf.write(u"8\u014e\3\2\2\2:\u0152\3\2\2\2<\u0158\3\2\2\2>\u0167")
        buf.write(u"\3\2\2\2@\u0169\3\2\2\2B\u0172\3\2\2\2D\u017b\3\2\2\2")
        buf.write(u"F\u0182\3\2\2\2H\u0184\3\2\2\2J\u018f\3\2\2\2L\u01a4")
        buf.write(u"\3\2\2\2N\u01a8\3\2\2\2P\u01b3\3\2\2\2R\u01b5\3\2\2\2")
        buf.write(u"T\u01b9\3\2\2\2V\u01c1\3\2\2\2X\u01ca\3\2\2\2Z\u01d0")
        buf.write(u"\3\2\2\2\\\u01dd\3\2\2\2^\u01e0\3\2\2\2`\u01e5\3\2\2")
        buf.write(u"\2b\u01ec\3\2\2\2df\5\4\3\2ed\3\2\2\2ef\3\2\2\2fj\3\2")
        buf.write(u"\2\2gi\5\f\7\2hg\3\2\2\2il\3\2\2\2jh\3\2\2\2jk\3\2\2")
        buf.write(u"\2k\3\3\2\2\2lj\3\2\2\2mo\5\b\5\2np\5,\27\2on\3\2\2\2")
        buf.write(u"op\3\2\2\2pr\3\2\2\2qs\5*\26\2rq\3\2\2\2rs\3\2\2\2s\5")
        buf.write(u"\3\2\2\2tu\7\3\2\2uv\7H\2\2vw\7\4\2\2wx\5\n\6\2xy\7\5")
        buf.write(u"\2\2y\7\3\2\2\2z{\7\6\2\2{|\7H\2\2|}\7\7\2\2}~\7\5\2")
        buf.write(u"\2~\t\3\2\2\2\177\u0080\5Z.\2\u0080\13\3\2\2\2\u0081")
        buf.write(u"\u0085\5\20\t\2\u0082\u0085\5\16\b\2\u0083\u0085\5\22")
        buf.write(u"\n\2\u0084\u0081\3\2\2\2\u0084\u0082\3\2\2\2\u0084\u0083")
        buf.write(u"\3\2\2\2\u0085\u0087\3\2\2\2\u0086\u0088\5*\26\2\u0087")
        buf.write(u"\u0086\3\2\2\2\u0087\u0088\3\2\2\2\u0088\u0089\3\2\2")
        buf.write(u"\2\u0089\u008a\5\26\f\2\u008a\r\3\2\2\2\u008b\u008c\7")
        buf.write(u"\61\2\2\u008c\u008d\7H\2\2\u008d\u008e\7\b\2\2\u008e")
        buf.write(u"\u008f\5.\30\2\u008f\u0090\7\t\2\2\u0090\u0091\7\n\2")
        buf.write(u"\2\u0091\u0092\58\35\2\u0092\u0093\7\5\2\2\u0093\17\3")
        buf.write(u"\2\2\2\u0094\u0095\7\60\2\2\u0095\u0096\7H\2\2\u0096")
        buf.write(u"\u0097\7\b\2\2\u0097\u0098\5.\30\2\u0098\u0099\7\t\2")
        buf.write(u"\2\u0099\u009a\7\5\2\2\u009a\u009b\5(\25\2\u009b\21\3")
        buf.write(u"\2\2\2\u009c\u009d\7=\2\2\u009d\u009e\7\b\2\2\u009e\u009f")
        buf.write(u"\7\t\2\2\u009f\u00a0\7\5\2\2\u00a0\23\3\2\2\2\u00a1\u00a5")
        buf.write(u"\7C\2\2\u00a2\u00a4\5\26\f\2\u00a3\u00a2\3\2\2\2\u00a4")
        buf.write(u"\u00a7\3\2\2\2\u00a5\u00a3\3\2\2\2\u00a5\u00a6\3\2\2")
        buf.write(u"\2\u00a6\u00a8\3\2\2\2\u00a7\u00a5\3\2\2\2\u00a8\u00a9")
        buf.write(u"\7D\2\2\u00a9\25\3\2\2\2\u00aa\u00b0\5\32\16\2\u00ab")
        buf.write(u"\u00b0\5\34\17\2\u00ac\u00b0\5R*\2\u00ad\u00b0\5\24\13")
        buf.write(u"\2\u00ae\u00b0\5P)\2\u00af\u00aa\3\2\2\2\u00af\u00ab")
        buf.write(u"\3\2\2\2\u00af\u00ac\3\2\2\2\u00af\u00ad\3\2\2\2\u00af")
        buf.write(u"\u00ae\3\2\2\2\u00b0\u00b1\3\2\2\2\u00b1\u00b2\7\5\2")
        buf.write(u"\2\u00b2\u00b9\3\2\2\2\u00b3\u00b9\5N(\2\u00b4\u00b9")
        buf.write(u"\5@!\2\u00b5\u00b9\5J&\2\u00b6\u00b9\5B\"\2\u00b7\u00b9")
        buf.write(u"\5D#\2\u00b8\u00af\3\2\2\2\u00b8\u00b3\3\2\2\2\u00b8")
        buf.write(u"\u00b4\3\2\2\2\u00b8\u00b5\3\2\2\2\u00b8\u00b6\3\2\2")
        buf.write(u"\2\u00b8\u00b7\3\2\2\2\u00b9\27\3\2\2\2\u00ba\u00c4\5")
        buf.write(u"\32\16\2\u00bb\u00c4\5\34\17\2\u00bc\u00c4\5R*\2\u00bd")
        buf.write(u"\u00c4\5\24\13\2\u00be\u00c4\5J&\2\u00bf\u00c4\5N(\2")
        buf.write(u"\u00c0\u00c4\5@!\2\u00c1\u00c4\5B\"\2\u00c2\u00c4\5D")
        buf.write(u"#\2\u00c3\u00ba\3\2\2\2\u00c3\u00bb\3\2\2\2\u00c3\u00bc")
        buf.write(u"\3\2\2\2\u00c3\u00bd\3\2\2\2\u00c3\u00be\3\2\2\2\u00c3")
        buf.write(u"\u00bf\3\2\2\2\u00c3\u00c0\3\2\2\2\u00c3\u00c1\3\2\2")
        buf.write(u"\2\u00c3\u00c2\3\2\2\2\u00c4\31\3\2\2\2\u00c5\u00c6\5")
        buf.write(u"Z.\2\u00c6\u00c7\t\2\2\2\u00c7\u00c8\5$\23\2\u00c8\33")
        buf.write(u"\3\2\2\2\u00c9\u00ca\7H\2\2\u00ca\u00cb\7\b\2\2\u00cb")
        buf.write(u"\u00cc\5&\24\2\u00cc\u00cd\7\t\2\2\u00cd\35\3\2\2\2\u00ce")
        buf.write(u"\u00cf\5Z.\2\u00cf\u00d0\7\13\2\2\u00d0\u00d1\5 \21\2")
        buf.write(u"\u00d1\u00d2\7\f\2\2\u00d2\u00d3\5\"\22\2\u00d3\u00d4")
        buf.write(u"\7\r\2\2\u00d4\37\3\2\2\2\u00d5\u00d8\7$\2\2\u00d6\u00d8")
        buf.write(u"\5$\23\2\u00d7\u00d5\3\2\2\2\u00d7\u00d6\3\2\2\2\u00d8")
        buf.write(u"!\3\2\2\2\u00d9\u00dc\7$\2\2\u00da\u00dc\5$\23\2\u00db")
        buf.write(u"\u00d9\3\2\2\2\u00db\u00da\3\2\2\2\u00dc#\3\2\2\2\u00dd")
        buf.write(u"\u00de\b\23\1\2\u00de\u00df\7\65\2\2\u00df\u00f0\5$\23")
        buf.write(u"\t\u00e0\u00f0\7$\2\2\u00e1\u00f0\5<\37\2\u00e2\u00f0")
        buf.write(u"\t\3\2\2\u00e3\u00f0\5\34\17\2\u00e4\u00f0\5\36\20\2")
        buf.write(u"\u00e5\u00e6\7!\2\2\u00e6\u00e7\7\b\2\2\u00e7\u00e8\5")
        buf.write(u"&\24\2\u00e8\u00e9\7\t\2\2\u00e9\u00f0\3\2\2\2\u00ea")
        buf.write(u"\u00eb\7\b\2\2\u00eb\u00ec\5$\23\2\u00ec\u00ed\7\t\2")
        buf.write(u"\2\u00ed\u00f0\3\2\2\2\u00ee\u00f0\5Z.\2\u00ef\u00dd")
        buf.write(u"\3\2\2\2\u00ef\u00e0\3\2\2\2\u00ef\u00e1\3\2\2\2\u00ef")
        buf.write(u"\u00e2\3\2\2\2\u00ef\u00e3\3\2\2\2\u00ef\u00e4\3\2\2")
        buf.write(u"\2\u00ef\u00e5\3\2\2\2\u00ef\u00ea\3\2\2\2\u00ef\u00ee")
        buf.write(u"\3\2\2\2\u00f0\u0102\3\2\2\2\u00f1\u00f2\f\20\2\2\u00f2")
        buf.write(u"\u00f3\t\4\2\2\u00f3\u0101\5$\23\21\u00f4\u00f5\f\17")
        buf.write(u"\2\2\u00f5\u00f6\t\5\2\2\u00f6\u0101\5$\23\20\u00f7\u00f8")
        buf.write(u"\f\16\2\2\u00f8\u00f9\7<\2\2\u00f9\u0101\5$\23\17\u00fa")
        buf.write(u"\u00fb\f\r\2\2\u00fb\u00fc\t\6\2\2\u00fc\u0101\5$\23")
        buf.write(u"\16\u00fd\u00fe\f\f\2\2\u00fe\u00ff\t\7\2\2\u00ff\u0101")
        buf.write(u"\5$\23\r\u0100\u00f1\3\2\2\2\u0100\u00f4\3\2\2\2\u0100")
        buf.write(u"\u00f7\3\2\2\2\u0100\u00fa\3\2\2\2\u0100\u00fd\3\2\2")
        buf.write(u"\2\u0101\u0104\3\2\2\2\u0102\u0100\3\2\2\2\u0102\u0103")
        buf.write(u"\3\2\2\2\u0103%\3\2\2\2\u0104\u0102\3\2\2\2\u0105\u010a")
        buf.write(u"\5$\23\2\u0106\u0107\7\"\2\2\u0107\u0109\5$\23\2\u0108")
        buf.write(u"\u0106\3\2\2\2\u0109\u010c\3\2\2\2\u010a\u0108\3\2\2")
        buf.write(u"\2\u010a\u010b\3\2\2\2\u010b\u010e\3\2\2\2\u010c\u010a")
        buf.write(u"\3\2\2\2\u010d\u0105\3\2\2\2\u010d\u010e\3\2\2\2\u010e")
        buf.write(u"\'\3\2\2\2\u010f\u0110\t\b\2\2\u0110\u0111\5Z.\2\u0111")
        buf.write(u"\u0112\7\5\2\2\u0112)\3\2\2\2\u0113\u0117\7*\2\2\u0114")
        buf.write(u"\u0116\5\62\32\2\u0115\u0114\3\2\2\2\u0116\u0119\3\2")
        buf.write(u"\2\2\u0117\u0115\3\2\2\2\u0117\u0118\3\2\2\2\u0118+\3")
        buf.write(u"\2\2\2\u0119\u0117\3\2\2\2\u011a\u011e\7+\2\2\u011b\u011d")
        buf.write(u"\5\64\33\2\u011c\u011b\3\2\2\2\u011d\u0120\3\2\2\2\u011e")
        buf.write(u"\u011c\3\2\2\2\u011e\u011f\3\2\2\2\u011f-\3\2\2\2\u0120")
        buf.write(u"\u011e\3\2\2\2\u0121\u0126\5\60\31\2\u0122\u0123\7\5")
        buf.write(u"\2\2\u0123\u0125\5\60\31\2\u0124\u0122\3\2\2\2\u0125")
        buf.write(u"\u0128\3\2\2\2\u0126\u0124\3\2\2\2\u0126\u0127\3\2\2")
        buf.write(u"\2\u0127\u012a\3\2\2\2\u0128\u0126\3\2\2\2\u0129\u0121")
        buf.write(u"\3\2\2\2\u0129\u012a\3\2\2\2\u012a/\3\2\2\2\u012b\u0130")
        buf.write(u"\5\66\34\2\u012c\u012d\7\"\2\2\u012d\u012f\5\66\34\2")
        buf.write(u"\u012e\u012c\3\2\2\2\u012f\u0132\3\2\2\2\u0130\u012e")
        buf.write(u"\3\2\2\2\u0130\u0131\3\2\2\2\u0131\u0134\3\2\2\2\u0132")
        buf.write(u"\u0130\3\2\2\2\u0133\u012b\3\2\2\2\u0133\u0134\3\2\2")
        buf.write(u"\2\u0134\u0135\3\2\2\2\u0135\u0136\7\n\2\2\u0136\u0137")
        buf.write(u"\58\35\2\u0137\61\3\2\2\2\u0138\u013d\5\66\34\2\u0139")
        buf.write(u"\u013a\7\"\2\2\u013a\u013c\5\66\34\2\u013b\u0139\3\2")
        buf.write(u"\2\2\u013c\u013f\3\2\2\2\u013d\u013b\3\2\2\2\u013d\u013e")
        buf.write(u"\3\2\2\2\u013e\u0141\3\2\2\2\u013f\u013d\3\2\2\2\u0140")
        buf.write(u"\u0138\3\2\2\2\u0140\u0141\3\2\2\2\u0141\u0142\3\2\2")
        buf.write(u"\2\u0142\u0143\7\n\2\2\u0143\u0144\58\35\2\u0144\u0145")
        buf.write(u"\7\5\2\2\u0145\63\3\2\2\2\u0146\u0147\5\66\34\2\u0147")
        buf.write(u"\u0148\7\26\2\2\u0148\u0149\7$\2\2\u0149\u014a\7\5\2")
        buf.write(u"\2\u014a\65\3\2\2\2\u014b\u014c\7H\2\2\u014c\67\3\2\2")
        buf.write(u"\2\u014d\u014f\5:\36\2\u014e\u014d\3\2\2\2\u014e\u014f")
        buf.write(u"\3\2\2\2\u014f\u0150\3\2\2\2\u0150\u0151\7H\2\2\u0151")
        buf.write(u"9\3\2\2\2\u0152\u0153\t\t\2\2\u0153\u0154\7\13\2\2\u0154")
        buf.write(u"\u0155\7$\2\2\u0155\u0156\7\r\2\2\u0156\u0157\7\'\2\2")
        buf.write(u"\u0157;\3\2\2\2\u0158\u0159\7\13\2\2\u0159\u0163\5$\23")
        buf.write(u"\2\u015a\u015b\7\f\2\2\u015b\u0164\5$\23\2\u015c\u015d")
        buf.write(u"\7\"\2\2\u015d\u015f\5$\23\2\u015e\u015c\3\2\2\2\u015f")
        buf.write(u"\u0162\3\2\2\2\u0160\u015e\3\2\2\2\u0160\u0161\3\2\2")
        buf.write(u"\2\u0161\u0164\3\2\2\2\u0162\u0160\3\2\2\2\u0163\u015a")
        buf.write(u"\3\2\2\2\u0163\u0160\3\2\2\2\u0164\u0165\3\2\2\2\u0165")
        buf.write(u"\u0166\7\r\2\2\u0166=\3\2\2\2\u0167\u0168\5@!\2\u0168")
        buf.write(u"?\3\2\2\2\u0169\u016a\7,\2\2\u016a\u016b\5$\23\2\u016b")
        buf.write(u"\u016c\7.\2\2\u016c\u0170\5\30\r\2\u016d\u0171\7\5\2")
        buf.write(u"\2\u016e\u016f\7-\2\2\u016f\u0171\5F$\2\u0170\u016d\3")
        buf.write(u"\2\2\2\u0170\u016e\3\2\2\2\u0170\u0171\3\2\2\2\u0171")
        buf.write(u"A\3\2\2\2\u0172\u0173\7\67\2\2\u0173\u0174\7\b\2\2\u0174")
        buf.write(u"\u0175\5Z.\2\u0175\u0176\7\"\2\2\u0176\u0177\5Z.\2\u0177")
        buf.write(u"\u0178\7\t\2\2\u0178\u0179\7\62\2\2\u0179\u017a\5\26")
        buf.write(u"\f\2\u017aC\3\2\2\2\u017b\u017c\78\2\2\u017c\u017d\7")
        buf.write(u"\b\2\2\u017d\u017e\5$\23\2\u017e\u017f\7\t\2\2\u017f")
        buf.write(u"\u0180\7\62\2\2\u0180\u0181\5\26\f\2\u0181E\3\2\2\2\u0182")
        buf.write(u"\u0183\5\26\f\2\u0183G\3\2\2\2\u0184\u0187\7\62\2\2\u0185")
        buf.write(u"\u0186\7?\2\2\u0186\u0188\5$\23\2\u0187\u0185\3\2\2\2")
        buf.write(u"\u0187\u0188\3\2\2\2\u0188\u0189\3\2\2\2\u0189\u018a")
        buf.write(u"\5\26\f\2\u018a\u018d\7@\2\2\u018b\u018c\7?\2\2\u018c")
        buf.write(u"\u018e\5$\23\2\u018d\u018b\3\2\2\2\u018d\u018e\3\2\2")
        buf.write(u"\2\u018eI\3\2\2\2\u018f\u0190\7(\2\2\u0190\u0191\5$\23")
        buf.write(u"\2\u0191\u0193\7\'\2\2\u0192\u0194\5L\'\2\u0193\u0192")
        buf.write(u"\3\2\2\2\u0194\u0195\3\2\2\2\u0195\u0193\3\2\2\2\u0195")
        buf.write(u"\u0196\3\2\2\2\u0196\u0197\3\2\2\2\u0197\u0198\7D\2\2")
        buf.write(u"\u0198\u0199\7\5\2\2\u0199K\3\2\2\2\u019a\u019f\7$\2")
        buf.write(u"\2\u019b\u019c\7\"\2\2\u019c\u019e\7$\2\2\u019d\u019b")
        buf.write(u"\3\2\2\2\u019e\u01a1\3\2\2\2\u019f\u019d\3\2\2\2\u019f")
        buf.write(u"\u01a0\3\2\2\2\u01a0\u01a2\3\2\2\2\u01a1\u019f\3\2\2")
        buf.write(u"\2\u01a2\u01a5\7\n\2\2\u01a3\u01a5\7)\2\2\u01a4\u019a")
        buf.write(u"\3\2\2\2\u01a4\u01a3\3\2\2\2\u01a5\u01a6\3\2\2\2\u01a6")
        buf.write(u"\u01a7\5\26\f\2\u01a7M\3\2\2\2\u01a8\u01a9\7\64\2\2\u01a9")
        buf.write(u"\u01aa\7H\2\2\u01aa\u01ab\7E\2\2\u01ab\u01ac\5$\23\2")
        buf.write(u"\u01ac\u01ad\7\63\2\2\u01ad\u01ae\5$\23\2\u01ae\u01b1")
        buf.write(u"\7\62\2\2\u01af\u01b2\5\24\13\2\u01b0\u01b2\5\26\f\2")
        buf.write(u"\u01b1\u01af\3\2\2\2\u01b1\u01b0\3\2\2\2\u01b2O\3\2\2")
        buf.write(u"\2\u01b3\u01b4\7\66\2\2\u01b4Q\3\2\2\2\u01b5\u01b7\7")
        buf.write(u"A\2\2\u01b6\u01b8\5$\23\2\u01b7\u01b6\3\2\2\2\u01b7\u01b8")
        buf.write(u"\3\2\2\2\u01b8S\3\2\2\2\u01b9\u01ba\5Z.\2\u01ba\u01bb")
        buf.write(u"\5Z.\2\u01bb\u01bd\5V,\2\u01bc\u01be\5*\26\2\u01bd\u01bc")
        buf.write(u"\3\2\2\2\u01bd\u01be\3\2\2\2\u01be\u01bf\3\2\2\2\u01bf")
        buf.write(u"\u01c0\5\24\13\2\u01c0U\3\2\2\2\u01c1\u01c5\7\b\2\2\u01c2")
        buf.write(u"\u01c4\5X-\2\u01c3\u01c2\3\2\2\2\u01c4\u01c7\3\2\2\2")
        buf.write(u"\u01c5\u01c3\3\2\2\2\u01c5\u01c6\3\2\2\2\u01c6\u01c8")
        buf.write(u"\3\2\2\2\u01c7\u01c5\3\2\2\2\u01c8\u01c9\7\t\2\2\u01c9")
        buf.write(u"W\3\2\2\2\u01ca\u01cb\58\35\2\u01cb\u01ce\5Z.\2\u01cc")
        buf.write(u"\u01cd\7E\2\2\u01cd\u01cf\5$\23\2\u01ce\u01cc\3\2\2\2")
        buf.write(u"\u01ce\u01cf\3\2\2\2\u01cfY\3\2\2\2\u01d0\u01d2\7H\2")
        buf.write(u"\2\u01d1\u01d3\5`\61\2\u01d2\u01d1\3\2\2\2\u01d2\u01d3")
        buf.write(u"\3\2\2\2\u01d3\u01d7\3\2\2\2\u01d4\u01d6\5^\60\2\u01d5")
        buf.write(u"\u01d4\3\2\2\2\u01d6\u01d9\3\2\2\2\u01d7\u01d5\3\2\2")
        buf.write(u"\2\u01d7\u01d8\3\2\2\2\u01d8\u01db\3\2\2\2\u01d9\u01d7")
        buf.write(u"\3\2\2\2\u01da\u01dc\5\\/\2\u01db\u01da\3\2\2\2\u01db")
        buf.write(u"\u01dc\3\2\2\2\u01dc[\3\2\2\2\u01dd\u01de\7\n\2\2\u01de")
        buf.write(u"\u01df\5Z.\2\u01df]\3\2\2\2\u01e0\u01e1\7\4\2\2\u01e1")
        buf.write(u"\u01e3\7H\2\2\u01e2\u01e4\5`\61\2\u01e3\u01e2\3\2\2\2")
        buf.write(u"\u01e3\u01e4\3\2\2\2\u01e4_\3\2\2\2\u01e5\u01e8\7\13")
        buf.write(u"\2\2\u01e6\u01e9\7$\2\2\u01e7\u01e9\5$\23\2\u01e8\u01e6")
        buf.write(u"\3\2\2\2\u01e8\u01e7\3\2\2\2\u01e9\u01ea\3\2\2\2\u01ea")
        buf.write(u"\u01eb\7\r\2\2\u01eba\3\2\2\2\u01ec\u01ed\t\n\2\2\u01ed")
        buf.write(u"c\3\2\2\2.ejor\u0084\u0087\u00a5\u00af\u00b8\u00c3\u00d7")
        buf.write(u"\u00db\u00ef\u0100\u0102\u010a\u010d\u0117\u011e\u0126")
        buf.write(u"\u0129\u0130\u0133\u013d\u0140\u014e\u0160\u0163\u0170")
        buf.write(u"\u0187\u018d\u0195\u019f\u01a4\u01b1\u01b7\u01bd\u01c5")
        buf.write(u"\u01ce\u01d2\u01d7\u01db\u01e3\u01e8")
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
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"':='", u"'?='", u"'#='", u"<INVALID>", 
                     u"<INVALID>", u"'\"\"'", u"<INVALID>", u"'''" ]

    symbolicNames = [ u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"LITERAL", u"ARRAY", 
                      u"AUTOARRAY", u"OF", u"CASE", u"OTHERWISE", u"VAR", 
                      u"CONSTANT", u"IF", u"ELSE", u"THEN", u"SECTION", 
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
    LITERAL=34
    ARRAY=35
    AUTOARRAY=36
    OF=37
    CASE=38
    OTHERWISE=39
    VAR=40
    CONSTANT=41
    IF=42
    ELSE=43
    THEN=44
    SECTION=45
    PROCEDURE=46
    FUNCTION=47
    DO=48
    TO=49
    FOR=50
    NOT=51
    BREAK=52
    WITHFORMS=53
    WITHNEWTAG=54
    IN=55
    AND=56
    OR=57
    MOD=58
    MAIN=59
    FORM=60
    WHILE=61
    LOOP=62
    RETURN=63
    WS=64
    BEGIN=65
    END=66
    LET=67
    ALTLET=68
    CRAZYLET=69
    ID=70
    INT=71
    ESC=72
    STRING=73
    QUOTE=74
    CHAR=75
    TRUE=76
    FALSE=77
    CHECKED=78
    COMMENT=79
    LINE_COMMENT=80

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
            self.state = 154
            self.match(CalcParser.MAIN)
            self.state = 155
            self.match(CalcParser.T__5)
            self.state = 156
            self.match(CalcParser.T__6)
            self.state = 157
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
            self.state = 159
            self.match(CalcParser.BEGIN)
            self.state = 163
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while ((((_la - 38)) & ~0x3f) == 0 and ((1 << (_la - 38)) & ((1 << (CalcParser.CASE - 38)) | (1 << (CalcParser.IF - 38)) | (1 << (CalcParser.FOR - 38)) | (1 << (CalcParser.BREAK - 38)) | (1 << (CalcParser.WITHFORMS - 38)) | (1 << (CalcParser.WITHNEWTAG - 38)) | (1 << (CalcParser.RETURN - 38)) | (1 << (CalcParser.BEGIN - 38)) | (1 << (CalcParser.ID - 38)))) != 0):
                self.state = 160
                self.stmt()
                self.state = 165
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 166
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
        self.enterRule(localctx, 20, self.RULE_stmt)
        try:
            self.state = 182
            token = self._input.LA(1)
            if token in [CalcParser.BREAK, CalcParser.RETURN, CalcParser.BEGIN, CalcParser.ID]:
                self.enterOuterAlt(localctx, 1)
                self.state = 173
                la_ = self._interp.adaptivePredict(self._input,7,self._ctx)
                if la_ == 1:
                    self.state = 168
                    self.assign()
                    pass

                elif la_ == 2:
                    self.state = 169
                    self.call()
                    pass

                elif la_ == 3:
                    self.state = 170
                    self.ret()
                    pass

                elif la_ == 4:
                    self.state = 171
                    self.block()
                    pass

                elif la_ == 5:
                    self.state = 172
                    self.breakStruct()
                    pass


                self.state = 175
                self.match(CalcParser.T__2)

            elif token in [CalcParser.FOR]:
                self.enterOuterAlt(localctx, 2)
                self.state = 177
                self.forloopstruct()

            elif token in [CalcParser.IF]:
                self.enterOuterAlt(localctx, 3)
                self.state = 178
                self.ifStruct()

            elif token in [CalcParser.CASE]:
                self.enterOuterAlt(localctx, 4)
                self.state = 179
                self.caseStuct()

            elif token in [CalcParser.WITHFORMS]:
                self.enterOuterAlt(localctx, 5)
                self.state = 180
                self.withForms()

            elif token in [CalcParser.WITHNEWTAG]:
                self.enterOuterAlt(localctx, 6)
                self.state = 181
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
        self.enterRule(localctx, 22, self.RULE_open_stmt)
        try:
            self.state = 193
            la_ = self._interp.adaptivePredict(self._input,9,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 184
                self.assign()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 185
                self.call()
                pass

            elif la_ == 3:
                self.enterOuterAlt(localctx, 3)
                self.state = 186
                self.ret()
                pass

            elif la_ == 4:
                self.enterOuterAlt(localctx, 4)
                self.state = 187
                self.block()
                pass

            elif la_ == 5:
                self.enterOuterAlt(localctx, 5)
                self.state = 188
                self.caseStuct()
                pass

            elif la_ == 6:
                self.enterOuterAlt(localctx, 6)
                self.state = 189
                self.forloopstruct()
                pass

            elif la_ == 7:
                self.enterOuterAlt(localctx, 7)
                self.state = 190
                self.ifStruct()
                pass

            elif la_ == 8:
                self.enterOuterAlt(localctx, 8)
                self.state = 191
                self.withForms()
                pass

            elif la_ == 9:
                self.enterOuterAlt(localctx, 9)
                self.state = 192
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
        self.enterRule(localctx, 24, self.RULE_assign)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 195
            self.full_id()
            self.state = 196
            _la = self._input.LA(1)
            if not(((((_la - 67)) & ~0x3f) == 0 and ((1 << (_la - 67)) & ((1 << (CalcParser.LET - 67)) | (1 << (CalcParser.ALTLET - 67)) | (1 << (CalcParser.CRAZYLET - 67)))) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self.consume()
            self.state = 197
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
            self.state = 199
            self.match(CalcParser.ID)
            self.state = 200
            self.match(CalcParser.T__5)
            self.state = 201
            self.argList()
            self.state = 202
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
            self.state = 204
            self.full_id()
            self.state = 205
            self.match(CalcParser.T__8)
            self.state = 206
            self.start_index()
            self.state = 207
            self.match(CalcParser.T__9)
            self.state = 208
            self.end_index()
            self.state = 209
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
            self.state = 213
            la_ = self._interp.adaptivePredict(self._input,10,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 211
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 212
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
            self.state = 217
            la_ = self._interp.adaptivePredict(self._input,11,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 215
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 216
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
            self.state = 237
            la_ = self._interp.adaptivePredict(self._input,12,self._ctx)
            if la_ == 1:
                localctx = CalcParser.NotContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx

                self.state = 220
                self.match(CalcParser.NOT)
                self.state = 221
                self.expr(7)
                pass

            elif la_ == 2:
                localctx = CalcParser.LiteralContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 222
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 3:
                localctx = CalcParser.RangeContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 223
                self.rangeExpr()
                pass

            elif la_ == 4:
                localctx = CalcParser.BoolContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 224
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
                self.state = 225
                self.call()
                pass

            elif la_ == 6:
                localctx = CalcParser.MultiCopyAccumulateContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 226
                self.multicopy_accum()
                pass

            elif la_ == 7:
                localctx = CalcParser.MaxContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 227
                self.match(CalcParser.T__30)
                self.state = 228
                self.match(CalcParser.T__5)
                self.state = 229
                self.argList()
                self.state = 230
                self.match(CalcParser.T__6)
                pass

            elif la_ == 8:
                localctx = CalcParser.ParensContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 232
                self.match(CalcParser.T__5)
                self.state = 233
                self.expr(0)
                self.state = 234
                self.match(CalcParser.T__6)
                pass

            elif la_ == 9:
                localctx = CalcParser.VarRefContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 236
                self.full_id()
                pass


            self._ctx.stop = self._input.LT(-1)
            self.state = 256
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,14,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    self.state = 254
                    la_ = self._interp.adaptivePredict(self._input,13,self._ctx)
                    if la_ == 1:
                        localctx = CalcParser.DivMulContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 239
                        if not self.precpred(self._ctx, 14):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 14)")
                        self.state = 240
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.T__11 or _la==CalcParser.T__12):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 241
                        self.expr(15)
                        pass

                    elif la_ == 2:
                        localctx = CalcParser.AddSubContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 242
                        if not self.precpred(self._ctx, 13):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 13)")
                        self.state = 243
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.T__13 or _la==CalcParser.T__14):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 244
                        self.expr(14)
                        pass

                    elif la_ == 3:
                        localctx = CalcParser.ModContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 245
                        if not self.precpred(self._ctx, 12):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 12)")
                        self.state = 246
                        localctx.op = self.match(CalcParser.MOD)
                        self.state = 247
                        self.expr(13)
                        pass

                    elif la_ == 4:
                        localctx = CalcParser.LogicContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 248
                        if not self.precpred(self._ctx, 11):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 11)")
                        self.state = 249
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.AND or _la==CalcParser.OR):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 250
                        self.expr(12)
                        pass

                    elif la_ == 5:
                        localctx = CalcParser.PredicateContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 251
                        if not self.precpred(self._ctx, 10):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 10)")
                        self.state = 252
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not((((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.T__15) | (1 << CalcParser.T__16) | (1 << CalcParser.T__17) | (1 << CalcParser.T__18) | (1 << CalcParser.T__19) | (1 << CalcParser.T__20) | (1 << CalcParser.T__21) | (1 << CalcParser.IN))) != 0)):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 253
                        self.expr(11)
                        pass

             
                self.state = 258
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
        self.enterRule(localctx, 36, self.RULE_argList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 267
            _la = self._input.LA(1)
            if (((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.T__5) | (1 << CalcParser.T__8) | (1 << CalcParser.T__22) | (1 << CalcParser.T__23) | (1 << CalcParser.T__24) | (1 << CalcParser.T__25) | (1 << CalcParser.T__26) | (1 << CalcParser.T__27) | (1 << CalcParser.T__28) | (1 << CalcParser.T__29) | (1 << CalcParser.T__30) | (1 << CalcParser.LITERAL) | (1 << CalcParser.NOT))) != 0) or _la==CalcParser.ID:
                self.state = 259
                self.expr(0)
                self.state = 264
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__31:
                    self.state = 260
                    self.match(CalcParser.T__31)
                    self.state = 261
                    self.expr(0)
                    self.state = 266
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
            self.state = 269
            _la = self._input.LA(1)
            if not(_la==CalcParser.T__0 or _la==CalcParser.T__32):
                self._errHandler.recoverInline(self)
            else:
                self.consume()
            self.state = 270
            self.full_id()
            self.state = 271
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
            self.state = 273
            self.match(CalcParser.VAR)
            self.state = 277
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,17,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    self.state = 274
                    self.declList() 
                self.state = 279
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
        self.enterRule(localctx, 42, self.RULE_constdecl)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 280
            self.match(CalcParser.CONSTANT)
            self.state = 284
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==CalcParser.ID:
                self.state = 281
                self.constdeclList()
                self.state = 286
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
            self.state = 295
            _la = self._input.LA(1)
            if _la==CalcParser.T__7 or _la==CalcParser.ID:
                self.state = 287
                self.typeDecl()
                self.state = 292
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__2:
                    self.state = 288
                    self.match(CalcParser.T__2)
                    self.state = 289
                    self.typeDecl()
                    self.state = 294
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
            self.state = 305
            _la = self._input.LA(1)
            if _la==CalcParser.ID:
                self.state = 297
                self.varDecl()
                self.state = 302
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__31:
                    self.state = 298
                    self.match(CalcParser.T__31)
                    self.state = 299
                    self.varDecl()
                    self.state = 304
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



            self.state = 307
            self.match(CalcParser.T__7)
            self.state = 308
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
            self.state = 318
            _la = self._input.LA(1)
            if _la==CalcParser.ID:
                self.state = 310
                self.varDecl()
                self.state = 315
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__31:
                    self.state = 311
                    self.match(CalcParser.T__31)
                    self.state = 312
                    self.varDecl()
                    self.state = 317
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



            self.state = 320
            self.match(CalcParser.T__7)
            self.state = 321
            self.r_type()
            self.state = 322
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
            self.state = 324
            self.varDecl()
            self.state = 325
            self.match(CalcParser.T__19)
            self.state = 326
            self.match(CalcParser.LITERAL)
            self.state = 327
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
            self.state = 329
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
            self.state = 332
            _la = self._input.LA(1)
            if _la==CalcParser.ARRAY or _la==CalcParser.AUTOARRAY:
                self.state = 331
                self.arrayDecl()


            self.state = 334
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
            self.state = 336
            _la = self._input.LA(1)
            if not(_la==CalcParser.ARRAY or _la==CalcParser.AUTOARRAY):
                self._errHandler.recoverInline(self)
            else:
                self.consume()
            self.state = 337
            self.match(CalcParser.T__8)
            self.state = 338
            self.match(CalcParser.LITERAL)
            self.state = 339
            self.match(CalcParser.T__10)
            self.state = 340
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
            self.state = 342
            self.match(CalcParser.T__8)
            self.state = 343
            self.expr(0)
            self.state = 353
            token = self._input.LA(1)
            if token in [CalcParser.T__9]:
                self.state = 344
                self.match(CalcParser.T__9)
                self.state = 345
                self.expr(0)

            elif token in [CalcParser.T__10, CalcParser.T__31]:
                self.state = 350
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__31:
                    self.state = 346
                    self.match(CalcParser.T__31)
                    self.state = 347
                    self.expr(0)
                    self.state = 352
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)


            else:
                raise NoViableAltException(self)

            self.state = 355
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
            self.state = 357
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
        self.enterRule(localctx, 62, self.RULE_ifStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 359
            self.match(CalcParser.IF)
            self.state = 360
            self.expr(0)
            self.state = 361
            self.match(CalcParser.THEN)
            self.state = 362
            self.open_stmt()
            self.state = 366
            la_ = self._interp.adaptivePredict(self._input,28,self._ctx)
            if la_ == 1:
                self.state = 363
                self.match(CalcParser.T__2)

            elif la_ == 2:
                self.state = 364
                self.match(CalcParser.ELSE)
                self.state = 365
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
        self.enterRule(localctx, 64, self.RULE_withForms)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 368
            self.match(CalcParser.WITHFORMS)
            self.state = 369
            self.match(CalcParser.T__5)
            self.state = 370
            self.full_id()
            self.state = 371
            self.match(CalcParser.T__31)
            self.state = 372
            self.full_id()
            self.state = 373
            self.match(CalcParser.T__6)
            self.state = 374
            self.match(CalcParser.DO)
            self.state = 375
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
        self.enterRule(localctx, 66, self.RULE_withNewTag)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 377
            self.match(CalcParser.WITHNEWTAG)
            self.state = 378
            self.match(CalcParser.T__5)
            self.state = 379
            self.expr(0)
            self.state = 380
            self.match(CalcParser.T__6)
            self.state = 381
            self.match(CalcParser.DO)
            self.state = 382
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
        self.enterRule(localctx, 68, self.RULE_elseStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 384
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
            self.state = 386
            self.match(CalcParser.DO)
            self.state = 389
            _la = self._input.LA(1)
            if _la==CalcParser.WHILE:
                self.state = 387
                self.match(CalcParser.WHILE)
                self.state = 388
                localctx.preCond = self.expr(0)


            self.state = 391
            self.stmt()
            self.state = 392
            self.match(CalcParser.LOOP)
            self.state = 395
            _la = self._input.LA(1)
            if _la==CalcParser.WHILE:
                self.state = 393
                self.match(CalcParser.WHILE)
                self.state = 394
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
            self.state = 397
            self.match(CalcParser.CASE)
            self.state = 398
            self.expr(0)
            self.state = 399
            self.match(CalcParser.OF)
            self.state = 401 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 400
                self.caseStmt()
                self.state = 403 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not (_la==CalcParser.LITERAL or _la==CalcParser.OTHERWISE):
                    break

            self.state = 405
            self.match(CalcParser.END)
            self.state = 406
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
            self.state = 418
            token = self._input.LA(1)
            if token in [CalcParser.LITERAL]:
                self.state = 408
                self.match(CalcParser.LITERAL)
                self.state = 413
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__31:
                    self.state = 409
                    self.match(CalcParser.T__31)
                    self.state = 410
                    self.match(CalcParser.LITERAL)
                    self.state = 415
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)

                self.state = 416
                self.match(CalcParser.T__7)

            elif token in [CalcParser.OTHERWISE]:
                self.state = 417
                self.match(CalcParser.OTHERWISE)

            else:
                raise NoViableAltException(self)

            self.state = 420
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
        self.enterRule(localctx, 76, self.RULE_forloopstruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 422
            self.match(CalcParser.FOR)
            self.state = 423
            self.match(CalcParser.ID)
            self.state = 424
            self.match(CalcParser.LET)
            self.state = 425
            self.expr(0)
            self.state = 426
            self.match(CalcParser.TO)
            self.state = 427
            self.expr(0)
            self.state = 428
            self.match(CalcParser.DO)
            self.state = 431
            la_ = self._interp.adaptivePredict(self._input,34,self._ctx)
            if la_ == 1:
                self.state = 429
                self.block()
                pass

            elif la_ == 2:
                self.state = 430
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
        self.enterRule(localctx, 78, self.RULE_breakStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 433
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
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 435
            self.match(CalcParser.RETURN)
            self.state = 437
            la_ = self._interp.adaptivePredict(self._input,35,self._ctx)
            if la_ == 1:
                self.state = 436
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
            self.state = 439
            localctx.retType = self.full_id()
            self.state = 440
            localctx.fnName = self.full_id()
            self.state = 441
            self.formParList()
            self.state = 443
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 442
                self.vardecl()


            self.state = 445
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
            self.state = 447
            self.match(CalcParser.T__5)
            self.state = 451
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while ((((_la - 35)) & ~0x3f) == 0 and ((1 << (_la - 35)) & ((1 << (CalcParser.ARRAY - 35)) | (1 << (CalcParser.AUTOARRAY - 35)) | (1 << (CalcParser.ID - 35)))) != 0):
                self.state = 448
                self.formPar()
                self.state = 453
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 454
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
            self.state = 456
            self.r_type()
            self.state = 457
            localctx.name = self.full_id()
            self.state = 460
            _la = self._input.LA(1)
            if _la==CalcParser.LET:
                self.state = 458
                self.match(CalcParser.LET)
                self.state = 459
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
            self.state = 462
            self.match(CalcParser.ID)
            self.state = 464
            la_ = self._interp.adaptivePredict(self._input,39,self._ctx)
            if la_ == 1:
                self.state = 463
                self.array_index()


            self.state = 469
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,40,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    self.state = 466
                    self.sub_id() 
                self.state = 471
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,40,self._ctx)

            self.state = 473
            la_ = self._interp.adaptivePredict(self._input,41,self._ctx)
            if la_ == 1:
                self.state = 472
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
            self.state = 475
            self.match(CalcParser.T__7)
            self.state = 476
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
            self.state = 478
            self.match(CalcParser.T__1)
            self.state = 479
            self.match(CalcParser.ID)
            self.state = 481
            la_ = self._interp.adaptivePredict(self._input,42,self._ctx)
            if la_ == 1:
                self.state = 480
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
            self.state = 483
            self.match(CalcParser.T__8)
            self.state = 486
            la_ = self._interp.adaptivePredict(self._input,43,self._ctx)
            if la_ == 1:
                self.state = 484
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 2:
                self.state = 485
                self.expr(0)
                pass


            self.state = 488
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
            self.state = 490
            _la = self._input.LA(1)
            if not(((((_la - 76)) & ~0x3f) == 0 and ((1 << (_la - 76)) & ((1 << (CalcParser.TRUE - 76)) | (1 << (CalcParser.FALSE - 76)) | (1 << (CalcParser.CHECKED - 76)))) != 0)):
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
         



