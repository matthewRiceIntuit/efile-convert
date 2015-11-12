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
        buf.write(u"I\u01c0\4\2\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t")
        buf.write(u"\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t\13\4\f\t\f\4\r\t\r")
        buf.write(u"\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22\4")
        buf.write(u"\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30")
        buf.write(u"\t\30\4\31\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t")
        buf.write(u"\35\4\36\t\36\4\37\t\37\4 \t \4!\t!\4\"\t\"\4#\t#\4$")
        buf.write(u"\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4,\t")
        buf.write(u",\4-\t-\4.\t.\4/\t/\3\2\5\2`\n\2\3\2\7\2c\n\2\f\2\16")
        buf.write(u"\2f\13\2\3\3\3\3\5\3j\n\3\3\3\5\3m\n\3\3\4\3\4\3\4\3")
        buf.write(u"\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\6\3\6\3\7\3\7\3\7\3")
        buf.write(u"\7\3\7\3\7\3\7\3\7\5\7\u0084\n\7\3\7\3\7\3\b\3\b\7\b")
        buf.write(u"\u008a\n\b\f\b\16\b\u008d\13\b\3\b\3\b\3\t\3\t\3\t\3")
        buf.write(u"\t\3\t\5\t\u0096\n\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\5\t")
        buf.write(u"\u009f\n\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\5\n\u00aa")
        buf.write(u"\n\n\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\r\3\r")
        buf.write(u"\3\r\3\r\3\r\3\r\3\r\3\16\3\16\5\16\u00be\n\16\3\17\3")
        buf.write(u"\17\5\17\u00c2\n\17\3\20\3\20\3\20\3\20\3\20\3\20\3\20")
        buf.write(u"\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3")
        buf.write(u"\20\5\20\u00d6\n\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20")
        buf.write(u"\3\20\3\20\3\20\3\20\3\20\7\20\u00e4\n\20\f\20\16\20")
        buf.write(u"\u00e7\13\20\3\21\3\21\3\21\7\21\u00ec\n\21\f\21\16\21")
        buf.write(u"\u00ef\13\21\5\21\u00f1\n\21\3\22\3\22\3\22\3\22\3\23")
        buf.write(u"\3\23\7\23\u00f9\n\23\f\23\16\23\u00fc\13\23\3\24\3\24")
        buf.write(u"\7\24\u0100\n\24\f\24\16\24\u0103\13\24\3\25\3\25\3\25")
        buf.write(u"\7\25\u0108\n\25\f\25\16\25\u010b\13\25\5\25\u010d\n")
        buf.write(u"\25\3\26\3\26\3\26\7\26\u0112\n\26\f\26\16\26\u0115\13")
        buf.write(u"\26\5\26\u0117\n\26\3\26\3\26\3\26\3\27\3\27\3\27\7\27")
        buf.write(u"\u011f\n\27\f\27\16\27\u0122\13\27\5\27\u0124\n\27\3")
        buf.write(u"\27\3\27\3\27\3\27\3\30\3\30\3\30\3\30\3\30\3\31\3\31")
        buf.write(u"\3\32\5\32\u0132\n\32\3\32\3\32\3\33\3\33\3\33\3\33\3")
        buf.write(u"\33\3\33\3\34\3\34\3\34\3\34\3\34\3\34\3\35\3\35\3\36")
        buf.write(u"\3\36\3\36\3\36\3\36\3\36\3\36\5\36\u014b\n\36\3\37\3")
        buf.write(u"\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3 \3 \3 \3 \3")
        buf.write(u" \3 \3 \3!\3!\3\"\3\"\3\"\5\"\u0162\n\"\3\"\3\"\3\"\3")
        buf.write(u"\"\5\"\u0168\n\"\3#\3#\3#\3#\6#\u016e\n#\r#\16#\u016f")
        buf.write(u"\3#\3#\3#\3$\3$\3$\3$\3$\3%\3%\3%\3%\3%\3%\3%\3%\3%\5")
        buf.write(u"%\u0183\n%\3&\3&\3\'\3\'\5\'\u0189\n\'\3(\3(\3(\3(\5")
        buf.write(u"(\u018f\n(\3(\3(\3)\3)\7)\u0195\n)\f)\16)\u0198\13)\3")
        buf.write(u")\3)\3*\3*\3*\3*\5*\u01a0\n*\3+\3+\5+\u01a4\n+\3+\7+")
        buf.write(u"\u01a7\n+\f+\16+\u01aa\13+\3+\7+\u01ad\n+\f+\16+\u01b0")
        buf.write(u"\13+\3,\3,\3,\3-\3-\3-\5-\u01b8\n-\3.\3.\3.\3.\3/\3/")
        buf.write(u"\3/\2\3\36\60\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36")
        buf.write(u" \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\\2\t\3\2?A\3")
        buf.write(u"\2\32!\3\2\r\16\3\2\17\20\3\2\21\22\4\2\23\31\67\67\3")
        buf.write(u"\2EG\u01cf\2_\3\2\2\2\4g\3\2\2\2\6n\3\2\2\2\bt\3\2\2")
        buf.write(u"\2\ny\3\2\2\2\f{\3\2\2\2\16\u0087\3\2\2\2\20\u009e\3")
        buf.write(u"\2\2\2\22\u00a9\3\2\2\2\24\u00ab\3\2\2\2\26\u00af\3\2")
        buf.write(u"\2\2\30\u00b4\3\2\2\2\32\u00bd\3\2\2\2\34\u00c1\3\2\2")
        buf.write(u"\2\36\u00d5\3\2\2\2 \u00f0\3\2\2\2\"\u00f2\3\2\2\2$\u00f6")
        buf.write(u"\3\2\2\2&\u00fd\3\2\2\2(\u010c\3\2\2\2*\u0116\3\2\2\2")
        buf.write(u",\u0123\3\2\2\2.\u0129\3\2\2\2\60\u012e\3\2\2\2\62\u0131")
        buf.write(u"\3\2\2\2\64\u0135\3\2\2\2\66\u013b\3\2\2\28\u0141\3\2")
        buf.write(u"\2\2:\u0143\3\2\2\2<\u014c\3\2\2\2>\u0155\3\2\2\2@\u015c")
        buf.write(u"\3\2\2\2B\u015e\3\2\2\2D\u0169\3\2\2\2F\u0174\3\2\2\2")
        buf.write(u"H\u0179\3\2\2\2J\u0184\3\2\2\2L\u0186\3\2\2\2N\u018a")
        buf.write(u"\3\2\2\2P\u0192\3\2\2\2R\u019b\3\2\2\2T\u01a1\3\2\2\2")
        buf.write(u"V\u01b1\3\2\2\2X\u01b4\3\2\2\2Z\u01b9\3\2\2\2\\\u01bd")
        buf.write(u"\3\2\2\2^`\5\4\3\2_^\3\2\2\2_`\3\2\2\2`d\3\2\2\2ac\5")
        buf.write(u"\f\7\2ba\3\2\2\2cf\3\2\2\2db\3\2\2\2de\3\2\2\2e\3\3\2")
        buf.write(u"\2\2fd\3\2\2\2gi\5\b\5\2hj\5&\24\2ih\3\2\2\2ij\3\2\2")
        buf.write(u"\2jl\3\2\2\2km\5$\23\2lk\3\2\2\2lm\3\2\2\2m\5\3\2\2\2")
        buf.write(u"no\7\3\2\2op\7B\2\2pq\7\4\2\2qr\5\n\6\2rs\7\5\2\2s\7")
        buf.write(u"\3\2\2\2tu\7\6\2\2uv\7B\2\2vw\7\7\2\2wx\7\5\2\2x\t\3")
        buf.write(u"\2\2\2yz\5T+\2z\13\3\2\2\2{|\7/\2\2|}\7B\2\2}~\7\b\2")
        buf.write(u"\2~\177\5(\25\2\177\u0080\7\t\2\2\u0080\u0081\7\5\2\2")
        buf.write(u"\u0081\u0083\5\"\22\2\u0082\u0084\5$\23\2\u0083\u0082")
        buf.write(u"\3\2\2\2\u0083\u0084\3\2\2\2\u0084\u0085\3\2\2\2\u0085")
        buf.write(u"\u0086\5\20\t\2\u0086\r\3\2\2\2\u0087\u008b\7=\2\2\u0088")
        buf.write(u"\u008a\5\20\t\2\u0089\u0088\3\2\2\2\u008a\u008d\3\2\2")
        buf.write(u"\2\u008b\u0089\3\2\2\2\u008b\u008c\3\2\2\2\u008c\u008e")
        buf.write(u"\3\2\2\2\u008d\u008b\3\2\2\2\u008e\u008f\7>\2\2\u008f")
        buf.write(u"\17\3\2\2\2\u0090\u0096\5\24\13\2\u0091\u0096\5\26\f")
        buf.write(u"\2\u0092\u0096\5L\'\2\u0093\u0096\5\16\b\2\u0094\u0096")
        buf.write(u"\5J&\2\u0095\u0090\3\2\2\2\u0095\u0091\3\2\2\2\u0095")
        buf.write(u"\u0092\3\2\2\2\u0095\u0093\3\2\2\2\u0095\u0094\3\2\2")
        buf.write(u"\2\u0096\u0097\3\2\2\2\u0097\u0098\7\5\2\2\u0098\u009f")
        buf.write(u"\3\2\2\2\u0099\u009f\5H%\2\u009a\u009f\5:\36\2\u009b")
        buf.write(u"\u009f\5D#\2\u009c\u009f\5<\37\2\u009d\u009f\5> \2\u009e")
        buf.write(u"\u0095\3\2\2\2\u009e\u0099\3\2\2\2\u009e\u009a\3\2\2")
        buf.write(u"\2\u009e\u009b\3\2\2\2\u009e\u009c\3\2\2\2\u009e\u009d")
        buf.write(u"\3\2\2\2\u009f\21\3\2\2\2\u00a0\u00aa\5\24\13\2\u00a1")
        buf.write(u"\u00aa\5\26\f\2\u00a2\u00aa\5L\'\2\u00a3\u00aa\5\16\b")
        buf.write(u"\2\u00a4\u00aa\5D#\2\u00a5\u00aa\5H%\2\u00a6\u00aa\5")
        buf.write(u":\36\2\u00a7\u00aa\5<\37\2\u00a8\u00aa\5> \2\u00a9\u00a0")
        buf.write(u"\3\2\2\2\u00a9\u00a1\3\2\2\2\u00a9\u00a2\3\2\2\2\u00a9")
        buf.write(u"\u00a3\3\2\2\2\u00a9\u00a4\3\2\2\2\u00a9\u00a5\3\2\2")
        buf.write(u"\2\u00a9\u00a6\3\2\2\2\u00a9\u00a7\3\2\2\2\u00a9\u00a8")
        buf.write(u"\3\2\2\2\u00aa\23\3\2\2\2\u00ab\u00ac\5T+\2\u00ac\u00ad")
        buf.write(u"\t\2\2\2\u00ad\u00ae\5\36\20\2\u00ae\25\3\2\2\2\u00af")
        buf.write(u"\u00b0\7B\2\2\u00b0\u00b1\7\b\2\2\u00b1\u00b2\5 \21\2")
        buf.write(u"\u00b2\u00b3\7\t\2\2\u00b3\27\3\2\2\2\u00b4\u00b5\5T")
        buf.write(u"+\2\u00b5\u00b6\7\n\2\2\u00b6\u00b7\5\32\16\2\u00b7\u00b8")
        buf.write(u"\7\13\2\2\u00b8\u00b9\5\34\17\2\u00b9\u00ba\7\f\2\2\u00ba")
        buf.write(u"\31\3\2\2\2\u00bb\u00be\7%\2\2\u00bc\u00be\5\36\20\2")
        buf.write(u"\u00bd\u00bb\3\2\2\2\u00bd\u00bc\3\2\2\2\u00be\33\3\2")
        buf.write(u"\2\2\u00bf\u00c2\7%\2\2\u00c0\u00c2\5\36\20\2\u00c1\u00bf")
        buf.write(u"\3\2\2\2\u00c1\u00c0\3\2\2\2\u00c2\35\3\2\2\2\u00c3\u00c4")
        buf.write(u"\b\20\1\2\u00c4\u00c5\7\63\2\2\u00c5\u00d6\5\36\20\t")
        buf.write(u"\u00c6\u00d6\7%\2\2\u00c7\u00d6\5\66\34\2\u00c8\u00d6")
        buf.write(u"\t\3\2\2\u00c9\u00d6\5\26\f\2\u00ca\u00d6\5\30\r\2\u00cb")
        buf.write(u"\u00cc\7\"\2\2\u00cc\u00cd\7\b\2\2\u00cd\u00ce\5 \21")
        buf.write(u"\2\u00ce\u00cf\7\t\2\2\u00cf\u00d6\3\2\2\2\u00d0\u00d1")
        buf.write(u"\7\b\2\2\u00d1\u00d2\5\36\20\2\u00d2\u00d3\7\t\2\2\u00d3")
        buf.write(u"\u00d6\3\2\2\2\u00d4\u00d6\5T+\2\u00d5\u00c3\3\2\2\2")
        buf.write(u"\u00d5\u00c6\3\2\2\2\u00d5\u00c7\3\2\2\2\u00d5\u00c8")
        buf.write(u"\3\2\2\2\u00d5\u00c9\3\2\2\2\u00d5\u00ca\3\2\2\2\u00d5")
        buf.write(u"\u00cb\3\2\2\2\u00d5\u00d0\3\2\2\2\u00d5\u00d4\3\2\2")
        buf.write(u"\2\u00d6\u00e5\3\2\2\2\u00d7\u00d8\f\17\2\2\u00d8\u00d9")
        buf.write(u"\t\4\2\2\u00d9\u00e4\5\36\20\20\u00da\u00db\f\16\2\2")
        buf.write(u"\u00db\u00dc\t\5\2\2\u00dc\u00e4\5\36\20\17\u00dd\u00de")
        buf.write(u"\f\r\2\2\u00de\u00df\t\6\2\2\u00df\u00e4\5\36\20\16\u00e0")
        buf.write(u"\u00e1\f\f\2\2\u00e1\u00e2\t\7\2\2\u00e2\u00e4\5\36\20")
        buf.write(u"\r\u00e3\u00d7\3\2\2\2\u00e3\u00da\3\2\2\2\u00e3\u00dd")
        buf.write(u"\3\2\2\2\u00e3\u00e0\3\2\2\2\u00e4\u00e7\3\2\2\2\u00e5")
        buf.write(u"\u00e3\3\2\2\2\u00e5\u00e6\3\2\2\2\u00e6\37\3\2\2\2\u00e7")
        buf.write(u"\u00e5\3\2\2\2\u00e8\u00ed\5\36\20\2\u00e9\u00ea\7#\2")
        buf.write(u"\2\u00ea\u00ec\5\36\20\2\u00eb\u00e9\3\2\2\2\u00ec\u00ef")
        buf.write(u"\3\2\2\2\u00ed\u00eb\3\2\2\2\u00ed\u00ee\3\2\2\2\u00ee")
        buf.write(u"\u00f1\3\2\2\2\u00ef\u00ed\3\2\2\2\u00f0\u00e8\3\2\2")
        buf.write(u"\2\u00f0\u00f1\3\2\2\2\u00f1!\3\2\2\2\u00f2\u00f3\7\3")
        buf.write(u"\2\2\u00f3\u00f4\5T+\2\u00f4\u00f5\7\5\2\2\u00f5#\3\2")
        buf.write(u"\2\2\u00f6\u00fa\7)\2\2\u00f7\u00f9\5,\27\2\u00f8\u00f7")
        buf.write(u"\3\2\2\2\u00f9\u00fc\3\2\2\2\u00fa\u00f8\3\2\2\2\u00fa")
        buf.write(u"\u00fb\3\2\2\2\u00fb%\3\2\2\2\u00fc\u00fa\3\2\2\2\u00fd")
        buf.write(u"\u0101\7*\2\2\u00fe\u0100\5.\30\2\u00ff\u00fe\3\2\2\2")
        buf.write(u"\u0100\u0103\3\2\2\2\u0101\u00ff\3\2\2\2\u0101\u0102")
        buf.write(u"\3\2\2\2\u0102\'\3\2\2\2\u0103\u0101\3\2\2\2\u0104\u0109")
        buf.write(u"\5*\26\2\u0105\u0106\7\5\2\2\u0106\u0108\5*\26\2\u0107")
        buf.write(u"\u0105\3\2\2\2\u0108\u010b\3\2\2\2\u0109\u0107\3\2\2")
        buf.write(u"\2\u0109\u010a\3\2\2\2\u010a\u010d\3\2\2\2\u010b\u0109")
        buf.write(u"\3\2\2\2\u010c\u0104\3\2\2\2\u010c\u010d\3\2\2\2\u010d")
        buf.write(u")\3\2\2\2\u010e\u0113\5\60\31\2\u010f\u0110\7#\2\2\u0110")
        buf.write(u"\u0112\5\60\31\2\u0111\u010f\3\2\2\2\u0112\u0115\3\2")
        buf.write(u"\2\2\u0113\u0111\3\2\2\2\u0113\u0114\3\2\2\2\u0114\u0117")
        buf.write(u"\3\2\2\2\u0115\u0113\3\2\2\2\u0116\u010e\3\2\2\2\u0116")
        buf.write(u"\u0117\3\2\2\2\u0117\u0118\3\2\2\2\u0118\u0119\7$\2\2")
        buf.write(u"\u0119\u011a\5\62\32\2\u011a+\3\2\2\2\u011b\u0120\5\60")
        buf.write(u"\31\2\u011c\u011d\7#\2\2\u011d\u011f\5\60\31\2\u011e")
        buf.write(u"\u011c\3\2\2\2\u011f\u0122\3\2\2\2\u0120\u011e\3\2\2")
        buf.write(u"\2\u0120\u0121\3\2\2\2\u0121\u0124\3\2\2\2\u0122\u0120")
        buf.write(u"\3\2\2\2\u0123\u011b\3\2\2\2\u0123\u0124\3\2\2\2\u0124")
        buf.write(u"\u0125\3\2\2\2\u0125\u0126\7$\2\2\u0126\u0127\5\62\32")
        buf.write(u"\2\u0127\u0128\7\5\2\2\u0128-\3\2\2\2\u0129\u012a\5\60")
        buf.write(u"\31\2\u012a\u012b\7\27\2\2\u012b\u012c\7%\2\2\u012c\u012d")
        buf.write(u"\7\5\2\2\u012d/\3\2\2\2\u012e\u012f\7B\2\2\u012f\61\3")
        buf.write(u"\2\2\2\u0130\u0132\5\64\33\2\u0131\u0130\3\2\2\2\u0131")
        buf.write(u"\u0132\3\2\2\2\u0132\u0133\3\2\2\2\u0133\u0134\7B\2\2")
        buf.write(u"\u0134\63\3\2\2\2\u0135\u0136\7&\2\2\u0136\u0137\7\n")
        buf.write(u"\2\2\u0137\u0138\7%\2\2\u0138\u0139\7\f\2\2\u0139\u013a")
        buf.write(u"\7\'\2\2\u013a\65\3\2\2\2\u013b\u013c\7\n\2\2\u013c\u013d")
        buf.write(u"\5\36\20\2\u013d\u013e\7\13\2\2\u013e\u013f\5\36\20\2")
        buf.write(u"\u013f\u0140\7\f\2\2\u0140\67\3\2\2\2\u0141\u0142\5:")
        buf.write(u"\36\2\u01429\3\2\2\2\u0143\u0144\7+\2\2\u0144\u0145\5")
        buf.write(u"\36\20\2\u0145\u0146\7-\2\2\u0146\u014a\5\22\n\2\u0147")
        buf.write(u"\u014b\7\5\2\2\u0148\u0149\7,\2\2\u0149\u014b\5@!\2\u014a")
        buf.write(u"\u0147\3\2\2\2\u014a\u0148\3\2\2\2\u014a\u014b\3\2\2")
        buf.write(u"\2\u014b;\3\2\2\2\u014c\u014d\7\65\2\2\u014d\u014e\7")
        buf.write(u"\b\2\2\u014e\u014f\5T+\2\u014f\u0150\7#\2\2\u0150\u0151")
        buf.write(u"\5T+\2\u0151\u0152\7\t\2\2\u0152\u0153\7\60\2\2\u0153")
        buf.write(u"\u0154\5\20\t\2\u0154=\3\2\2\2\u0155\u0156\7\66\2\2\u0156")
        buf.write(u"\u0157\7\b\2\2\u0157\u0158\5\36\20\2\u0158\u0159\7\t")
        buf.write(u"\2\2\u0159\u015a\7\60\2\2\u015a\u015b\5\20\t\2\u015b")
        buf.write(u"?\3\2\2\2\u015c\u015d\5\20\t\2\u015dA\3\2\2\2\u015e\u0161")
        buf.write(u"\7\60\2\2\u015f\u0160\79\2\2\u0160\u0162\5\36\20\2\u0161")
        buf.write(u"\u015f\3\2\2\2\u0161\u0162\3\2\2\2\u0162\u0163\3\2\2")
        buf.write(u"\2\u0163\u0164\5\20\t\2\u0164\u0167\7:\2\2\u0165\u0166")
        buf.write(u"\79\2\2\u0166\u0168\5\36\20\2\u0167\u0165\3\2\2\2\u0167")
        buf.write(u"\u0168\3\2\2\2\u0168C\3\2\2\2\u0169\u016a\7(\2\2\u016a")
        buf.write(u"\u016b\5\36\20\2\u016b\u016d\7\'\2\2\u016c\u016e\5F$")
        buf.write(u"\2\u016d\u016c\3\2\2\2\u016e\u016f\3\2\2\2\u016f\u016d")
        buf.write(u"\3\2\2\2\u016f\u0170\3\2\2\2\u0170\u0171\3\2\2\2\u0171")
        buf.write(u"\u0172\7>\2\2\u0172\u0173\7\5\2\2\u0173E\3\2\2\2\u0174")
        buf.write(u"\u0175\7%\2\2\u0175\u0176\7$\2\2\u0176\u0177\5\16\b\2")
        buf.write(u"\u0177\u0178\7\5\2\2\u0178G\3\2\2\2\u0179\u017a\7\62")
        buf.write(u"\2\2\u017a\u017b\7B\2\2\u017b\u017c\7?\2\2\u017c\u017d")
        buf.write(u"\5\36\20\2\u017d\u017e\7\61\2\2\u017e\u017f\5\36\20\2")
        buf.write(u"\u017f\u0182\7\60\2\2\u0180\u0183\5\16\b\2\u0181\u0183")
        buf.write(u"\5\20\t\2\u0182\u0180\3\2\2\2\u0182\u0181\3\2\2\2\u0183")
        buf.write(u"I\3\2\2\2\u0184\u0185\7\64\2\2\u0185K\3\2\2\2\u0186\u0188")
        buf.write(u"\7;\2\2\u0187\u0189\5\36\20\2\u0188\u0187\3\2\2\2\u0188")
        buf.write(u"\u0189\3\2\2\2\u0189M\3\2\2\2\u018a\u018b\5T+\2\u018b")
        buf.write(u"\u018c\5T+\2\u018c\u018e\5P)\2\u018d\u018f\5$\23\2\u018e")
        buf.write(u"\u018d\3\2\2\2\u018e\u018f\3\2\2\2\u018f\u0190\3\2\2")
        buf.write(u"\2\u0190\u0191\5\16\b\2\u0191O\3\2\2\2\u0192\u0196\7")
        buf.write(u"\b\2\2\u0193\u0195\5R*\2\u0194\u0193\3\2\2\2\u0195\u0198")
        buf.write(u"\3\2\2\2\u0196\u0194\3\2\2\2\u0196\u0197\3\2\2\2\u0197")
        buf.write(u"\u0199\3\2\2\2\u0198\u0196\3\2\2\2\u0199\u019a\7\t\2")
        buf.write(u"\2\u019aQ\3\2\2\2\u019b\u019c\5\62\32\2\u019c\u019f\5")
        buf.write(u"T+\2\u019d\u019e\7?\2\2\u019e\u01a0\5\36\20\2\u019f\u019d")
        buf.write(u"\3\2\2\2\u019f\u01a0\3\2\2\2\u01a0S\3\2\2\2\u01a1\u01a3")
        buf.write(u"\7B\2\2\u01a2\u01a4\5Z.\2\u01a3\u01a2\3\2\2\2\u01a3\u01a4")
        buf.write(u"\3\2\2\2\u01a4\u01a8\3\2\2\2\u01a5\u01a7\5V,\2\u01a6")
        buf.write(u"\u01a5\3\2\2\2\u01a7\u01aa\3\2\2\2\u01a8\u01a6\3\2\2")
        buf.write(u"\2\u01a8\u01a9\3\2\2\2\u01a9\u01ae\3\2\2\2\u01aa\u01a8")
        buf.write(u"\3\2\2\2\u01ab\u01ad\5X-\2\u01ac\u01ab\3\2\2\2\u01ad")
        buf.write(u"\u01b0\3\2\2\2\u01ae\u01ac\3\2\2\2\u01ae\u01af\3\2\2")
        buf.write(u"\2\u01afU\3\2\2\2\u01b0\u01ae\3\2\2\2\u01b1\u01b2\7$")
        buf.write(u"\2\2\u01b2\u01b3\7B\2\2\u01b3W\3\2\2\2\u01b4\u01b5\7")
        buf.write(u"\4\2\2\u01b5\u01b7\7B\2\2\u01b6\u01b8\5Z.\2\u01b7\u01b6")
        buf.write(u"\3\2\2\2\u01b7\u01b8\3\2\2\2\u01b8Y\3\2\2\2\u01b9\u01ba")
        buf.write(u"\7\n\2\2\u01ba\u01bb\5\36\20\2\u01bb\u01bc\7\f\2\2\u01bc")
        buf.write(u"[\3\2\2\2\u01bd\u01be\t\b\2\2\u01be]\3\2\2\2(_dil\u0083")
        buf.write(u"\u008b\u0095\u009e\u00a9\u00bd\u00c1\u00d5\u00e3\u00e5")
        buf.write(u"\u00ed\u00f0\u00fa\u0101\u0109\u010c\u0113\u0116\u0120")
        buf.write(u"\u0123\u0131\u014a\u0161\u0167\u016f\u0182\u0188\u018e")
        buf.write(u"\u0196\u019f\u01a3\u01a8\u01ae\u01b7")
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
                     u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                     u"':='", u"'?='", u"'#='" ]

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
                      u"IN", u"FORM", u"WHILE", u"LOOP", u"RETURN", u"WS", 
                      u"BEGIN", u"END", u"LET", u"ALTLET", u"CRAZYLET", 
                      u"ID", u"INT", u"STRING", u"TRUE", u"FALSE", u"CHECKED", 
                      u"COMMENT", u"LINE_COMMENT" ]

    RULE_calcfile = 0
    RULE_presection = 1
    RULE_formset = 2
    RULE_converter = 3
    RULE_form = 4
    RULE_section = 5
    RULE_block = 6
    RULE_stmt = 7
    RULE_open_stmt = 8
    RULE_assign = 9
    RULE_call = 10
    RULE_multicopy_accum = 11
    RULE_start_index = 12
    RULE_end_index = 13
    RULE_expr = 14
    RULE_argList = 15
    RULE_formdecl = 16
    RULE_vardecl = 17
    RULE_constdecl = 18
    RULE_typeDeclList = 19
    RULE_typeDecl = 20
    RULE_declList = 21
    RULE_constdeclList = 22
    RULE_varDecl = 23
    RULE_r_type = 24
    RULE_arrayDecl = 25
    RULE_rangeExpr = 26
    RULE_ctrlStruct = 27
    RULE_ifStruct = 28
    RULE_withForms = 29
    RULE_withNewTag = 30
    RULE_elseStruct = 31
    RULE_loopStruct = 32
    RULE_caseStuct = 33
    RULE_caseStmt = 34
    RULE_forloopstruct = 35
    RULE_breakStruct = 36
    RULE_ret = 37
    RULE_function = 38
    RULE_formParList = 39
    RULE_formPar = 40
    RULE_full_id = 41
    RULE_child_id = 42
    RULE_sub_id = 43
    RULE_array_index = 44
    RULE_boolean = 45

    ruleNames =  [ u"calcfile", u"presection", u"formset", u"converter", 
                   u"form", u"section", u"block", u"stmt", u"open_stmt", 
                   u"assign", u"call", u"multicopy_accum", u"start_index", 
                   u"end_index", u"expr", u"argList", u"formdecl", u"vardecl", 
                   u"constdecl", u"typeDeclList", u"typeDecl", u"declList", 
                   u"constdeclList", u"varDecl", u"r_type", u"arrayDecl", 
                   u"rangeExpr", u"ctrlStruct", u"ifStruct", u"withForms", 
                   u"withNewTag", u"elseStruct", u"loopStruct", u"caseStuct", 
                   u"caseStmt", u"forloopstruct", u"breakStruct", u"ret", 
                   u"function", u"formParList", u"formPar", u"full_id", 
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
    IN=53
    FORM=54
    WHILE=55
    LOOP=56
    RETURN=57
    WS=58
    BEGIN=59
    END=60
    LET=61
    ALTLET=62
    CRAZYLET=63
    ID=64
    INT=65
    STRING=66
    TRUE=67
    FALSE=68
    CHECKED=69
    COMMENT=70
    LINE_COMMENT=71

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
            self.state = 93
            _la = self._input.LA(1)
            if _la==CalcParser.T__3:
                self.state = 92
                self.presection()


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
            self.state = 101
            self.converter()
            self.state = 103
            _la = self._input.LA(1)
            if _la==CalcParser.CONSTANT:
                self.state = 102
                self.constdecl()


            self.state = 106
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 105
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
            self.state = 108
            self.match(CalcParser.T__0)
            self.state = 109
            self.match(CalcParser.ID)
            self.state = 110
            self.match(CalcParser.T__1)
            self.state = 111
            self.form()
            self.state = 112
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
            self.state = 114
            self.match(CalcParser.T__3)
            self.state = 115
            self.match(CalcParser.ID)
            self.state = 116
            self.match(CalcParser.T__4)
            self.state = 117
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
            self.state = 119
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
        self.enterRule(localctx, 10, self.RULE_section)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 121
            self.match(CalcParser.PROCEDURE)
            self.state = 122
            self.match(CalcParser.ID)
            self.state = 123
            self.match(CalcParser.T__5)
            self.state = 124
            self.typeDeclList()
            self.state = 125
            self.match(CalcParser.T__6)
            self.state = 126
            self.match(CalcParser.T__2)
            self.state = 127
            self.formdecl()
            self.state = 129
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 128
                self.vardecl()


            self.state = 131
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
        self.enterRule(localctx, 12, self.RULE_block)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 133
            self.match(CalcParser.BEGIN)
            self.state = 137
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while ((((_la - 38)) & ~0x3f) == 0 and ((1 << (_la - 38)) & ((1 << (CalcParser.CASE - 38)) | (1 << (CalcParser.IF - 38)) | (1 << (CalcParser.FOR - 38)) | (1 << (CalcParser.BREAK - 38)) | (1 << (CalcParser.WITHFORMS - 38)) | (1 << (CalcParser.WITHNEWTAG - 38)) | (1 << (CalcParser.RETURN - 38)) | (1 << (CalcParser.BEGIN - 38)) | (1 << (CalcParser.ID - 38)))) != 0):
                self.state = 134
                self.stmt()
                self.state = 139
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 140
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
        self.enterRule(localctx, 14, self.RULE_stmt)
        try:
            self.state = 156
            token = self._input.LA(1)
            if token in [CalcParser.BREAK, CalcParser.RETURN, CalcParser.BEGIN, CalcParser.ID]:
                self.enterOuterAlt(localctx, 1)
                self.state = 147
                la_ = self._interp.adaptivePredict(self._input,6,self._ctx)
                if la_ == 1:
                    self.state = 142
                    self.assign()
                    pass

                elif la_ == 2:
                    self.state = 143
                    self.call()
                    pass

                elif la_ == 3:
                    self.state = 144
                    self.ret()
                    pass

                elif la_ == 4:
                    self.state = 145
                    self.block()
                    pass

                elif la_ == 5:
                    self.state = 146
                    self.breakStruct()
                    pass


                self.state = 149
                self.match(CalcParser.T__2)

            elif token in [CalcParser.FOR]:
                self.enterOuterAlt(localctx, 2)
                self.state = 151
                self.forloopstruct()

            elif token in [CalcParser.IF]:
                self.enterOuterAlt(localctx, 3)
                self.state = 152
                self.ifStruct()

            elif token in [CalcParser.CASE]:
                self.enterOuterAlt(localctx, 4)
                self.state = 153
                self.caseStuct()

            elif token in [CalcParser.WITHFORMS]:
                self.enterOuterAlt(localctx, 5)
                self.state = 154
                self.withForms()

            elif token in [CalcParser.WITHNEWTAG]:
                self.enterOuterAlt(localctx, 6)
                self.state = 155
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
        self.enterRule(localctx, 16, self.RULE_open_stmt)
        try:
            self.state = 167
            la_ = self._interp.adaptivePredict(self._input,8,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 158
                self.assign()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 159
                self.call()
                pass

            elif la_ == 3:
                self.enterOuterAlt(localctx, 3)
                self.state = 160
                self.ret()
                pass

            elif la_ == 4:
                self.enterOuterAlt(localctx, 4)
                self.state = 161
                self.block()
                pass

            elif la_ == 5:
                self.enterOuterAlt(localctx, 5)
                self.state = 162
                self.caseStuct()
                pass

            elif la_ == 6:
                self.enterOuterAlt(localctx, 6)
                self.state = 163
                self.forloopstruct()
                pass

            elif la_ == 7:
                self.enterOuterAlt(localctx, 7)
                self.state = 164
                self.ifStruct()
                pass

            elif la_ == 8:
                self.enterOuterAlt(localctx, 8)
                self.state = 165
                self.withForms()
                pass

            elif la_ == 9:
                self.enterOuterAlt(localctx, 9)
                self.state = 166
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
        self.enterRule(localctx, 18, self.RULE_assign)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 169
            self.full_id()
            self.state = 170
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.LET) | (1 << CalcParser.ALTLET) | (1 << CalcParser.CRAZYLET))) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self.consume()
            self.state = 171
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
        self.enterRule(localctx, 20, self.RULE_call)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 173
            self.match(CalcParser.ID)
            self.state = 174
            self.match(CalcParser.T__5)
            self.state = 175
            self.argList()
            self.state = 176
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
        self.enterRule(localctx, 22, self.RULE_multicopy_accum)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 178
            self.full_id()
            self.state = 179
            self.match(CalcParser.T__7)
            self.state = 180
            self.start_index()
            self.state = 181
            self.match(CalcParser.T__8)
            self.state = 182
            self.end_index()
            self.state = 183
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
        self.enterRule(localctx, 24, self.RULE_start_index)
        try:
            self.state = 187
            la_ = self._interp.adaptivePredict(self._input,9,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 185
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 186
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
        self.enterRule(localctx, 26, self.RULE_end_index)
        try:
            self.state = 191
            la_ = self._interp.adaptivePredict(self._input,10,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 189
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 190
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
        _startState = 28
        self.enterRecursionRule(localctx, 28, self.RULE_expr, _p)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 211
            la_ = self._interp.adaptivePredict(self._input,11,self._ctx)
            if la_ == 1:
                localctx = CalcParser.NotContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx

                self.state = 194
                self.match(CalcParser.NOT)
                self.state = 195
                self.expr(7)
                pass

            elif la_ == 2:
                localctx = CalcParser.LiteralContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 196
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 3:
                localctx = CalcParser.RangeContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 197
                self.rangeExpr()
                pass

            elif la_ == 4:
                localctx = CalcParser.BoolContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 198
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
                self.state = 199
                self.call()
                pass

            elif la_ == 6:
                localctx = CalcParser.MultiCopyAccumulateContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 200
                self.multicopy_accum()
                pass

            elif la_ == 7:
                localctx = CalcParser.MaxContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 201
                self.match(CalcParser.T__31)
                self.state = 202
                self.match(CalcParser.T__5)
                self.state = 203
                self.argList()
                self.state = 204
                self.match(CalcParser.T__6)
                pass

            elif la_ == 8:
                localctx = CalcParser.ParensContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 206
                self.match(CalcParser.T__5)
                self.state = 207
                self.expr(0)
                self.state = 208
                self.match(CalcParser.T__6)
                pass

            elif la_ == 9:
                localctx = CalcParser.VarRefContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 210
                self.full_id()
                pass


            self._ctx.stop = self._input.LT(-1)
            self.state = 227
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,13,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    self.state = 225
                    la_ = self._interp.adaptivePredict(self._input,12,self._ctx)
                    if la_ == 1:
                        localctx = CalcParser.DivMulContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 213
                        if not self.precpred(self._ctx, 13):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 13)")
                        self.state = 214
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.T__10 or _la==CalcParser.T__11):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 215
                        self.expr(14)
                        pass

                    elif la_ == 2:
                        localctx = CalcParser.AddSubContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 216
                        if not self.precpred(self._ctx, 12):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 12)")
                        self.state = 217
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.T__12 or _la==CalcParser.T__13):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 218
                        self.expr(13)
                        pass

                    elif la_ == 3:
                        localctx = CalcParser.LogicContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 219
                        if not self.precpred(self._ctx, 11):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 11)")
                        self.state = 220
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.T__14 or _la==CalcParser.T__15):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 221
                        self.expr(12)
                        pass

                    elif la_ == 4:
                        localctx = CalcParser.PredicateContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 222
                        if not self.precpred(self._ctx, 10):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 10)")
                        self.state = 223
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not((((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.T__16) | (1 << CalcParser.T__17) | (1 << CalcParser.T__18) | (1 << CalcParser.T__19) | (1 << CalcParser.T__20) | (1 << CalcParser.T__21) | (1 << CalcParser.T__22) | (1 << CalcParser.IN))) != 0)):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 224
                        self.expr(11)
                        pass

             
                self.state = 229
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
        self.enterRule(localctx, 30, self.RULE_argList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 238
            _la = self._input.LA(1)
            if ((((_la - 6)) & ~0x3f) == 0 and ((1 << (_la - 6)) & ((1 << (CalcParser.T__5 - 6)) | (1 << (CalcParser.T__7 - 6)) | (1 << (CalcParser.T__23 - 6)) | (1 << (CalcParser.T__24 - 6)) | (1 << (CalcParser.T__25 - 6)) | (1 << (CalcParser.T__26 - 6)) | (1 << (CalcParser.T__27 - 6)) | (1 << (CalcParser.T__28 - 6)) | (1 << (CalcParser.T__29 - 6)) | (1 << (CalcParser.T__30 - 6)) | (1 << (CalcParser.T__31 - 6)) | (1 << (CalcParser.LITERAL - 6)) | (1 << (CalcParser.NOT - 6)) | (1 << (CalcParser.ID - 6)))) != 0):
                self.state = 230
                self.expr(0)
                self.state = 235
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__32:
                    self.state = 231
                    self.match(CalcParser.T__32)
                    self.state = 232
                    self.expr(0)
                    self.state = 237
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
        self.enterRule(localctx, 32, self.RULE_formdecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 240
            self.match(CalcParser.T__0)
            self.state = 241
            self.full_id()
            self.state = 242
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
        self.enterRule(localctx, 34, self.RULE_vardecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 244
            self.match(CalcParser.VAR)
            self.state = 248
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,16,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    self.state = 245
                    self.declList() 
                self.state = 250
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
        self.enterRule(localctx, 36, self.RULE_constdecl)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 251
            self.match(CalcParser.CONSTANT)
            self.state = 255
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==CalcParser.ID:
                self.state = 252
                self.constdeclList()
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
        self.enterRule(localctx, 38, self.RULE_typeDeclList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 266
            _la = self._input.LA(1)
            if _la==CalcParser.T__33 or _la==CalcParser.ID:
                self.state = 258
                self.typeDecl()
                self.state = 263
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__2:
                    self.state = 259
                    self.match(CalcParser.T__2)
                    self.state = 260
                    self.typeDecl()
                    self.state = 265
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
        self.enterRule(localctx, 40, self.RULE_typeDecl)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 276
            _la = self._input.LA(1)
            if _la==CalcParser.ID:
                self.state = 268
                self.varDecl()
                self.state = 273
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__32:
                    self.state = 269
                    self.match(CalcParser.T__32)
                    self.state = 270
                    self.varDecl()
                    self.state = 275
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



            self.state = 278
            self.match(CalcParser.T__33)
            self.state = 279
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
        self.enterRule(localctx, 42, self.RULE_declList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 289
            _la = self._input.LA(1)
            if _la==CalcParser.ID:
                self.state = 281
                self.varDecl()
                self.state = 286
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__32:
                    self.state = 282
                    self.match(CalcParser.T__32)
                    self.state = 283
                    self.varDecl()
                    self.state = 288
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



            self.state = 291
            self.match(CalcParser.T__33)
            self.state = 292
            self.r_type()
            self.state = 293
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
        self.enterRule(localctx, 44, self.RULE_constdeclList)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 295
            self.varDecl()
            self.state = 296
            self.match(CalcParser.T__20)
            self.state = 297
            self.match(CalcParser.LITERAL)
            self.state = 298
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
        self.enterRule(localctx, 46, self.RULE_varDecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 300
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
        self.enterRule(localctx, 48, self.RULE_r_type)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 303
            _la = self._input.LA(1)
            if _la==CalcParser.ARRAY:
                self.state = 302
                self.arrayDecl()


            self.state = 305
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
        self.enterRule(localctx, 50, self.RULE_arrayDecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 307
            self.match(CalcParser.ARRAY)
            self.state = 308
            self.match(CalcParser.T__7)
            self.state = 309
            self.match(CalcParser.LITERAL)
            self.state = 310
            self.match(CalcParser.T__9)
            self.state = 311
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
        self.enterRule(localctx, 52, self.RULE_rangeExpr)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 313
            self.match(CalcParser.T__7)
            self.state = 314
            self.expr(0)
            self.state = 315
            self.match(CalcParser.T__8)
            self.state = 316
            self.expr(0)
            self.state = 317
            self.match(CalcParser.T__9)
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
        self.enterRule(localctx, 54, self.RULE_ctrlStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 319
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
        self.enterRule(localctx, 56, self.RULE_ifStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 321
            self.match(CalcParser.IF)
            self.state = 322
            self.expr(0)
            self.state = 323
            self.match(CalcParser.THEN)
            self.state = 324
            self.open_stmt()
            self.state = 328
            la_ = self._interp.adaptivePredict(self._input,25,self._ctx)
            if la_ == 1:
                self.state = 325
                self.match(CalcParser.T__2)

            elif la_ == 2:
                self.state = 326
                self.match(CalcParser.ELSE)
                self.state = 327
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
        self.enterRule(localctx, 58, self.RULE_withForms)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 330
            self.match(CalcParser.WITHFORMS)
            self.state = 331
            self.match(CalcParser.T__5)
            self.state = 332
            self.full_id()
            self.state = 333
            self.match(CalcParser.T__32)
            self.state = 334
            self.full_id()
            self.state = 335
            self.match(CalcParser.T__6)
            self.state = 336
            self.match(CalcParser.DO)
            self.state = 337
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
        self.enterRule(localctx, 60, self.RULE_withNewTag)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 339
            self.match(CalcParser.WITHNEWTAG)
            self.state = 340
            self.match(CalcParser.T__5)
            self.state = 341
            self.expr(0)
            self.state = 342
            self.match(CalcParser.T__6)
            self.state = 343
            self.match(CalcParser.DO)
            self.state = 344
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
        self.enterRule(localctx, 62, self.RULE_elseStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 346
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
        self.enterRule(localctx, 64, self.RULE_loopStruct)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 348
            self.match(CalcParser.DO)
            self.state = 351
            _la = self._input.LA(1)
            if _la==CalcParser.WHILE:
                self.state = 349
                self.match(CalcParser.WHILE)
                self.state = 350
                localctx.preCond = self.expr(0)


            self.state = 353
            self.stmt()
            self.state = 354
            self.match(CalcParser.LOOP)
            self.state = 357
            _la = self._input.LA(1)
            if _la==CalcParser.WHILE:
                self.state = 355
                self.match(CalcParser.WHILE)
                self.state = 356
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
        self.enterRule(localctx, 66, self.RULE_caseStuct)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 359
            self.match(CalcParser.CASE)
            self.state = 360
            self.expr(0)
            self.state = 361
            self.match(CalcParser.OF)
            self.state = 363 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 362
                self.caseStmt()
                self.state = 365 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not (_la==CalcParser.LITERAL):
                    break

            self.state = 367
            self.match(CalcParser.END)
            self.state = 368
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
        self.enterRule(localctx, 68, self.RULE_caseStmt)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 370
            self.match(CalcParser.LITERAL)
            self.state = 371
            self.match(CalcParser.T__33)
            self.state = 372
            self.block()
            self.state = 373
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
        self.enterRule(localctx, 70, self.RULE_forloopstruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 375
            self.match(CalcParser.FOR)
            self.state = 376
            self.match(CalcParser.ID)
            self.state = 377
            self.match(CalcParser.LET)
            self.state = 378
            self.expr(0)
            self.state = 379
            self.match(CalcParser.TO)
            self.state = 380
            self.expr(0)
            self.state = 381
            self.match(CalcParser.DO)
            self.state = 384
            la_ = self._interp.adaptivePredict(self._input,29,self._ctx)
            if la_ == 1:
                self.state = 382
                self.block()
                pass

            elif la_ == 2:
                self.state = 383
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
        self.enterRule(localctx, 72, self.RULE_breakStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 386
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
        self.enterRule(localctx, 74, self.RULE_ret)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 388
            self.match(CalcParser.RETURN)
            self.state = 390
            la_ = self._interp.adaptivePredict(self._input,30,self._ctx)
            if la_ == 1:
                self.state = 389
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
        self.enterRule(localctx, 76, self.RULE_function)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 392
            localctx.retType = self.full_id()
            self.state = 393
            localctx.fnName = self.full_id()
            self.state = 394
            self.formParList()
            self.state = 396
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 395
                self.vardecl()


            self.state = 398
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
        self.enterRule(localctx, 78, self.RULE_formParList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 400
            self.match(CalcParser.T__5)
            self.state = 404
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==CalcParser.ARRAY or _la==CalcParser.ID:
                self.state = 401
                self.formPar()
                self.state = 406
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 407
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
        self.enterRule(localctx, 80, self.RULE_formPar)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 409
            self.r_type()
            self.state = 410
            localctx.name = self.full_id()
            self.state = 413
            _la = self._input.LA(1)
            if _la==CalcParser.LET:
                self.state = 411
                self.match(CalcParser.LET)
                self.state = 412
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
        self.enterRule(localctx, 82, self.RULE_full_id)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 415
            self.match(CalcParser.ID)
            self.state = 417
            la_ = self._interp.adaptivePredict(self._input,34,self._ctx)
            if la_ == 1:
                self.state = 416
                self.array_index()


            self.state = 422
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,35,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    self.state = 419
                    self.child_id() 
                self.state = 424
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,35,self._ctx)

            self.state = 428
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,36,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    self.state = 425
                    self.sub_id() 
                self.state = 430
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,36,self._ctx)

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
        self.enterRule(localctx, 84, self.RULE_child_id)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 431
            self.match(CalcParser.T__33)
            self.state = 432
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
        self.enterRule(localctx, 86, self.RULE_sub_id)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 434
            self.match(CalcParser.T__1)
            self.state = 435
            self.match(CalcParser.ID)
            self.state = 437
            la_ = self._interp.adaptivePredict(self._input,37,self._ctx)
            if la_ == 1:
                self.state = 436
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
        self.enterRule(localctx, 88, self.RULE_array_index)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 439
            self.match(CalcParser.T__7)
            self.state = 440
            self.expr(0)
            self.state = 441
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
        self.enterRule(localctx, 90, self.RULE_boolean)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 443
            _la = self._input.LA(1)
            if not(((((_la - 67)) & ~0x3f) == 0 and ((1 << (_la - 67)) & ((1 << (CalcParser.TRUE - 67)) | (1 << (CalcParser.FALSE - 67)) | (1 << (CalcParser.CHECKED - 67)))) != 0)):
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
        self._predicates[14] = self.expr_sempred
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
         



