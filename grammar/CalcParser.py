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
        buf.write(u"H\u01b2\4\2\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t")
        buf.write(u"\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t\13\4\f\t\f\4\r\t\r")
        buf.write(u"\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22\4")
        buf.write(u"\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30")
        buf.write(u"\t\30\4\31\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t")
        buf.write(u"\35\4\36\t\36\4\37\t\37\4 \t \4!\t!\4\"\t\"\4#\t#\4$")
        buf.write(u"\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4,\t")
        buf.write(u",\4-\t-\3\2\3\2\5\2]\n\2\3\2\5\2`\n\2\3\2\7\2c\n\2\f")
        buf.write(u"\2\16\2f\13\2\3\3\3\3\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4")
        buf.write(u"\3\4\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\5\6}\n\6")
        buf.write(u"\3\6\3\6\3\7\3\7\7\7\u0083\n\7\f\7\16\7\u0086\13\7\3")
        buf.write(u"\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\5\b\u0090\n\b\3\b\3\b")
        buf.write(u"\3\b\3\b\3\b\3\b\5\b\u0098\n\b\3\t\3\t\3\t\3\t\3\t\3")
        buf.write(u"\t\3\t\3\t\3\t\5\t\u00a3\n\t\3\n\3\n\3\n\3\n\3\13\3\13")
        buf.write(u"\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\r\3\r\5")
        buf.write(u"\r\u00b7\n\r\3\16\3\16\5\16\u00bb\n\16\3\17\3\17\3\17")
        buf.write(u"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3")
        buf.write(u"\17\3\17\3\17\3\17\5\17\u00ce\n\17\3\17\3\17\3\17\3\17")
        buf.write(u"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\7\17\u00dc\n")
        buf.write(u"\17\f\17\16\17\u00df\13\17\3\20\3\20\3\20\7\20\u00e4")
        buf.write(u"\n\20\f\20\16\20\u00e7\13\20\5\20\u00e9\n\20\3\21\3\21")
        buf.write(u"\3\21\3\21\3\22\3\22\7\22\u00f1\n\22\f\22\16\22\u00f4")
        buf.write(u"\13\22\3\23\3\23\7\23\u00f8\n\23\f\23\16\23\u00fb\13")
        buf.write(u"\23\3\24\3\24\3\24\7\24\u0100\n\24\f\24\16\24\u0103\13")
        buf.write(u"\24\5\24\u0105\n\24\3\25\3\25\3\25\7\25\u010a\n\25\f")
        buf.write(u"\25\16\25\u010d\13\25\5\25\u010f\n\25\3\25\3\25\3\25")
        buf.write(u"\3\26\3\26\3\26\7\26\u0117\n\26\f\26\16\26\u011a\13\26")
        buf.write(u"\5\26\u011c\n\26\3\26\3\26\3\26\3\26\3\27\3\27\3\27\3")
        buf.write(u"\27\3\27\3\30\3\30\3\31\5\31\u012a\n\31\3\31\3\31\3\32")
        buf.write(u"\3\32\3\32\3\32\3\32\3\32\3\33\3\33\3\34\3\34\3\34\3")
        buf.write(u"\34\3\34\3\34\3\34\5\34\u013d\n\34\3\35\3\35\3\35\3\35")
        buf.write(u"\3\35\3\35\3\35\3\35\3\35\3\36\3\36\3\36\3\36\3\36\3")
        buf.write(u"\36\3\36\3\37\3\37\3 \3 \3 \5 \u0154\n \3 \3 \3 \3 \5")
        buf.write(u" \u015a\n \3!\3!\3!\3!\6!\u0160\n!\r!\16!\u0161\3!\3")
        buf.write(u"!\3!\3\"\3\"\3\"\3\"\3\"\3#\3#\3#\3#\3#\3#\3#\3#\3#\5")
        buf.write(u"#\u0175\n#\3$\3$\3%\3%\5%\u017b\n%\3&\3&\3&\3&\5&\u0181")
        buf.write(u"\n&\3&\3&\3\'\3\'\7\'\u0187\n\'\f\'\16\'\u018a\13\'\3")
        buf.write(u"\'\3\'\3(\3(\3(\3(\5(\u0192\n(\3)\3)\5)\u0196\n)\3)\7")
        buf.write(u")\u0199\n)\f)\16)\u019c\13)\3)\7)\u019f\n)\f)\16)\u01a2")
        buf.write(u"\13)\3*\3*\3*\3+\3+\3+\5+\u01aa\n+\3,\3,\3,\3,\3-\3-")
        buf.write(u"\3-\2\3\34.\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"")
        buf.write(u"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVX\2\t\3\2>@\3\2\32")
        buf.write(u"!\3\2\r\16\3\2\17\20\3\2\21\22\3\2\23\31\3\2DF\u01c1")
        buf.write(u"\2Z\3\2\2\2\4g\3\2\2\2\6m\3\2\2\2\br\3\2\2\2\nt\3\2\2")
        buf.write(u"\2\f\u0080\3\2\2\2\16\u0097\3\2\2\2\20\u00a2\3\2\2\2")
        buf.write(u"\22\u00a4\3\2\2\2\24\u00a8\3\2\2\2\26\u00ad\3\2\2\2\30")
        buf.write(u"\u00b6\3\2\2\2\32\u00ba\3\2\2\2\34\u00cd\3\2\2\2\36\u00e8")
        buf.write(u"\3\2\2\2 \u00ea\3\2\2\2\"\u00ee\3\2\2\2$\u00f5\3\2\2")
        buf.write(u"\2&\u0104\3\2\2\2(\u010e\3\2\2\2*\u011b\3\2\2\2,\u0121")
        buf.write(u"\3\2\2\2.\u0126\3\2\2\2\60\u0129\3\2\2\2\62\u012d\3\2")
        buf.write(u"\2\2\64\u0133\3\2\2\2\66\u0135\3\2\2\28\u013e\3\2\2\2")
        buf.write(u":\u0147\3\2\2\2<\u014e\3\2\2\2>\u0150\3\2\2\2@\u015b")
        buf.write(u"\3\2\2\2B\u0166\3\2\2\2D\u016b\3\2\2\2F\u0176\3\2\2\2")
        buf.write(u"H\u0178\3\2\2\2J\u017c\3\2\2\2L\u0184\3\2\2\2N\u018d")
        buf.write(u"\3\2\2\2P\u0193\3\2\2\2R\u01a3\3\2\2\2T\u01a6\3\2\2\2")
        buf.write(u"V\u01ab\3\2\2\2X\u01af\3\2\2\2Z\\\5\6\4\2[]\5$\23\2\\")
        buf.write(u"[\3\2\2\2\\]\3\2\2\2]_\3\2\2\2^`\5\"\22\2_^\3\2\2\2_")
        buf.write(u"`\3\2\2\2`d\3\2\2\2ac\5\n\6\2ba\3\2\2\2cf\3\2\2\2db\3")
        buf.write(u"\2\2\2de\3\2\2\2e\3\3\2\2\2fd\3\2\2\2gh\7\3\2\2hi\7A")
        buf.write(u"\2\2ij\7\4\2\2jk\5\b\5\2kl\7\5\2\2l\5\3\2\2\2mn\7\6\2")
        buf.write(u"\2no\7A\2\2op\7\7\2\2pq\7\5\2\2q\7\3\2\2\2rs\5P)\2s\t")
        buf.write(u"\3\2\2\2tu\7/\2\2uv\7A\2\2vw\7\b\2\2wx\5&\24\2xy\7\t")
        buf.write(u"\2\2yz\7\5\2\2z|\5 \21\2{}\5\"\22\2|{\3\2\2\2|}\3\2\2")
        buf.write(u"\2}~\3\2\2\2~\177\5\16\b\2\177\13\3\2\2\2\u0080\u0084")
        buf.write(u"\7<\2\2\u0081\u0083\5\16\b\2\u0082\u0081\3\2\2\2\u0083")
        buf.write(u"\u0086\3\2\2\2\u0084\u0082\3\2\2\2\u0084\u0085\3\2\2")
        buf.write(u"\2\u0085\u0087\3\2\2\2\u0086\u0084\3\2\2\2\u0087\u0088")
        buf.write(u"\7=\2\2\u0088\r\3\2\2\2\u0089\u0090\5\22\n\2\u008a\u0090")
        buf.write(u"\5\24\13\2\u008b\u0090\5H%\2\u008c\u0090\5\f\7\2\u008d")
        buf.write(u"\u0090\5D#\2\u008e\u0090\5F$\2\u008f\u0089\3\2\2\2\u008f")
        buf.write(u"\u008a\3\2\2\2\u008f\u008b\3\2\2\2\u008f\u008c\3\2\2")
        buf.write(u"\2\u008f\u008d\3\2\2\2\u008f\u008e\3\2\2\2\u0090\u0091")
        buf.write(u"\3\2\2\2\u0091\u0092\7\5\2\2\u0092\u0098\3\2\2\2\u0093")
        buf.write(u"\u0098\5\66\34\2\u0094\u0098\5@!\2\u0095\u0098\58\35")
        buf.write(u"\2\u0096\u0098\5:\36\2\u0097\u008f\3\2\2\2\u0097\u0093")
        buf.write(u"\3\2\2\2\u0097\u0094\3\2\2\2\u0097\u0095\3\2\2\2\u0097")
        buf.write(u"\u0096\3\2\2\2\u0098\17\3\2\2\2\u0099\u00a3\5\22\n\2")
        buf.write(u"\u009a\u00a3\5\24\13\2\u009b\u00a3\5H%\2\u009c\u00a3")
        buf.write(u"\5\f\7\2\u009d\u00a3\5@!\2\u009e\u00a3\5D#\2\u009f\u00a3")
        buf.write(u"\5\66\34\2\u00a0\u00a3\58\35\2\u00a1\u00a3\5:\36\2\u00a2")
        buf.write(u"\u0099\3\2\2\2\u00a2\u009a\3\2\2\2\u00a2\u009b\3\2\2")
        buf.write(u"\2\u00a2\u009c\3\2\2\2\u00a2\u009d\3\2\2\2\u00a2\u009e")
        buf.write(u"\3\2\2\2\u00a2\u009f\3\2\2\2\u00a2\u00a0\3\2\2\2\u00a2")
        buf.write(u"\u00a1\3\2\2\2\u00a3\21\3\2\2\2\u00a4\u00a5\5P)\2\u00a5")
        buf.write(u"\u00a6\t\2\2\2\u00a6\u00a7\5\34\17\2\u00a7\23\3\2\2\2")
        buf.write(u"\u00a8\u00a9\7A\2\2\u00a9\u00aa\7\b\2\2\u00aa\u00ab\5")
        buf.write(u"\36\20\2\u00ab\u00ac\7\t\2\2\u00ac\25\3\2\2\2\u00ad\u00ae")
        buf.write(u"\5P)\2\u00ae\u00af\7\n\2\2\u00af\u00b0\5\30\r\2\u00b0")
        buf.write(u"\u00b1\7\13\2\2\u00b1\u00b2\5\32\16\2\u00b2\u00b3\7\f")
        buf.write(u"\2\2\u00b3\27\3\2\2\2\u00b4\u00b7\7%\2\2\u00b5\u00b7")
        buf.write(u"\5\34\17\2\u00b6\u00b4\3\2\2\2\u00b6\u00b5\3\2\2\2\u00b7")
        buf.write(u"\31\3\2\2\2\u00b8\u00bb\7%\2\2\u00b9\u00bb\5\34\17\2")
        buf.write(u"\u00ba\u00b8\3\2\2\2\u00ba\u00b9\3\2\2\2\u00bb\33\3\2")
        buf.write(u"\2\2\u00bc\u00bd\b\17\1\2\u00bd\u00be\7\63\2\2\u00be")
        buf.write(u"\u00ce\5\34\17\t\u00bf\u00ce\7%\2\2\u00c0\u00ce\t\3\2")
        buf.write(u"\2\u00c1\u00ce\5\24\13\2\u00c2\u00ce\5\26\f\2\u00c3\u00c4")
        buf.write(u"\7\"\2\2\u00c4\u00c5\7\b\2\2\u00c5\u00c6\5\36\20\2\u00c6")
        buf.write(u"\u00c7\7\t\2\2\u00c7\u00ce\3\2\2\2\u00c8\u00c9\7\b\2")
        buf.write(u"\2\u00c9\u00ca\5\34\17\2\u00ca\u00cb\7\t\2\2\u00cb\u00ce")
        buf.write(u"\3\2\2\2\u00cc\u00ce\5P)\2\u00cd\u00bc\3\2\2\2\u00cd")
        buf.write(u"\u00bf\3\2\2\2\u00cd\u00c0\3\2\2\2\u00cd\u00c1\3\2\2")
        buf.write(u"\2\u00cd\u00c2\3\2\2\2\u00cd\u00c3\3\2\2\2\u00cd\u00c8")
        buf.write(u"\3\2\2\2\u00cd\u00cc\3\2\2\2\u00ce\u00dd\3\2\2\2\u00cf")
        buf.write(u"\u00d0\f\16\2\2\u00d0\u00d1\t\4\2\2\u00d1\u00dc\5\34")
        buf.write(u"\17\17\u00d2\u00d3\f\r\2\2\u00d3\u00d4\t\5\2\2\u00d4")
        buf.write(u"\u00dc\5\34\17\16\u00d5\u00d6\f\f\2\2\u00d6\u00d7\t\6")
        buf.write(u"\2\2\u00d7\u00dc\5\34\17\r\u00d8\u00d9\f\13\2\2\u00d9")
        buf.write(u"\u00da\t\7\2\2\u00da\u00dc\5\34\17\f\u00db\u00cf\3\2")
        buf.write(u"\2\2\u00db\u00d2\3\2\2\2\u00db\u00d5\3\2\2\2\u00db\u00d8")
        buf.write(u"\3\2\2\2\u00dc\u00df\3\2\2\2\u00dd\u00db\3\2\2\2\u00dd")
        buf.write(u"\u00de\3\2\2\2\u00de\35\3\2\2\2\u00df\u00dd\3\2\2\2\u00e0")
        buf.write(u"\u00e5\5\34\17\2\u00e1\u00e2\7#\2\2\u00e2\u00e4\5\34")
        buf.write(u"\17\2\u00e3\u00e1\3\2\2\2\u00e4\u00e7\3\2\2\2\u00e5\u00e3")
        buf.write(u"\3\2\2\2\u00e5\u00e6\3\2\2\2\u00e6\u00e9\3\2\2\2\u00e7")
        buf.write(u"\u00e5\3\2\2\2\u00e8\u00e0\3\2\2\2\u00e8\u00e9\3\2\2")
        buf.write(u"\2\u00e9\37\3\2\2\2\u00ea\u00eb\7\3\2\2\u00eb\u00ec\5")
        buf.write(u"P)\2\u00ec\u00ed\7\5\2\2\u00ed!\3\2\2\2\u00ee\u00f2\7")
        buf.write(u")\2\2\u00ef\u00f1\5*\26\2\u00f0\u00ef\3\2\2\2\u00f1\u00f4")
        buf.write(u"\3\2\2\2\u00f2\u00f0\3\2\2\2\u00f2\u00f3\3\2\2\2\u00f3")
        buf.write(u"#\3\2\2\2\u00f4\u00f2\3\2\2\2\u00f5\u00f9\7*\2\2\u00f6")
        buf.write(u"\u00f8\5,\27\2\u00f7\u00f6\3\2\2\2\u00f8\u00fb\3\2\2")
        buf.write(u"\2\u00f9\u00f7\3\2\2\2\u00f9\u00fa\3\2\2\2\u00fa%\3\2")
        buf.write(u"\2\2\u00fb\u00f9\3\2\2\2\u00fc\u0101\5(\25\2\u00fd\u00fe")
        buf.write(u"\7\5\2\2\u00fe\u0100\5(\25\2\u00ff\u00fd\3\2\2\2\u0100")
        buf.write(u"\u0103\3\2\2\2\u0101\u00ff\3\2\2\2\u0101\u0102\3\2\2")
        buf.write(u"\2\u0102\u0105\3\2\2\2\u0103\u0101\3\2\2\2\u0104\u00fc")
        buf.write(u"\3\2\2\2\u0104\u0105\3\2\2\2\u0105\'\3\2\2\2\u0106\u010b")
        buf.write(u"\5.\30\2\u0107\u0108\7#\2\2\u0108\u010a\5.\30\2\u0109")
        buf.write(u"\u0107\3\2\2\2\u010a\u010d\3\2\2\2\u010b\u0109\3\2\2")
        buf.write(u"\2\u010b\u010c\3\2\2\2\u010c\u010f\3\2\2\2\u010d\u010b")
        buf.write(u"\3\2\2\2\u010e\u0106\3\2\2\2\u010e\u010f\3\2\2\2\u010f")
        buf.write(u"\u0110\3\2\2\2\u0110\u0111\7$\2\2\u0111\u0112\5\60\31")
        buf.write(u"\2\u0112)\3\2\2\2\u0113\u0118\5.\30\2\u0114\u0115\7#")
        buf.write(u"\2\2\u0115\u0117\5.\30\2\u0116\u0114\3\2\2\2\u0117\u011a")
        buf.write(u"\3\2\2\2\u0118\u0116\3\2\2\2\u0118\u0119\3\2\2\2\u0119")
        buf.write(u"\u011c\3\2\2\2\u011a\u0118\3\2\2\2\u011b\u0113\3\2\2")
        buf.write(u"\2\u011b\u011c\3\2\2\2\u011c\u011d\3\2\2\2\u011d\u011e")
        buf.write(u"\7$\2\2\u011e\u011f\5\60\31\2\u011f\u0120\7\5\2\2\u0120")
        buf.write(u"+\3\2\2\2\u0121\u0122\5.\30\2\u0122\u0123\7\27\2\2\u0123")
        buf.write(u"\u0124\7%\2\2\u0124\u0125\7\5\2\2\u0125-\3\2\2\2\u0126")
        buf.write(u"\u0127\7A\2\2\u0127/\3\2\2\2\u0128\u012a\5\62\32\2\u0129")
        buf.write(u"\u0128\3\2\2\2\u0129\u012a\3\2\2\2\u012a\u012b\3\2\2")
        buf.write(u"\2\u012b\u012c\7A\2\2\u012c\61\3\2\2\2\u012d\u012e\7")
        buf.write(u"&\2\2\u012e\u012f\7\n\2\2\u012f\u0130\7%\2\2\u0130\u0131")
        buf.write(u"\7\f\2\2\u0131\u0132\7\'\2\2\u0132\63\3\2\2\2\u0133\u0134")
        buf.write(u"\5\66\34\2\u0134\65\3\2\2\2\u0135\u0136\7+\2\2\u0136")
        buf.write(u"\u0137\5\34\17\2\u0137\u0138\7-\2\2\u0138\u013c\5\20")
        buf.write(u"\t\2\u0139\u013d\7\5\2\2\u013a\u013b\7,\2\2\u013b\u013d")
        buf.write(u"\5<\37\2\u013c\u0139\3\2\2\2\u013c\u013a\3\2\2\2\u013c")
        buf.write(u"\u013d\3\2\2\2\u013d\67\3\2\2\2\u013e\u013f\7\65\2\2")
        buf.write(u"\u013f\u0140\7\b\2\2\u0140\u0141\5P)\2\u0141\u0142\7")
        buf.write(u"#\2\2\u0142\u0143\5P)\2\u0143\u0144\7\t\2\2\u0144\u0145")
        buf.write(u"\7\60\2\2\u0145\u0146\5\16\b\2\u01469\3\2\2\2\u0147\u0148")
        buf.write(u"\7\66\2\2\u0148\u0149\7\b\2\2\u0149\u014a\5\34\17\2\u014a")
        buf.write(u"\u014b\7\t\2\2\u014b\u014c\7\60\2\2\u014c\u014d\5\16")
        buf.write(u"\b\2\u014d;\3\2\2\2\u014e\u014f\5\16\b\2\u014f=\3\2\2")
        buf.write(u"\2\u0150\u0153\7\60\2\2\u0151\u0152\78\2\2\u0152\u0154")
        buf.write(u"\5\34\17\2\u0153\u0151\3\2\2\2\u0153\u0154\3\2\2\2\u0154")
        buf.write(u"\u0155\3\2\2\2\u0155\u0156\5\16\b\2\u0156\u0159\79\2")
        buf.write(u"\2\u0157\u0158\78\2\2\u0158\u015a\5\34\17\2\u0159\u0157")
        buf.write(u"\3\2\2\2\u0159\u015a\3\2\2\2\u015a?\3\2\2\2\u015b\u015c")
        buf.write(u"\7(\2\2\u015c\u015d\5\34\17\2\u015d\u015f\7\'\2\2\u015e")
        buf.write(u"\u0160\5B\"\2\u015f\u015e\3\2\2\2\u0160\u0161\3\2\2\2")
        buf.write(u"\u0161\u015f\3\2\2\2\u0161\u0162\3\2\2\2\u0162\u0163")
        buf.write(u"\3\2\2\2\u0163\u0164\7=\2\2\u0164\u0165\7\5\2\2\u0165")
        buf.write(u"A\3\2\2\2\u0166\u0167\7%\2\2\u0167\u0168\7$\2\2\u0168")
        buf.write(u"\u0169\5\f\7\2\u0169\u016a\7\5\2\2\u016aC\3\2\2\2\u016b")
        buf.write(u"\u016c\7\62\2\2\u016c\u016d\7A\2\2\u016d\u016e\7>\2\2")
        buf.write(u"\u016e\u016f\5\34\17\2\u016f\u0170\7\61\2\2\u0170\u0171")
        buf.write(u"\5\34\17\2\u0171\u0174\7\60\2\2\u0172\u0175\5\f\7\2\u0173")
        buf.write(u"\u0175\5\16\b\2\u0174\u0172\3\2\2\2\u0174\u0173\3\2\2")
        buf.write(u"\2\u0175E\3\2\2\2\u0176\u0177\7\64\2\2\u0177G\3\2\2\2")
        buf.write(u"\u0178\u017a\7:\2\2\u0179\u017b\5\34\17\2\u017a\u0179")
        buf.write(u"\3\2\2\2\u017a\u017b\3\2\2\2\u017bI\3\2\2\2\u017c\u017d")
        buf.write(u"\5P)\2\u017d\u017e\5P)\2\u017e\u0180\5L\'\2\u017f\u0181")
        buf.write(u"\5\"\22\2\u0180\u017f\3\2\2\2\u0180\u0181\3\2\2\2\u0181")
        buf.write(u"\u0182\3\2\2\2\u0182\u0183\5\f\7\2\u0183K\3\2\2\2\u0184")
        buf.write(u"\u0188\7\b\2\2\u0185\u0187\5N(\2\u0186\u0185\3\2\2\2")
        buf.write(u"\u0187\u018a\3\2\2\2\u0188\u0186\3\2\2\2\u0188\u0189")
        buf.write(u"\3\2\2\2\u0189\u018b\3\2\2\2\u018a\u0188\3\2\2\2\u018b")
        buf.write(u"\u018c\7\t\2\2\u018cM\3\2\2\2\u018d\u018e\5\60\31\2\u018e")
        buf.write(u"\u0191\5P)\2\u018f\u0190\7>\2\2\u0190\u0192\5\34\17\2")
        buf.write(u"\u0191\u018f\3\2\2\2\u0191\u0192\3\2\2\2\u0192O\3\2\2")
        buf.write(u"\2\u0193\u0195\7A\2\2\u0194\u0196\5V,\2\u0195\u0194\3")
        buf.write(u"\2\2\2\u0195\u0196\3\2\2\2\u0196\u019a\3\2\2\2\u0197")
        buf.write(u"\u0199\5R*\2\u0198\u0197\3\2\2\2\u0199\u019c\3\2\2\2")
        buf.write(u"\u019a\u0198\3\2\2\2\u019a\u019b\3\2\2\2\u019b\u01a0")
        buf.write(u"\3\2\2\2\u019c\u019a\3\2\2\2\u019d\u019f\5T+\2\u019e")
        buf.write(u"\u019d\3\2\2\2\u019f\u01a2\3\2\2\2\u01a0\u019e\3\2\2")
        buf.write(u"\2\u01a0\u01a1\3\2\2\2\u01a1Q\3\2\2\2\u01a2\u01a0\3\2")
        buf.write(u"\2\2\u01a3\u01a4\7$\2\2\u01a4\u01a5\7A\2\2\u01a5S\3\2")
        buf.write(u"\2\2\u01a6\u01a7\7\4\2\2\u01a7\u01a9\7A\2\2\u01a8\u01aa")
        buf.write(u"\5V,\2\u01a9\u01a8\3\2\2\2\u01a9\u01aa\3\2\2\2\u01aa")
        buf.write(u"U\3\2\2\2\u01ab\u01ac\7\n\2\2\u01ac\u01ad\5\34\17\2\u01ad")
        buf.write(u"\u01ae\7\f\2\2\u01aeW\3\2\2\2\u01af\u01b0\t\b\2\2\u01b0")
        buf.write(u"Y\3\2\2\2\'\\_d|\u0084\u008f\u0097\u00a2\u00b6\u00ba")
        buf.write(u"\u00cd\u00db\u00dd\u00e5\u00e8\u00f2\u00f9\u0101\u0104")
        buf.write(u"\u010b\u010e\u0118\u011b\u0129\u013c\u0153\u0159\u0161")
        buf.write(u"\u0174\u017a\u0180\u0188\u0191\u0195\u019a\u01a0\u01a9")
        return buf.getvalue()


class CalcParser ( Parser ):

    grammarFileName = "java-escape"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ u"<INVALID>", u"'FORM'", u"'.'", u"';'", u"'XMLConverter'", 
                     u"'EFXML'", u"'('", u"')'", u"'['", u"'..'", u"']'", 
                     u"'/'", u"'*'", u"'+'", u"'-'", u"'and'", u"'or'", 
                     u"'>'", u"'<'", u"'<='", u"'>='", u"'='", u"'<>'", 
                     u"'=='", u"'True'", u"'TRUE'", u"'false'", u"'FALSE'", 
                     u"'False'", u"'Checked'", u"'checked'", u"'CHECKED'", 
                     u"'MAX'", u"','", u"':'", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"':='", 
                     u"'?='", u"'#='" ]

    symbolicNames = [ u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"LITERAL", 
                      u"ARRAY", u"OF", u"CASE", u"VAR", u"CONSTANT", u"IF", 
                      u"ELSE", u"THEN", u"SECTION", u"PROCEDURE", u"DO", 
                      u"TO", u"FOR", u"NOT", u"BREAK", u"WITHFORMS", u"WITHNEWTAG", 
                      u"FORM", u"WHILE", u"LOOP", u"RETURN", u"WS", u"BEGIN", 
                      u"END", u"LET", u"ALTLET", u"CRAZYLET", u"ID", u"INT", 
                      u"STRING", u"TRUE", u"FALSE", u"CHECKED", u"COMMENT", 
                      u"LINE_COMMENT" ]

    RULE_calcfile = 0
    RULE_formset = 1
    RULE_converter = 2
    RULE_form = 3
    RULE_section = 4
    RULE_block = 5
    RULE_stmt = 6
    RULE_open_stmt = 7
    RULE_assign = 8
    RULE_call = 9
    RULE_multicopy_accum = 10
    RULE_start_index = 11
    RULE_end_index = 12
    RULE_expr = 13
    RULE_argList = 14
    RULE_formdecl = 15
    RULE_vardecl = 16
    RULE_constdecl = 17
    RULE_typeDeclList = 18
    RULE_typeDecl = 19
    RULE_declList = 20
    RULE_constdeclList = 21
    RULE_varDecl = 22
    RULE_r_type = 23
    RULE_arrayDecl = 24
    RULE_ctrlStruct = 25
    RULE_ifStruct = 26
    RULE_withForms = 27
    RULE_withNewTag = 28
    RULE_elseStruct = 29
    RULE_loopStruct = 30
    RULE_caseStuct = 31
    RULE_caseStmt = 32
    RULE_forloopstruct = 33
    RULE_breakStruct = 34
    RULE_ret = 35
    RULE_function = 36
    RULE_formParList = 37
    RULE_formPar = 38
    RULE_full_id = 39
    RULE_child_id = 40
    RULE_sub_id = 41
    RULE_array_index = 42
    RULE_boolean = 43

    ruleNames =  [ u"calcfile", u"formset", u"converter", u"form", u"section", 
                   u"block", u"stmt", u"open_stmt", u"assign", u"call", 
                   u"multicopy_accum", u"start_index", u"end_index", u"expr", 
                   u"argList", u"formdecl", u"vardecl", u"constdecl", u"typeDeclList", 
                   u"typeDecl", u"declList", u"constdeclList", u"varDecl", 
                   u"r_type", u"arrayDecl", u"ctrlStruct", u"ifStruct", 
                   u"withForms", u"withNewTag", u"elseStruct", u"loopStruct", 
                   u"caseStuct", u"caseStmt", u"forloopstruct", u"breakStruct", 
                   u"ret", u"function", u"formParList", u"formPar", u"full_id", 
                   u"child_id", u"sub_id", u"array_index", u"boolean" ]

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
    OF=37
    CASE=38
    VAR=39
    CONSTANT=40
    IF=41
    ELSE=42
    THEN=43
    SECTION=44
    PROCEDURE=45
    DO=46
    TO=47
    FOR=48
    NOT=49
    BREAK=50
    WITHFORMS=51
    WITHNEWTAG=52
    FORM=53
    WHILE=54
    LOOP=55
    RETURN=56
    WS=57
    BEGIN=58
    END=59
    LET=60
    ALTLET=61
    CRAZYLET=62
    ID=63
    INT=64
    STRING=65
    TRUE=66
    FALSE=67
    CHECKED=68
    COMMENT=69
    LINE_COMMENT=70

    def __init__(self, input):
        super(CalcParser, self).__init__(input)
        self.checkVersion("4.5")
        self._interp = ParserATNSimulator(self, self.atn, self.decisionsToDFA, self.sharedContextCache)
        self._predicates = None



    class CalcfileContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.CalcfileContext, self).__init__(parent, invokingState)
            self.parser = parser

        def converter(self):
            return self.getTypedRuleContext(CalcParser.ConverterContext,0)


        def constdecl(self):
            return self.getTypedRuleContext(CalcParser.ConstdeclContext,0)


        def vardecl(self):
            return self.getTypedRuleContext(CalcParser.VardeclContext,0)


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
            self.state = 88
            self.converter()
            self.state = 90
            _la = self._input.LA(1)
            if _la==CalcParser.CONSTANT:
                self.state = 89
                self.constdecl()


            self.state = 93
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 92
                self.vardecl()


            self.state = 98
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==CalcParser.PROCEDURE:
                self.state = 95
                self.section()
                self.state = 100
                self._errHandler.sync(self)
                _la = self._input.LA(1)

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
        self.enterRule(localctx, 2, self.RULE_formset)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 101
            self.match(CalcParser.T__0)
            self.state = 102
            self.match(CalcParser.ID)
            self.state = 103
            self.match(CalcParser.T__1)
            self.state = 104
            self.form()
            self.state = 105
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
        self.enterRule(localctx, 4, self.RULE_converter)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 107
            self.match(CalcParser.T__3)
            self.state = 108
            self.match(CalcParser.ID)
            self.state = 109
            self.match(CalcParser.T__4)
            self.state = 110
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
        self.enterRule(localctx, 6, self.RULE_form)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 112
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

        def PROCEDURE(self):
            return self.getToken(CalcParser.PROCEDURE, 0)

        def ID(self):
            return self.getToken(CalcParser.ID, 0)

        def typeDeclList(self):
            return self.getTypedRuleContext(CalcParser.TypeDeclListContext,0)


        def formdecl(self):
            return self.getTypedRuleContext(CalcParser.FormdeclContext,0)


        def stmt(self):
            return self.getTypedRuleContext(CalcParser.StmtContext,0)


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
        self.enterRule(localctx, 8, self.RULE_section)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 114
            self.match(CalcParser.PROCEDURE)
            self.state = 115
            self.match(CalcParser.ID)
            self.state = 116
            self.match(CalcParser.T__5)
            self.state = 117
            self.typeDeclList()
            self.state = 118
            self.match(CalcParser.T__6)
            self.state = 119
            self.match(CalcParser.T__2)
            self.state = 120
            self.formdecl()
            self.state = 122
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 121
                self.vardecl()


            self.state = 124
            self.stmt()
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
        self.enterRule(localctx, 10, self.RULE_block)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 126
            self.match(CalcParser.BEGIN)
            self.state = 130
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while (((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.CASE) | (1 << CalcParser.IF) | (1 << CalcParser.FOR) | (1 << CalcParser.BREAK) | (1 << CalcParser.WITHFORMS) | (1 << CalcParser.WITHNEWTAG) | (1 << CalcParser.RETURN) | (1 << CalcParser.BEGIN) | (1 << CalcParser.ID))) != 0):
                self.state = 127
                self.stmt()
                self.state = 132
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 133
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


        def forloopstruct(self):
            return self.getTypedRuleContext(CalcParser.ForloopstructContext,0)


        def breakStruct(self):
            return self.getTypedRuleContext(CalcParser.BreakStructContext,0)


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
        self.enterRule(localctx, 12, self.RULE_stmt)
        try:
            self.state = 149
            token = self._input.LA(1)
            if token in [CalcParser.FOR, CalcParser.BREAK, CalcParser.RETURN, CalcParser.BEGIN, CalcParser.ID]:
                self.enterOuterAlt(localctx, 1)
                self.state = 141
                la_ = self._interp.adaptivePredict(self._input,5,self._ctx)
                if la_ == 1:
                    self.state = 135
                    self.assign()
                    pass

                elif la_ == 2:
                    self.state = 136
                    self.call()
                    pass

                elif la_ == 3:
                    self.state = 137
                    self.ret()
                    pass

                elif la_ == 4:
                    self.state = 138
                    self.block()
                    pass

                elif la_ == 5:
                    self.state = 139
                    self.forloopstruct()
                    pass

                elif la_ == 6:
                    self.state = 140
                    self.breakStruct()
                    pass


                self.state = 143
                self.match(CalcParser.T__2)

            elif token in [CalcParser.IF]:
                self.enterOuterAlt(localctx, 2)
                self.state = 145
                self.ifStruct()

            elif token in [CalcParser.CASE]:
                self.enterOuterAlt(localctx, 3)
                self.state = 146
                self.caseStuct()

            elif token in [CalcParser.WITHFORMS]:
                self.enterOuterAlt(localctx, 4)
                self.state = 147
                self.withForms()

            elif token in [CalcParser.WITHNEWTAG]:
                self.enterOuterAlt(localctx, 5)
                self.state = 148
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
        self.enterRule(localctx, 14, self.RULE_open_stmt)
        try:
            self.state = 160
            la_ = self._interp.adaptivePredict(self._input,7,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 151
                self.assign()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 152
                self.call()
                pass

            elif la_ == 3:
                self.enterOuterAlt(localctx, 3)
                self.state = 153
                self.ret()
                pass

            elif la_ == 4:
                self.enterOuterAlt(localctx, 4)
                self.state = 154
                self.block()
                pass

            elif la_ == 5:
                self.enterOuterAlt(localctx, 5)
                self.state = 155
                self.caseStuct()
                pass

            elif la_ == 6:
                self.enterOuterAlt(localctx, 6)
                self.state = 156
                self.forloopstruct()
                pass

            elif la_ == 7:
                self.enterOuterAlt(localctx, 7)
                self.state = 157
                self.ifStruct()
                pass

            elif la_ == 8:
                self.enterOuterAlt(localctx, 8)
                self.state = 158
                self.withForms()
                pass

            elif la_ == 9:
                self.enterOuterAlt(localctx, 9)
                self.state = 159
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
        self.enterRule(localctx, 16, self.RULE_assign)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 162
            self.full_id()
            self.state = 163
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.LET) | (1 << CalcParser.ALTLET) | (1 << CalcParser.CRAZYLET))) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self.consume()
            self.state = 164
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
        self.enterRule(localctx, 18, self.RULE_call)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 166
            self.match(CalcParser.ID)
            self.state = 167
            self.match(CalcParser.T__5)
            self.state = 168
            self.argList()
            self.state = 169
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
        self.enterRule(localctx, 20, self.RULE_multicopy_accum)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 171
            self.full_id()
            self.state = 172
            self.match(CalcParser.T__7)
            self.state = 173
            self.start_index()
            self.state = 174
            self.match(CalcParser.T__8)
            self.state = 175
            self.end_index()
            self.state = 176
            self.match(CalcParser.T__9)
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
        self.enterRule(localctx, 22, self.RULE_start_index)
        try:
            self.state = 180
            la_ = self._interp.adaptivePredict(self._input,8,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 178
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 179
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
        self.enterRule(localctx, 24, self.RULE_end_index)
        try:
            self.state = 184
            la_ = self._interp.adaptivePredict(self._input,9,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 182
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 183
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


        def enterRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.enterLogic(self)

        def exitRule(self, listener):
            if isinstance( listener, CalcListener ):
                listener.exitLogic(self)


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
        _startState = 26
        self.enterRecursionRule(localctx, 26, self.RULE_expr, _p)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 203
            la_ = self._interp.adaptivePredict(self._input,10,self._ctx)
            if la_ == 1:
                localctx = CalcParser.NotContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx

                self.state = 187
                self.match(CalcParser.NOT)
                self.state = 188
                self.expr(7)
                pass

            elif la_ == 2:
                localctx = CalcParser.LiteralContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 189
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 3:
                localctx = CalcParser.BoolContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 190
                _la = self._input.LA(1)
                if not((((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.T__23) | (1 << CalcParser.T__24) | (1 << CalcParser.T__25) | (1 << CalcParser.T__26) | (1 << CalcParser.T__27) | (1 << CalcParser.T__28) | (1 << CalcParser.T__29) | (1 << CalcParser.T__30))) != 0)):
                    self._errHandler.recoverInline(self)
                else:
                    self.consume()
                pass

            elif la_ == 4:
                localctx = CalcParser.FunctionCallContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 191
                self.call()
                pass

            elif la_ == 5:
                localctx = CalcParser.MultiCopyAccumulateContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 192
                self.multicopy_accum()
                pass

            elif la_ == 6:
                localctx = CalcParser.MaxContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 193
                self.match(CalcParser.T__31)
                self.state = 194
                self.match(CalcParser.T__5)
                self.state = 195
                self.argList()
                self.state = 196
                self.match(CalcParser.T__6)
                pass

            elif la_ == 7:
                localctx = CalcParser.ParensContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 198
                self.match(CalcParser.T__5)
                self.state = 199
                self.expr(0)
                self.state = 200
                self.match(CalcParser.T__6)
                pass

            elif la_ == 8:
                localctx = CalcParser.VarRefContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 202
                self.full_id()
                pass


            self._ctx.stop = self._input.LT(-1)
            self.state = 219
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,12,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    self.state = 217
                    la_ = self._interp.adaptivePredict(self._input,11,self._ctx)
                    if la_ == 1:
                        localctx = CalcParser.DivMulContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 205
                        if not self.precpred(self._ctx, 12):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 12)")
                        self.state = 206
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.T__10 or _la==CalcParser.T__11):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 207
                        self.expr(13)
                        pass

                    elif la_ == 2:
                        localctx = CalcParser.AddSubContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 208
                        if not self.precpred(self._ctx, 11):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 11)")
                        self.state = 209
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.T__12 or _la==CalcParser.T__13):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 210
                        self.expr(12)
                        pass

                    elif la_ == 3:
                        localctx = CalcParser.LogicContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 211
                        if not self.precpred(self._ctx, 10):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 10)")
                        self.state = 212
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.T__14 or _la==CalcParser.T__15):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 213
                        self.expr(11)
                        pass

                    elif la_ == 4:
                        localctx = CalcParser.PredicateContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 214
                        if not self.precpred(self._ctx, 9):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 9)")
                        self.state = 215
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not((((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.T__16) | (1 << CalcParser.T__17) | (1 << CalcParser.T__18) | (1 << CalcParser.T__19) | (1 << CalcParser.T__20) | (1 << CalcParser.T__21) | (1 << CalcParser.T__22))) != 0)):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 216
                        self.expr(10)
                        pass

             
                self.state = 221
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,12,self._ctx)

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
        self.enterRule(localctx, 28, self.RULE_argList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 230
            _la = self._input.LA(1)
            if (((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.T__5) | (1 << CalcParser.T__23) | (1 << CalcParser.T__24) | (1 << CalcParser.T__25) | (1 << CalcParser.T__26) | (1 << CalcParser.T__27) | (1 << CalcParser.T__28) | (1 << CalcParser.T__29) | (1 << CalcParser.T__30) | (1 << CalcParser.T__31) | (1 << CalcParser.LITERAL) | (1 << CalcParser.NOT) | (1 << CalcParser.ID))) != 0):
                self.state = 222
                self.expr(0)
                self.state = 227
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__32:
                    self.state = 223
                    self.match(CalcParser.T__32)
                    self.state = 224
                    self.expr(0)
                    self.state = 229
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
        self.enterRule(localctx, 30, self.RULE_formdecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 232
            self.match(CalcParser.T__0)
            self.state = 233
            self.full_id()
            self.state = 234
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
        self.enterRule(localctx, 32, self.RULE_vardecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 236
            self.match(CalcParser.VAR)
            self.state = 240
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,15,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    self.state = 237
                    self.declList() 
                self.state = 242
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,15,self._ctx)

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
        self.enterRule(localctx, 34, self.RULE_constdecl)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 243
            self.match(CalcParser.CONSTANT)
            self.state = 247
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==CalcParser.ID:
                self.state = 244
                self.constdeclList()
                self.state = 249
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
        self.enterRule(localctx, 36, self.RULE_typeDeclList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 258
            _la = self._input.LA(1)
            if _la==CalcParser.T__33 or _la==CalcParser.ID:
                self.state = 250
                self.typeDecl()
                self.state = 255
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__2:
                    self.state = 251
                    self.match(CalcParser.T__2)
                    self.state = 252
                    self.typeDecl()
                    self.state = 257
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
        self.enterRule(localctx, 38, self.RULE_typeDecl)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 268
            _la = self._input.LA(1)
            if _la==CalcParser.ID:
                self.state = 260
                self.varDecl()
                self.state = 265
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__32:
                    self.state = 261
                    self.match(CalcParser.T__32)
                    self.state = 262
                    self.varDecl()
                    self.state = 267
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



            self.state = 270
            self.match(CalcParser.T__33)
            self.state = 271
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
        self.enterRule(localctx, 40, self.RULE_declList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 281
            _la = self._input.LA(1)
            if _la==CalcParser.ID:
                self.state = 273
                self.varDecl()
                self.state = 278
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__32:
                    self.state = 274
                    self.match(CalcParser.T__32)
                    self.state = 275
                    self.varDecl()
                    self.state = 280
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



            self.state = 283
            self.match(CalcParser.T__33)
            self.state = 284
            self.r_type()
            self.state = 285
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
        self.enterRule(localctx, 42, self.RULE_constdeclList)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 287
            self.varDecl()
            self.state = 288
            self.match(CalcParser.T__20)
            self.state = 289
            self.match(CalcParser.LITERAL)
            self.state = 290
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
        self.enterRule(localctx, 44, self.RULE_varDecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 292
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
        self.enterRule(localctx, 46, self.RULE_r_type)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 295
            _la = self._input.LA(1)
            if _la==CalcParser.ARRAY:
                self.state = 294
                self.arrayDecl()


            self.state = 297
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
        self.enterRule(localctx, 48, self.RULE_arrayDecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 299
            self.match(CalcParser.ARRAY)
            self.state = 300
            self.match(CalcParser.T__7)
            self.state = 301
            self.match(CalcParser.LITERAL)
            self.state = 302
            self.match(CalcParser.T__9)
            self.state = 303
            self.match(CalcParser.OF)
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
        self.enterRule(localctx, 50, self.RULE_ctrlStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 305
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
        self.enterRule(localctx, 52, self.RULE_ifStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 307
            self.match(CalcParser.IF)
            self.state = 308
            self.expr(0)
            self.state = 309
            self.match(CalcParser.THEN)
            self.state = 310
            self.open_stmt()
            self.state = 314
            la_ = self._interp.adaptivePredict(self._input,24,self._ctx)
            if la_ == 1:
                self.state = 311
                self.match(CalcParser.T__2)

            elif la_ == 2:
                self.state = 312
                self.match(CalcParser.ELSE)
                self.state = 313
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
        self.enterRule(localctx, 54, self.RULE_withForms)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 316
            self.match(CalcParser.WITHFORMS)
            self.state = 317
            self.match(CalcParser.T__5)
            self.state = 318
            self.full_id()
            self.state = 319
            self.match(CalcParser.T__32)
            self.state = 320
            self.full_id()
            self.state = 321
            self.match(CalcParser.T__6)
            self.state = 322
            self.match(CalcParser.DO)
            self.state = 323
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
        self.enterRule(localctx, 56, self.RULE_withNewTag)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 325
            self.match(CalcParser.WITHNEWTAG)
            self.state = 326
            self.match(CalcParser.T__5)
            self.state = 327
            self.expr(0)
            self.state = 328
            self.match(CalcParser.T__6)
            self.state = 329
            self.match(CalcParser.DO)
            self.state = 330
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
        self.enterRule(localctx, 58, self.RULE_elseStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 332
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
        self.enterRule(localctx, 60, self.RULE_loopStruct)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 334
            self.match(CalcParser.DO)
            self.state = 337
            _la = self._input.LA(1)
            if _la==CalcParser.WHILE:
                self.state = 335
                self.match(CalcParser.WHILE)
                self.state = 336
                localctx.preCond = self.expr(0)


            self.state = 339
            self.stmt()
            self.state = 340
            self.match(CalcParser.LOOP)
            self.state = 343
            _la = self._input.LA(1)
            if _la==CalcParser.WHILE:
                self.state = 341
                self.match(CalcParser.WHILE)
                self.state = 342
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
        self.enterRule(localctx, 62, self.RULE_caseStuct)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 345
            self.match(CalcParser.CASE)
            self.state = 346
            self.expr(0)
            self.state = 347
            self.match(CalcParser.OF)
            self.state = 349 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 348
                self.caseStmt()
                self.state = 351 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not (_la==CalcParser.LITERAL):
                    break

            self.state = 353
            self.match(CalcParser.END)
            self.state = 354
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
        self.enterRule(localctx, 64, self.RULE_caseStmt)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 356
            self.match(CalcParser.LITERAL)
            self.state = 357
            self.match(CalcParser.T__33)
            self.state = 358
            self.block()
            self.state = 359
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
        self.enterRule(localctx, 66, self.RULE_forloopstruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 361
            self.match(CalcParser.FOR)
            self.state = 362
            self.match(CalcParser.ID)
            self.state = 363
            self.match(CalcParser.LET)
            self.state = 364
            self.expr(0)
            self.state = 365
            self.match(CalcParser.TO)
            self.state = 366
            self.expr(0)
            self.state = 367
            self.match(CalcParser.DO)
            self.state = 370
            la_ = self._interp.adaptivePredict(self._input,28,self._ctx)
            if la_ == 1:
                self.state = 368
                self.block()
                pass

            elif la_ == 2:
                self.state = 369
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
        self.enterRule(localctx, 68, self.RULE_breakStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 372
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
        self.enterRule(localctx, 70, self.RULE_ret)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 374
            self.match(CalcParser.RETURN)
            self.state = 376
            la_ = self._interp.adaptivePredict(self._input,29,self._ctx)
            if la_ == 1:
                self.state = 375
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
        self.enterRule(localctx, 72, self.RULE_function)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 378
            localctx.retType = self.full_id()
            self.state = 379
            localctx.fnName = self.full_id()
            self.state = 380
            self.formParList()
            self.state = 382
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 381
                self.vardecl()


            self.state = 384
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
        self.enterRule(localctx, 74, self.RULE_formParList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 386
            self.match(CalcParser.T__5)
            self.state = 390
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==CalcParser.ARRAY or _la==CalcParser.ID:
                self.state = 387
                self.formPar()
                self.state = 392
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 393
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
        self.enterRule(localctx, 76, self.RULE_formPar)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 395
            self.r_type()
            self.state = 396
            localctx.name = self.full_id()
            self.state = 399
            _la = self._input.LA(1)
            if _la==CalcParser.LET:
                self.state = 397
                self.match(CalcParser.LET)
                self.state = 398
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


        def child_id(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.Child_idContext)
            else:
                return self.getTypedRuleContext(CalcParser.Child_idContext,i)


        def sub_id(self, i=None):
            if i is None:
                return self.getTypedRuleContexts(CalcParser.Sub_idContext)
            else:
                return self.getTypedRuleContext(CalcParser.Sub_idContext,i)


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
        self.enterRule(localctx, 78, self.RULE_full_id)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 401
            self.match(CalcParser.ID)
            self.state = 403
            la_ = self._interp.adaptivePredict(self._input,33,self._ctx)
            if la_ == 1:
                self.state = 402
                self.array_index()


            self.state = 408
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,34,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    self.state = 405
                    self.child_id() 
                self.state = 410
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,34,self._ctx)

            self.state = 414
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,35,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    self.state = 411
                    self.sub_id() 
                self.state = 416
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,35,self._ctx)

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

        def ID(self):
            return self.getToken(CalcParser.ID, 0)

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
        self.enterRule(localctx, 80, self.RULE_child_id)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 417
            self.match(CalcParser.T__33)
            self.state = 418
            self.match(CalcParser.ID)
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
        self.enterRule(localctx, 82, self.RULE_sub_id)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 420
            self.match(CalcParser.T__1)
            self.state = 421
            self.match(CalcParser.ID)
            self.state = 423
            la_ = self._interp.adaptivePredict(self._input,36,self._ctx)
            if la_ == 1:
                self.state = 422
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
        self.enterRule(localctx, 84, self.RULE_array_index)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 425
            self.match(CalcParser.T__7)
            self.state = 426
            self.expr(0)
            self.state = 427
            self.match(CalcParser.T__9)
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
        self.enterRule(localctx, 86, self.RULE_boolean)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 429
            _la = self._input.LA(1)
            if not(((((_la - 66)) & ~0x3f) == 0 and ((1 << (_la - 66)) & ((1 << (CalcParser.TRUE - 66)) | (1 << (CalcParser.FALSE - 66)) | (1 << (CalcParser.CHECKED - 66)))) != 0)):
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
        self._predicates[13] = self.expr_sempred
        pred = self._predicates.get(ruleIndex, None)
        if pred is None:
            raise Exception("No predicate with index:" + str(ruleIndex))
        else:
            return pred(localctx, predIndex)

    def expr_sempred(self, localctx, predIndex):
            if predIndex == 0:
                return self.precpred(self._ctx, 12)
         

            if predIndex == 1:
                return self.precpred(self._ctx, 11)
         

            if predIndex == 2:
                return self.precpred(self._ctx, 10)
         

            if predIndex == 3:
                return self.precpred(self._ctx, 9)
         



