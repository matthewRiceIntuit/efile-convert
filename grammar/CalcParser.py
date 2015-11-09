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
        buf.write(u"G\u0187\4\2\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t")
        buf.write(u"\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t\13\4\f\t\f\4\r\t\r")
        buf.write(u"\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22\4")
        buf.write(u"\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30")
        buf.write(u"\t\30\4\31\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t")
        buf.write(u"\35\4\36\t\36\4\37\t\37\4 \t \4!\t!\4\"\t\"\4#\t#\4$")
        buf.write(u"\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\3\2\3\2\5\2U\n\2")
        buf.write(u"\3\2\5\2X\n\2\3\2\7\2[\n\2\f\2\16\2^\13\2\3\3\3\3\3\3")
        buf.write(u"\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\6\3\6\3\6")
        buf.write(u"\3\6\5\6q\n\6\3\6\3\6\3\6\3\6\5\6w\n\6\3\6\3\6\3\7\3")
        buf.write(u"\7\7\7}\n\7\f\7\16\7\u0080\13\7\3\7\3\7\3\b\3\b\3\b\3")
        buf.write(u"\b\3\b\3\b\5\b\u008a\n\b\3\b\3\b\3\b\3\b\3\b\5\b\u0091")
        buf.write(u"\n\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\5\t\u009b\n\t\3")
        buf.write(u"\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3")
        buf.write(u"\f\3\f\3\f\3\f\3\r\3\r\5\r\u00af\n\r\3\16\3\16\5\16\u00b3")
        buf.write(u"\n\16\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3")
        buf.write(u"\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\5\17\u00c6\n\17")
        buf.write(u"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3")
        buf.write(u"\17\3\17\7\17\u00d4\n\17\f\17\16\17\u00d7\13\17\3\20")
        buf.write(u"\3\20\3\20\7\20\u00dc\n\20\f\20\16\20\u00df\13\20\5\20")
        buf.write(u"\u00e1\n\20\3\21\3\21\3\21\3\21\3\22\3\22\7\22\u00e9")
        buf.write(u"\n\22\f\22\16\22\u00ec\13\22\3\23\3\23\7\23\u00f0\n\23")
        buf.write(u"\f\23\16\23\u00f3\13\23\3\24\3\24\3\24\7\24\u00f8\n\24")
        buf.write(u"\f\24\16\24\u00fb\13\24\5\24\u00fd\n\24\3\24\3\24\3\24")
        buf.write(u"\3\25\3\25\3\25\7\25\u0105\n\25\f\25\16\25\u0108\13\25")
        buf.write(u"\5\25\u010a\n\25\3\25\3\25\3\25\3\25\3\26\3\26\3\26\3")
        buf.write(u"\26\3\26\3\27\3\27\3\30\5\30\u0118\n\30\3\30\3\30\3\31")
        buf.write(u"\3\31\3\31\3\31\3\31\3\31\3\32\3\32\3\33\3\33\3\33\3")
        buf.write(u"\33\3\33\3\33\3\33\5\33\u012b\n\33\3\34\3\34\3\34\3\34")
        buf.write(u"\3\34\3\34\3\34\3\34\3\34\3\35\3\35\3\35\3\35\3\35\3")
        buf.write(u"\35\3\35\3\36\3\36\3\37\3\37\3\37\5\37\u0142\n\37\3\37")
        buf.write(u"\3\37\3\37\3\37\5\37\u0148\n\37\3 \3 \3 \3 \3 \3 \3 ")
        buf.write(u"\3 \3 \5 \u0153\n \3!\3!\3\"\3\"\5\"\u0159\n\"\3#\3#")
        buf.write(u"\3#\3#\5#\u015f\n#\3#\3#\3$\3$\7$\u0165\n$\f$\16$\u0168")
        buf.write(u"\13$\3$\3$\3%\3%\3%\3%\5%\u0170\n%\3&\3&\5&\u0174\n&")
        buf.write(u"\3&\7&\u0177\n&\f&\16&\u017a\13&\3\'\3\'\3\'\5\'\u017f")
        buf.write(u"\n\'\3(\3(\3(\3(\3)\3)\3)\2\3\34*\2\4\6\b\n\f\16\20\22")
        buf.write(u"\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNP")
        buf.write(u"\2\t\3\2=?\3\2\32!\3\2\r\16\3\2\17\20\3\2\21\22\3\2\23")
        buf.write(u"\31\3\2CE\u0195\2R\3\2\2\2\4_\3\2\2\2\6e\3\2\2\2\bj\3")
        buf.write(u"\2\2\2\nl\3\2\2\2\fz\3\2\2\2\16\u0090\3\2\2\2\20\u009a")
        buf.write(u"\3\2\2\2\22\u009c\3\2\2\2\24\u00a0\3\2\2\2\26\u00a5\3")
        buf.write(u"\2\2\2\30\u00ae\3\2\2\2\32\u00b2\3\2\2\2\34\u00c5\3\2")
        buf.write(u"\2\2\36\u00e0\3\2\2\2 \u00e2\3\2\2\2\"\u00e6\3\2\2\2")
        buf.write(u"$\u00ed\3\2\2\2&\u00fc\3\2\2\2(\u0109\3\2\2\2*\u010f")
        buf.write(u"\3\2\2\2,\u0114\3\2\2\2.\u0117\3\2\2\2\60\u011b\3\2\2")
        buf.write(u"\2\62\u0121\3\2\2\2\64\u0123\3\2\2\2\66\u012c\3\2\2\2")
        buf.write(u"8\u0135\3\2\2\2:\u013c\3\2\2\2<\u013e\3\2\2\2>\u0149")
        buf.write(u"\3\2\2\2@\u0154\3\2\2\2B\u0156\3\2\2\2D\u015a\3\2\2\2")
        buf.write(u"F\u0162\3\2\2\2H\u016b\3\2\2\2J\u0171\3\2\2\2L\u017b")
        buf.write(u"\3\2\2\2N\u0180\3\2\2\2P\u0184\3\2\2\2RT\5\6\4\2SU\5")
        buf.write(u"$\23\2TS\3\2\2\2TU\3\2\2\2UW\3\2\2\2VX\5\"\22\2WV\3\2")
        buf.write(u"\2\2WX\3\2\2\2X\\\3\2\2\2Y[\5\n\6\2ZY\3\2\2\2[^\3\2\2")
        buf.write(u"\2\\Z\3\2\2\2\\]\3\2\2\2]\3\3\2\2\2^\\\3\2\2\2_`\7\3")
        buf.write(u"\2\2`a\7@\2\2ab\7\4\2\2bc\5\b\5\2cd\7\5\2\2d\5\3\2\2")
        buf.write(u"\2ef\7\6\2\2fg\7@\2\2gh\7\7\2\2hi\7\5\2\2i\7\3\2\2\2")
        buf.write(u"jk\7@\2\2k\t\3\2\2\2lm\7.\2\2mn\7@\2\2np\7\b\2\2oq\5")
        buf.write(u"&\24\2po\3\2\2\2pq\3\2\2\2qr\3\2\2\2rs\7\t\2\2st\7\5")
        buf.write(u"\2\2tv\5 \21\2uw\5\"\22\2vu\3\2\2\2vw\3\2\2\2wx\3\2\2")
        buf.write(u"\2xy\5\16\b\2y\13\3\2\2\2z~\7;\2\2{}\5\16\b\2|{\3\2\2")
        buf.write(u"\2}\u0080\3\2\2\2~|\3\2\2\2~\177\3\2\2\2\177\u0081\3")
        buf.write(u"\2\2\2\u0080~\3\2\2\2\u0081\u0082\7<\2\2\u0082\r\3\2")
        buf.write(u"\2\2\u0083\u008a\5\22\n\2\u0084\u008a\5\24\13\2\u0085")
        buf.write(u"\u008a\5B\"\2\u0086\u008a\5\f\7\2\u0087\u008a\5> \2\u0088")
        buf.write(u"\u008a\5@!\2\u0089\u0083\3\2\2\2\u0089\u0084\3\2\2\2")
        buf.write(u"\u0089\u0085\3\2\2\2\u0089\u0086\3\2\2\2\u0089\u0087")
        buf.write(u"\3\2\2\2\u0089\u0088\3\2\2\2\u008a\u008b\3\2\2\2\u008b")
        buf.write(u"\u008c\7\5\2\2\u008c\u0091\3\2\2\2\u008d\u0091\5\64\33")
        buf.write(u"\2\u008e\u0091\5\66\34\2\u008f\u0091\58\35\2\u0090\u0089")
        buf.write(u"\3\2\2\2\u0090\u008d\3\2\2\2\u0090\u008e\3\2\2\2\u0090")
        buf.write(u"\u008f\3\2\2\2\u0091\17\3\2\2\2\u0092\u009b\5\22\n\2")
        buf.write(u"\u0093\u009b\5\24\13\2\u0094\u009b\5B\"\2\u0095\u009b")
        buf.write(u"\5\f\7\2\u0096\u009b\5> \2\u0097\u009b\5\64\33\2\u0098")
        buf.write(u"\u009b\5\66\34\2\u0099\u009b\58\35\2\u009a\u0092\3\2")
        buf.write(u"\2\2\u009a\u0093\3\2\2\2\u009a\u0094\3\2\2\2\u009a\u0095")
        buf.write(u"\3\2\2\2\u009a\u0096\3\2\2\2\u009a\u0097\3\2\2\2\u009a")
        buf.write(u"\u0098\3\2\2\2\u009a\u0099\3\2\2\2\u009b\21\3\2\2\2\u009c")
        buf.write(u"\u009d\5J&\2\u009d\u009e\t\2\2\2\u009e\u009f\5\34\17")
        buf.write(u"\2\u009f\23\3\2\2\2\u00a0\u00a1\7@\2\2\u00a1\u00a2\7")
        buf.write(u"\b\2\2\u00a2\u00a3\5\36\20\2\u00a3\u00a4\7\t\2\2\u00a4")
        buf.write(u"\25\3\2\2\2\u00a5\u00a6\5J&\2\u00a6\u00a7\7\n\2\2\u00a7")
        buf.write(u"\u00a8\5\30\r\2\u00a8\u00a9\7\13\2\2\u00a9\u00aa\5\32")
        buf.write(u"\16\2\u00aa\u00ab\7\f\2\2\u00ab\27\3\2\2\2\u00ac\u00af")
        buf.write(u"\7%\2\2\u00ad\u00af\5\34\17\2\u00ae\u00ac\3\2\2\2\u00ae")
        buf.write(u"\u00ad\3\2\2\2\u00af\31\3\2\2\2\u00b0\u00b3\7%\2\2\u00b1")
        buf.write(u"\u00b3\5\34\17\2\u00b2\u00b0\3\2\2\2\u00b2\u00b1\3\2")
        buf.write(u"\2\2\u00b3\33\3\2\2\2\u00b4\u00b5\b\17\1\2\u00b5\u00b6")
        buf.write(u"\7\62\2\2\u00b6\u00c6\5\34\17\t\u00b7\u00c6\7%\2\2\u00b8")
        buf.write(u"\u00c6\t\3\2\2\u00b9\u00c6\5\24\13\2\u00ba\u00c6\5\26")
        buf.write(u"\f\2\u00bb\u00bc\7\"\2\2\u00bc\u00bd\7\b\2\2\u00bd\u00be")
        buf.write(u"\5\36\20\2\u00be\u00bf\7\t\2\2\u00bf\u00c6\3\2\2\2\u00c0")
        buf.write(u"\u00c1\7\b\2\2\u00c1\u00c2\5\34\17\2\u00c2\u00c3\7\t")
        buf.write(u"\2\2\u00c3\u00c6\3\2\2\2\u00c4\u00c6\5J&\2\u00c5\u00b4")
        buf.write(u"\3\2\2\2\u00c5\u00b7\3\2\2\2\u00c5\u00b8\3\2\2\2\u00c5")
        buf.write(u"\u00b9\3\2\2\2\u00c5\u00ba\3\2\2\2\u00c5\u00bb\3\2\2")
        buf.write(u"\2\u00c5\u00c0\3\2\2\2\u00c5\u00c4\3\2\2\2\u00c6\u00d5")
        buf.write(u"\3\2\2\2\u00c7\u00c8\f\16\2\2\u00c8\u00c9\t\4\2\2\u00c9")
        buf.write(u"\u00d4\5\34\17\17\u00ca\u00cb\f\r\2\2\u00cb\u00cc\t\5")
        buf.write(u"\2\2\u00cc\u00d4\5\34\17\16\u00cd\u00ce\f\f\2\2\u00ce")
        buf.write(u"\u00cf\t\6\2\2\u00cf\u00d4\5\34\17\r\u00d0\u00d1\f\13")
        buf.write(u"\2\2\u00d1\u00d2\t\7\2\2\u00d2\u00d4\5\34\17\f\u00d3")
        buf.write(u"\u00c7\3\2\2\2\u00d3\u00ca\3\2\2\2\u00d3\u00cd\3\2\2")
        buf.write(u"\2\u00d3\u00d0\3\2\2\2\u00d4\u00d7\3\2\2\2\u00d5\u00d3")
        buf.write(u"\3\2\2\2\u00d5\u00d6\3\2\2\2\u00d6\35\3\2\2\2\u00d7\u00d5")
        buf.write(u"\3\2\2\2\u00d8\u00dd\5\34\17\2\u00d9\u00da\7#\2\2\u00da")
        buf.write(u"\u00dc\5\34\17\2\u00db\u00d9\3\2\2\2\u00dc\u00df\3\2")
        buf.write(u"\2\2\u00dd\u00db\3\2\2\2\u00dd\u00de\3\2\2\2\u00de\u00e1")
        buf.write(u"\3\2\2\2\u00df\u00dd\3\2\2\2\u00e0\u00d8\3\2\2\2\u00e0")
        buf.write(u"\u00e1\3\2\2\2\u00e1\37\3\2\2\2\u00e2\u00e3\7\3\2\2\u00e3")
        buf.write(u"\u00e4\7@\2\2\u00e4\u00e5\7\5\2\2\u00e5!\3\2\2\2\u00e6")
        buf.write(u"\u00ea\7(\2\2\u00e7\u00e9\5(\25\2\u00e8\u00e7\3\2\2\2")
        buf.write(u"\u00e9\u00ec\3\2\2\2\u00ea\u00e8\3\2\2\2\u00ea\u00eb")
        buf.write(u"\3\2\2\2\u00eb#\3\2\2\2\u00ec\u00ea\3\2\2\2\u00ed\u00f1")
        buf.write(u"\7)\2\2\u00ee\u00f0\5*\26\2\u00ef\u00ee\3\2\2\2\u00f0")
        buf.write(u"\u00f3\3\2\2\2\u00f1\u00ef\3\2\2\2\u00f1\u00f2\3\2\2")
        buf.write(u"\2\u00f2%\3\2\2\2\u00f3\u00f1\3\2\2\2\u00f4\u00f9\5,")
        buf.write(u"\27\2\u00f5\u00f6\7#\2\2\u00f6\u00f8\5,\27\2\u00f7\u00f5")
        buf.write(u"\3\2\2\2\u00f8\u00fb\3\2\2\2\u00f9\u00f7\3\2\2\2\u00f9")
        buf.write(u"\u00fa\3\2\2\2\u00fa\u00fd\3\2\2\2\u00fb\u00f9\3\2\2")
        buf.write(u"\2\u00fc\u00f4\3\2\2\2\u00fc\u00fd\3\2\2\2\u00fd\u00fe")
        buf.write(u"\3\2\2\2\u00fe\u00ff\7$\2\2\u00ff\u0100\5.\30\2\u0100")
        buf.write(u"\'\3\2\2\2\u0101\u0106\5,\27\2\u0102\u0103\7#\2\2\u0103")
        buf.write(u"\u0105\5,\27\2\u0104\u0102\3\2\2\2\u0105\u0108\3\2\2")
        buf.write(u"\2\u0106\u0104\3\2\2\2\u0106\u0107\3\2\2\2\u0107\u010a")
        buf.write(u"\3\2\2\2\u0108\u0106\3\2\2\2\u0109\u0101\3\2\2\2\u0109")
        buf.write(u"\u010a\3\2\2\2\u010a\u010b\3\2\2\2\u010b\u010c\7$\2\2")
        buf.write(u"\u010c\u010d\5.\30\2\u010d\u010e\7\5\2\2\u010e)\3\2\2")
        buf.write(u"\2\u010f\u0110\5,\27\2\u0110\u0111\7\27\2\2\u0111\u0112")
        buf.write(u"\7%\2\2\u0112\u0113\7\5\2\2\u0113+\3\2\2\2\u0114\u0115")
        buf.write(u"\7@\2\2\u0115-\3\2\2\2\u0116\u0118\5\60\31\2\u0117\u0116")
        buf.write(u"\3\2\2\2\u0117\u0118\3\2\2\2\u0118\u0119\3\2\2\2\u0119")
        buf.write(u"\u011a\7@\2\2\u011a/\3\2\2\2\u011b\u011c\7&\2\2\u011c")
        buf.write(u"\u011d\7\n\2\2\u011d\u011e\7%\2\2\u011e\u011f\7\f\2\2")
        buf.write(u"\u011f\u0120\7\'\2\2\u0120\61\3\2\2\2\u0121\u0122\5\64")
        buf.write(u"\33\2\u0122\63\3\2\2\2\u0123\u0124\7*\2\2\u0124\u0125")
        buf.write(u"\5\34\17\2\u0125\u0126\7,\2\2\u0126\u012a\5\20\t\2\u0127")
        buf.write(u"\u012b\7\5\2\2\u0128\u0129\7+\2\2\u0129\u012b\5:\36\2")
        buf.write(u"\u012a\u0127\3\2\2\2\u012a\u0128\3\2\2\2\u012a\u012b")
        buf.write(u"\3\2\2\2\u012b\65\3\2\2\2\u012c\u012d\7\64\2\2\u012d")
        buf.write(u"\u012e\7\b\2\2\u012e\u012f\5J&\2\u012f\u0130\7#\2\2\u0130")
        buf.write(u"\u0131\5J&\2\u0131\u0132\7\t\2\2\u0132\u0133\7/\2\2\u0133")
        buf.write(u"\u0134\5\16\b\2\u0134\67\3\2\2\2\u0135\u0136\7\65\2\2")
        buf.write(u"\u0136\u0137\7\b\2\2\u0137\u0138\7%\2\2\u0138\u0139\7")
        buf.write(u"\t\2\2\u0139\u013a\7/\2\2\u013a\u013b\5\16\b\2\u013b")
        buf.write(u"9\3\2\2\2\u013c\u013d\5\16\b\2\u013d;\3\2\2\2\u013e\u0141")
        buf.write(u"\7/\2\2\u013f\u0140\7\67\2\2\u0140\u0142\5\34\17\2\u0141")
        buf.write(u"\u013f\3\2\2\2\u0141\u0142\3\2\2\2\u0142\u0143\3\2\2")
        buf.write(u"\2\u0143\u0144\5\16\b\2\u0144\u0147\78\2\2\u0145\u0146")
        buf.write(u"\7\67\2\2\u0146\u0148\5\34\17\2\u0147\u0145\3\2\2\2\u0147")
        buf.write(u"\u0148\3\2\2\2\u0148=\3\2\2\2\u0149\u014a\7\61\2\2\u014a")
        buf.write(u"\u014b\7@\2\2\u014b\u014c\7=\2\2\u014c\u014d\5\34\17")
        buf.write(u"\2\u014d\u014e\7\60\2\2\u014e\u014f\5\34\17\2\u014f\u0152")
        buf.write(u"\7/\2\2\u0150\u0153\5\f\7\2\u0151\u0153\5\16\b\2\u0152")
        buf.write(u"\u0150\3\2\2\2\u0152\u0151\3\2\2\2\u0153?\3\2\2\2\u0154")
        buf.write(u"\u0155\7\63\2\2\u0155A\3\2\2\2\u0156\u0158\79\2\2\u0157")
        buf.write(u"\u0159\5\34\17\2\u0158\u0157\3\2\2\2\u0158\u0159\3\2")
        buf.write(u"\2\2\u0159C\3\2\2\2\u015a\u015b\5J&\2\u015b\u015c\5J")
        buf.write(u"&\2\u015c\u015e\5F$\2\u015d\u015f\5\"\22\2\u015e\u015d")
        buf.write(u"\3\2\2\2\u015e\u015f\3\2\2\2\u015f\u0160\3\2\2\2\u0160")
        buf.write(u"\u0161\5\f\7\2\u0161E\3\2\2\2\u0162\u0166\7\b\2\2\u0163")
        buf.write(u"\u0165\5H%\2\u0164\u0163\3\2\2\2\u0165\u0168\3\2\2\2")
        buf.write(u"\u0166\u0164\3\2\2\2\u0166\u0167\3\2\2\2\u0167\u0169")
        buf.write(u"\3\2\2\2\u0168\u0166\3\2\2\2\u0169\u016a\7\t\2\2\u016a")
        buf.write(u"G\3\2\2\2\u016b\u016c\5.\30\2\u016c\u016f\5J&\2\u016d")
        buf.write(u"\u016e\7=\2\2\u016e\u0170\5\34\17\2\u016f\u016d\3\2\2")
        buf.write(u"\2\u016f\u0170\3\2\2\2\u0170I\3\2\2\2\u0171\u0173\7@")
        buf.write(u"\2\2\u0172\u0174\5N(\2\u0173\u0172\3\2\2\2\u0173\u0174")
        buf.write(u"\3\2\2\2\u0174\u0178\3\2\2\2\u0175\u0177\5L\'\2\u0176")
        buf.write(u"\u0175\3\2\2\2\u0177\u017a\3\2\2\2\u0178\u0176\3\2\2")
        buf.write(u"\2\u0178\u0179\3\2\2\2\u0179K\3\2\2\2\u017a\u0178\3\2")
        buf.write(u"\2\2\u017b\u017c\7\4\2\2\u017c\u017e\7@\2\2\u017d\u017f")
        buf.write(u"\5N(\2\u017e\u017d\3\2\2\2\u017e\u017f\3\2\2\2\u017f")
        buf.write(u"M\3\2\2\2\u0180\u0181\7\n\2\2\u0181\u0182\5\34\17\2\u0182")
        buf.write(u"\u0183\7\f\2\2\u0183O\3\2\2\2\u0184\u0185\t\b\2\2\u0185")
        buf.write(u"Q\3\2\2\2$TW\\pv~\u0089\u0090\u009a\u00ae\u00b2\u00c5")
        buf.write(u"\u00d3\u00d5\u00dd\u00e0\u00ea\u00f1\u00f9\u00fc\u0106")
        buf.write(u"\u0109\u0117\u012a\u0141\u0147\u0152\u0158\u015e\u0166")
        buf.write(u"\u016f\u0173\u0178\u017e")
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
                     u"<INVALID>", u"<INVALID>", u"':='", u"'?='", u"'#='" ]

    symbolicNames = [ u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"<INVALID>", 
                      u"<INVALID>", u"<INVALID>", u"<INVALID>", u"LITERAL", 
                      u"ARRAY", u"OF", u"VAR", u"CONSTANT", u"IF", u"ELSE", 
                      u"THEN", u"SECTION", u"PROCEDURE", u"DO", u"TO", u"FOR", 
                      u"NOT", u"BREAK", u"WITHFORMS", u"WITHNEWTAG", u"FORM", 
                      u"WHILE", u"LOOP", u"RETURN", u"WS", u"BEGIN", u"END", 
                      u"LET", u"ALTLET", u"CRAZYLET", u"ID", u"INT", u"STRING", 
                      u"TRUE", u"FALSE", u"CHECKED", u"COMMENT", u"LINE_COMMENT" ]

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
    RULE_typeDecl = 18
    RULE_declList = 19
    RULE_constdeclList = 20
    RULE_varDecl = 21
    RULE_r_type = 22
    RULE_arrayDecl = 23
    RULE_ctrlStruct = 24
    RULE_ifStruct = 25
    RULE_withForms = 26
    RULE_withNewTag = 27
    RULE_elseStruct = 28
    RULE_loopStruct = 29
    RULE_forloopstruct = 30
    RULE_breakStruct = 31
    RULE_ret = 32
    RULE_function = 33
    RULE_formParList = 34
    RULE_formPar = 35
    RULE_full_id = 36
    RULE_sub_id = 37
    RULE_array_index = 38
    RULE_boolean = 39

    ruleNames =  [ u"calcfile", u"formset", u"converter", u"form", u"section", 
                   u"block", u"stmt", u"open_stmt", u"assign", u"call", 
                   u"multicopy_accum", u"start_index", u"end_index", u"expr", 
                   u"argList", u"formdecl", u"vardecl", u"constdecl", u"typeDecl", 
                   u"declList", u"constdeclList", u"varDecl", u"r_type", 
                   u"arrayDecl", u"ctrlStruct", u"ifStruct", u"withForms", 
                   u"withNewTag", u"elseStruct", u"loopStruct", u"forloopstruct", 
                   u"breakStruct", u"ret", u"function", u"formParList", 
                   u"formPar", u"full_id", u"sub_id", u"array_index", u"boolean" ]

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
    VAR=38
    CONSTANT=39
    IF=40
    ELSE=41
    THEN=42
    SECTION=43
    PROCEDURE=44
    DO=45
    TO=46
    FOR=47
    NOT=48
    BREAK=49
    WITHFORMS=50
    WITHNEWTAG=51
    FORM=52
    WHILE=53
    LOOP=54
    RETURN=55
    WS=56
    BEGIN=57
    END=58
    LET=59
    ALTLET=60
    CRAZYLET=61
    ID=62
    INT=63
    STRING=64
    TRUE=65
    FALSE=66
    CHECKED=67
    COMMENT=68
    LINE_COMMENT=69

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
            self.state = 80
            self.converter()
            self.state = 82
            _la = self._input.LA(1)
            if _la==CalcParser.CONSTANT:
                self.state = 81
                self.constdecl()


            self.state = 85
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 84
                self.vardecl()


            self.state = 90
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==CalcParser.PROCEDURE:
                self.state = 87
                self.section()
                self.state = 92
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
            self.state = 93
            self.match(CalcParser.T__0)
            self.state = 94
            self.match(CalcParser.ID)
            self.state = 95
            self.match(CalcParser.T__1)
            self.state = 96
            self.form()
            self.state = 97
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
            self.state = 99
            self.match(CalcParser.T__3)
            self.state = 100
            self.match(CalcParser.ID)
            self.state = 101
            self.match(CalcParser.T__4)
            self.state = 102
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

        def ID(self):
            return self.getToken(CalcParser.ID, 0)

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
            self.state = 104
            self.match(CalcParser.ID)
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

        def formdecl(self):
            return self.getTypedRuleContext(CalcParser.FormdeclContext,0)


        def stmt(self):
            return self.getTypedRuleContext(CalcParser.StmtContext,0)


        def typeDecl(self):
            return self.getTypedRuleContext(CalcParser.TypeDeclContext,0)


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
            self.state = 106
            self.match(CalcParser.PROCEDURE)
            self.state = 107
            self.match(CalcParser.ID)
            self.state = 108
            self.match(CalcParser.T__5)
            self.state = 110
            _la = self._input.LA(1)
            if _la==CalcParser.T__33 or _la==CalcParser.ID:
                self.state = 109
                self.typeDecl()


            self.state = 112
            self.match(CalcParser.T__6)
            self.state = 113
            self.match(CalcParser.T__2)
            self.state = 114
            self.formdecl()
            self.state = 116
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 115
                self.vardecl()


            self.state = 118
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
            self.state = 120
            self.match(CalcParser.BEGIN)
            self.state = 124
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while (((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.IF) | (1 << CalcParser.FOR) | (1 << CalcParser.BREAK) | (1 << CalcParser.WITHFORMS) | (1 << CalcParser.WITHNEWTAG) | (1 << CalcParser.RETURN) | (1 << CalcParser.BEGIN) | (1 << CalcParser.ID))) != 0):
                self.state = 121
                self.stmt()
                self.state = 126
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 127
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
            self.state = 142
            token = self._input.LA(1)
            if token in [CalcParser.FOR, CalcParser.BREAK, CalcParser.RETURN, CalcParser.BEGIN, CalcParser.ID]:
                self.enterOuterAlt(localctx, 1)
                self.state = 135
                la_ = self._interp.adaptivePredict(self._input,6,self._ctx)
                if la_ == 1:
                    self.state = 129
                    self.assign()
                    pass

                elif la_ == 2:
                    self.state = 130
                    self.call()
                    pass

                elif la_ == 3:
                    self.state = 131
                    self.ret()
                    pass

                elif la_ == 4:
                    self.state = 132
                    self.block()
                    pass

                elif la_ == 5:
                    self.state = 133
                    self.forloopstruct()
                    pass

                elif la_ == 6:
                    self.state = 134
                    self.breakStruct()
                    pass


                self.state = 137
                self.match(CalcParser.T__2)

            elif token in [CalcParser.IF]:
                self.enterOuterAlt(localctx, 2)
                self.state = 139
                self.ifStruct()

            elif token in [CalcParser.WITHFORMS]:
                self.enterOuterAlt(localctx, 3)
                self.state = 140
                self.withForms()

            elif token in [CalcParser.WITHNEWTAG]:
                self.enterOuterAlt(localctx, 4)
                self.state = 141
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
            self.state = 152
            la_ = self._interp.adaptivePredict(self._input,8,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 144
                self.assign()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 145
                self.call()
                pass

            elif la_ == 3:
                self.enterOuterAlt(localctx, 3)
                self.state = 146
                self.ret()
                pass

            elif la_ == 4:
                self.enterOuterAlt(localctx, 4)
                self.state = 147
                self.block()
                pass

            elif la_ == 5:
                self.enterOuterAlt(localctx, 5)
                self.state = 148
                self.forloopstruct()
                pass

            elif la_ == 6:
                self.enterOuterAlt(localctx, 6)
                self.state = 149
                self.ifStruct()
                pass

            elif la_ == 7:
                self.enterOuterAlt(localctx, 7)
                self.state = 150
                self.withForms()
                pass

            elif la_ == 8:
                self.enterOuterAlt(localctx, 8)
                self.state = 151
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
            self.state = 154
            self.full_id()
            self.state = 155
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.LET) | (1 << CalcParser.ALTLET) | (1 << CalcParser.CRAZYLET))) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self.consume()
            self.state = 156
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
            self.state = 158
            self.match(CalcParser.ID)
            self.state = 159
            self.match(CalcParser.T__5)
            self.state = 160
            self.argList()
            self.state = 161
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
            self.state = 163
            self.full_id()
            self.state = 164
            self.match(CalcParser.T__7)
            self.state = 165
            self.start_index()
            self.state = 166
            self.match(CalcParser.T__8)
            self.state = 167
            self.end_index()
            self.state = 168
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
            self.state = 172
            la_ = self._interp.adaptivePredict(self._input,9,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 170
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 171
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
            self.state = 176
            la_ = self._interp.adaptivePredict(self._input,10,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 174
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 175
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
            self.state = 195
            la_ = self._interp.adaptivePredict(self._input,11,self._ctx)
            if la_ == 1:
                localctx = CalcParser.NotContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx

                self.state = 179
                self.match(CalcParser.NOT)
                self.state = 180
                self.expr(7)
                pass

            elif la_ == 2:
                localctx = CalcParser.LiteralContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 181
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 3:
                localctx = CalcParser.BoolContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 182
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
                self.state = 183
                self.call()
                pass

            elif la_ == 5:
                localctx = CalcParser.MultiCopyAccumulateContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 184
                self.multicopy_accum()
                pass

            elif la_ == 6:
                localctx = CalcParser.MaxContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 185
                self.match(CalcParser.T__31)
                self.state = 186
                self.match(CalcParser.T__5)
                self.state = 187
                self.argList()
                self.state = 188
                self.match(CalcParser.T__6)
                pass

            elif la_ == 7:
                localctx = CalcParser.ParensContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 190
                self.match(CalcParser.T__5)
                self.state = 191
                self.expr(0)
                self.state = 192
                self.match(CalcParser.T__6)
                pass

            elif la_ == 8:
                localctx = CalcParser.VarRefContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 194
                self.full_id()
                pass


            self._ctx.stop = self._input.LT(-1)
            self.state = 211
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,13,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    self.state = 209
                    la_ = self._interp.adaptivePredict(self._input,12,self._ctx)
                    if la_ == 1:
                        localctx = CalcParser.DivMulContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 197
                        if not self.precpred(self._ctx, 12):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 12)")
                        self.state = 198
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.T__10 or _la==CalcParser.T__11):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 199
                        self.expr(13)
                        pass

                    elif la_ == 2:
                        localctx = CalcParser.AddSubContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 200
                        if not self.precpred(self._ctx, 11):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 11)")
                        self.state = 201
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.T__12 or _la==CalcParser.T__13):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 202
                        self.expr(12)
                        pass

                    elif la_ == 3:
                        localctx = CalcParser.LogicContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 203
                        if not self.precpred(self._ctx, 10):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 10)")
                        self.state = 204
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.T__14 or _la==CalcParser.T__15):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 205
                        self.expr(11)
                        pass

                    elif la_ == 4:
                        localctx = CalcParser.PredicateContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 206
                        if not self.precpred(self._ctx, 9):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 9)")
                        self.state = 207
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not((((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.T__16) | (1 << CalcParser.T__17) | (1 << CalcParser.T__18) | (1 << CalcParser.T__19) | (1 << CalcParser.T__20) | (1 << CalcParser.T__21) | (1 << CalcParser.T__22))) != 0)):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 208
                        self.expr(10)
                        pass

             
                self.state = 213
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
        self.enterRule(localctx, 28, self.RULE_argList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 222
            _la = self._input.LA(1)
            if (((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.T__5) | (1 << CalcParser.T__23) | (1 << CalcParser.T__24) | (1 << CalcParser.T__25) | (1 << CalcParser.T__26) | (1 << CalcParser.T__27) | (1 << CalcParser.T__28) | (1 << CalcParser.T__29) | (1 << CalcParser.T__30) | (1 << CalcParser.T__31) | (1 << CalcParser.LITERAL) | (1 << CalcParser.NOT) | (1 << CalcParser.ID))) != 0):
                self.state = 214
                self.expr(0)
                self.state = 219
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__32:
                    self.state = 215
                    self.match(CalcParser.T__32)
                    self.state = 216
                    self.expr(0)
                    self.state = 221
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

        def ID(self):
            return self.getToken(CalcParser.ID, 0)

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
            self.state = 224
            self.match(CalcParser.T__0)
            self.state = 225
            self.match(CalcParser.ID)
            self.state = 226
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
            self.state = 228
            self.match(CalcParser.VAR)
            self.state = 232
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,16,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    self.state = 229
                    self.declList() 
                self.state = 234
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
        self.enterRule(localctx, 34, self.RULE_constdecl)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 235
            self.match(CalcParser.CONSTANT)
            self.state = 239
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==CalcParser.ID:
                self.state = 236
                self.constdeclList()
                self.state = 241
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
        self.enterRule(localctx, 36, self.RULE_typeDecl)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 250
            _la = self._input.LA(1)
            if _la==CalcParser.ID:
                self.state = 242
                self.varDecl()
                self.state = 247
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__32:
                    self.state = 243
                    self.match(CalcParser.T__32)
                    self.state = 244
                    self.varDecl()
                    self.state = 249
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



            self.state = 252
            self.match(CalcParser.T__33)
            self.state = 253
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
        self.enterRule(localctx, 38, self.RULE_declList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 263
            _la = self._input.LA(1)
            if _la==CalcParser.ID:
                self.state = 255
                self.varDecl()
                self.state = 260
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__32:
                    self.state = 256
                    self.match(CalcParser.T__32)
                    self.state = 257
                    self.varDecl()
                    self.state = 262
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



            self.state = 265
            self.match(CalcParser.T__33)
            self.state = 266
            self.r_type()
            self.state = 267
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
        self.enterRule(localctx, 40, self.RULE_constdeclList)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 269
            self.varDecl()
            self.state = 270
            self.match(CalcParser.T__20)
            self.state = 271
            self.match(CalcParser.LITERAL)
            self.state = 272
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
        self.enterRule(localctx, 42, self.RULE_varDecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 274
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
        self.enterRule(localctx, 44, self.RULE_r_type)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 277
            _la = self._input.LA(1)
            if _la==CalcParser.ARRAY:
                self.state = 276
                self.arrayDecl()


            self.state = 279
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
        self.enterRule(localctx, 46, self.RULE_arrayDecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 281
            self.match(CalcParser.ARRAY)
            self.state = 282
            self.match(CalcParser.T__7)
            self.state = 283
            self.match(CalcParser.LITERAL)
            self.state = 284
            self.match(CalcParser.T__9)
            self.state = 285
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
        self.enterRule(localctx, 48, self.RULE_ctrlStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 287
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
        self.enterRule(localctx, 50, self.RULE_ifStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 289
            self.match(CalcParser.IF)
            self.state = 290
            self.expr(0)
            self.state = 291
            self.match(CalcParser.THEN)
            self.state = 292
            self.open_stmt()
            self.state = 296
            la_ = self._interp.adaptivePredict(self._input,23,self._ctx)
            if la_ == 1:
                self.state = 293
                self.match(CalcParser.T__2)

            elif la_ == 2:
                self.state = 294
                self.match(CalcParser.ELSE)
                self.state = 295
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
        self.enterRule(localctx, 52, self.RULE_withForms)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 298
            self.match(CalcParser.WITHFORMS)
            self.state = 299
            self.match(CalcParser.T__5)
            self.state = 300
            self.full_id()
            self.state = 301
            self.match(CalcParser.T__32)
            self.state = 302
            self.full_id()
            self.state = 303
            self.match(CalcParser.T__6)
            self.state = 304
            self.match(CalcParser.DO)
            self.state = 305
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

        def LITERAL(self):
            return self.getToken(CalcParser.LITERAL, 0)

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
        self.enterRule(localctx, 54, self.RULE_withNewTag)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 307
            self.match(CalcParser.WITHNEWTAG)
            self.state = 308
            self.match(CalcParser.T__5)
            self.state = 309
            self.match(CalcParser.LITERAL)
            self.state = 310
            self.match(CalcParser.T__6)
            self.state = 311
            self.match(CalcParser.DO)
            self.state = 312
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
        self.enterRule(localctx, 56, self.RULE_elseStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 314
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
        self.enterRule(localctx, 58, self.RULE_loopStruct)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 316
            self.match(CalcParser.DO)
            self.state = 319
            _la = self._input.LA(1)
            if _la==CalcParser.WHILE:
                self.state = 317
                self.match(CalcParser.WHILE)
                self.state = 318
                localctx.preCond = self.expr(0)


            self.state = 321
            self.stmt()
            self.state = 322
            self.match(CalcParser.LOOP)
            self.state = 325
            _la = self._input.LA(1)
            if _la==CalcParser.WHILE:
                self.state = 323
                self.match(CalcParser.WHILE)
                self.state = 324
                localctx.postCond = self.expr(0)


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
        self.enterRule(localctx, 60, self.RULE_forloopstruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 327
            self.match(CalcParser.FOR)
            self.state = 328
            self.match(CalcParser.ID)
            self.state = 329
            self.match(CalcParser.LET)
            self.state = 330
            self.expr(0)
            self.state = 331
            self.match(CalcParser.TO)
            self.state = 332
            self.expr(0)
            self.state = 333
            self.match(CalcParser.DO)
            self.state = 336
            la_ = self._interp.adaptivePredict(self._input,26,self._ctx)
            if la_ == 1:
                self.state = 334
                self.block()
                pass

            elif la_ == 2:
                self.state = 335
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
        self.enterRule(localctx, 62, self.RULE_breakStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 338
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
        self.enterRule(localctx, 64, self.RULE_ret)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 340
            self.match(CalcParser.RETURN)
            self.state = 342
            la_ = self._interp.adaptivePredict(self._input,27,self._ctx)
            if la_ == 1:
                self.state = 341
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
        self.enterRule(localctx, 66, self.RULE_function)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 344
            localctx.retType = self.full_id()
            self.state = 345
            localctx.fnName = self.full_id()
            self.state = 346
            self.formParList()
            self.state = 348
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 347
                self.vardecl()


            self.state = 350
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
        self.enterRule(localctx, 68, self.RULE_formParList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 352
            self.match(CalcParser.T__5)
            self.state = 356
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==CalcParser.ARRAY or _la==CalcParser.ID:
                self.state = 353
                self.formPar()
                self.state = 358
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 359
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
        self.enterRule(localctx, 70, self.RULE_formPar)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 361
            self.r_type()
            self.state = 362
            localctx.name = self.full_id()
            self.state = 365
            _la = self._input.LA(1)
            if _la==CalcParser.LET:
                self.state = 363
                self.match(CalcParser.LET)
                self.state = 364
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
        self.enterRule(localctx, 72, self.RULE_full_id)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 367
            self.match(CalcParser.ID)
            self.state = 369
            la_ = self._interp.adaptivePredict(self._input,31,self._ctx)
            if la_ == 1:
                self.state = 368
                self.array_index()


            self.state = 374
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,32,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    self.state = 371
                    self.sub_id() 
                self.state = 376
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,32,self._ctx)

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
        self.enterRule(localctx, 74, self.RULE_sub_id)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 377
            self.match(CalcParser.T__1)
            self.state = 378
            self.match(CalcParser.ID)
            self.state = 380
            la_ = self._interp.adaptivePredict(self._input,33,self._ctx)
            if la_ == 1:
                self.state = 379
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
        self.enterRule(localctx, 76, self.RULE_array_index)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 382
            self.match(CalcParser.T__7)
            self.state = 383
            self.expr(0)
            self.state = 384
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
        self.enterRule(localctx, 78, self.RULE_boolean)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 386
            _la = self._input.LA(1)
            if not(((((_la - 65)) & ~0x3f) == 0 and ((1 << (_la - 65)) & ((1 << (CalcParser.TRUE - 65)) | (1 << (CalcParser.FALSE - 65)) | (1 << (CalcParser.CHECKED - 65)))) != 0)):
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
         



