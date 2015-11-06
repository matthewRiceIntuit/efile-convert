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
        buf.write(u"E\u016e\4\2\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t")
        buf.write(u"\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t\13\4\f\t\f\4\r\t\r")
        buf.write(u"\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22\4")
        buf.write(u"\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30")
        buf.write(u"\t\30\4\31\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t")
        buf.write(u"\35\4\36\t\36\4\37\t\37\4 \t \4!\t!\4\"\t\"\4#\t#\4$")
        buf.write(u"\t$\4%\t%\4&\t&\3\2\3\2\5\2O\n\2\3\2\5\2R\n\2\3\2\5\2")
        buf.write(u"U\n\2\3\2\7\2X\n\2\f\2\16\2[\13\2\3\3\3\3\3\3\3\3\3\3")
        buf.write(u"\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\6")
        buf.write(u"\3\6\3\6\3\6\3\6\3\6\5\6t\n\6\3\6\3\6\5\6x\n\6\3\6\3")
        buf.write(u"\6\3\7\3\7\7\7~\n\7\f\7\16\7\u0081\13\7\3\7\3\7\3\b\3")
        buf.write(u"\b\3\b\3\b\3\b\3\b\5\b\u008b\n\b\3\b\3\b\3\b\3\b\5\b")
        buf.write(u"\u0091\n\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t\5\t\u009a\n\t")
        buf.write(u"\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3\f")
        buf.write(u"\3\f\3\f\3\f\3\f\3\r\3\r\5\r\u00ae\n\r\3\16\3\16\5\16")
        buf.write(u"\u00b2\n\16\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3")
        buf.write(u"\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\5\17\u00c5")
        buf.write(u"\n\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3")
        buf.write(u"\17\3\17\3\17\7\17\u00d3\n\17\f\17\16\17\u00d6\13\17")
        buf.write(u"\3\20\3\20\3\20\7\20\u00db\n\20\f\20\16\20\u00de\13\20")
        buf.write(u"\5\20\u00e0\n\20\3\21\3\21\7\21\u00e4\n\21\f\21\16\21")
        buf.write(u"\u00e7\13\21\3\22\3\22\7\22\u00eb\n\22\f\22\16\22\u00ee")
        buf.write(u"\13\22\3\23\3\23\3\23\7\23\u00f3\n\23\f\23\16\23\u00f6")
        buf.write(u"\13\23\5\23\u00f8\n\23\3\23\3\23\3\23\3\23\3\24\3\24")
        buf.write(u"\3\24\3\24\3\24\3\25\3\25\3\26\5\26\u0106\n\26\3\26\3")
        buf.write(u"\26\3\27\3\27\3\27\3\27\3\27\3\27\3\30\3\30\3\31\3\31")
        buf.write(u"\3\31\3\31\3\31\3\31\3\31\5\31\u0119\n\31\3\32\3\32\3")
        buf.write(u"\32\3\32\3\32\3\32\3\32\3\32\3\32\3\33\3\33\3\34\3\34")
        buf.write(u"\3\34\5\34\u0129\n\34\3\34\3\34\3\34\3\34\5\34\u012f")
        buf.write(u"\n\34\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\5")
        buf.write(u"\35\u013a\n\35\3\36\3\36\3\37\3\37\5\37\u0140\n\37\3")
        buf.write(u" \3 \3 \3 \5 \u0146\n \3 \3 \3!\3!\7!\u014c\n!\f!\16")
        buf.write(u"!\u014f\13!\3!\3!\3\"\3\"\3\"\3\"\5\"\u0157\n\"\3#\3")
        buf.write(u"#\5#\u015b\n#\3#\7#\u015e\n#\f#\16#\u0161\13#\3$\3$\3")
        buf.write(u"$\5$\u0166\n$\3%\3%\3%\3%\3&\3&\3&\2\3\34\'\2\4\6\b\n")
        buf.write(u"\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:")
        buf.write(u"<>@BDFHJ\2\t\3\2;=\3\2\32!\3\2\r\16\3\2\17\20\3\2\21")
        buf.write(u"\22\3\2\23\31\3\2AC\u017c\2N\3\2\2\2\4\\\3\2\2\2\6b\3")
        buf.write(u"\2\2\2\bk\3\2\2\2\ns\3\2\2\2\f{\3\2\2\2\16\u0090\3\2")
        buf.write(u"\2\2\20\u0099\3\2\2\2\22\u009b\3\2\2\2\24\u009f\3\2\2")
        buf.write(u"\2\26\u00a4\3\2\2\2\30\u00ad\3\2\2\2\32\u00b1\3\2\2\2")
        buf.write(u"\34\u00c4\3\2\2\2\36\u00df\3\2\2\2 \u00e1\3\2\2\2\"\u00e8")
        buf.write(u"\3\2\2\2$\u00f7\3\2\2\2&\u00fd\3\2\2\2(\u0102\3\2\2\2")
        buf.write(u"*\u0105\3\2\2\2,\u0109\3\2\2\2.\u010f\3\2\2\2\60\u0111")
        buf.write(u"\3\2\2\2\62\u011a\3\2\2\2\64\u0123\3\2\2\2\66\u0125\3")
        buf.write(u"\2\2\28\u0130\3\2\2\2:\u013b\3\2\2\2<\u013d\3\2\2\2>")
        buf.write(u"\u0141\3\2\2\2@\u0149\3\2\2\2B\u0152\3\2\2\2D\u0158\3")
        buf.write(u"\2\2\2F\u0162\3\2\2\2H\u0167\3\2\2\2J\u016b\3\2\2\2L")
        buf.write(u"O\5\4\3\2MO\5\6\4\2NL\3\2\2\2NM\3\2\2\2OQ\3\2\2\2PR\5")
        buf.write(u"\"\22\2QP\3\2\2\2QR\3\2\2\2RT\3\2\2\2SU\5 \21\2TS\3\2")
        buf.write(u"\2\2TU\3\2\2\2UY\3\2\2\2VX\5\n\6\2WV\3\2\2\2X[\3\2\2")
        buf.write(u"\2YW\3\2\2\2YZ\3\2\2\2Z\3\3\2\2\2[Y\3\2\2\2\\]\7\3\2")
        buf.write(u"\2]^\7>\2\2^_\7\4\2\2_`\5\b\5\2`a\7\5\2\2a\5\3\2\2\2")
        buf.write(u"bc\7\6\2\2cd\7>\2\2de\7\60\2\2ef\7>\2\2fg\7\5\2\2gh\7")
        buf.write(u"\7\2\2hi\7%\2\2ij\7\5\2\2j\7\3\2\2\2kl\7>\2\2l\t\3\2")
        buf.write(u"\2\2mn\7-\2\2nt\7>\2\2op\7.\2\2pq\7>\2\2qr\7\b\2\2rt")
        buf.write(u"\7\t\2\2sm\3\2\2\2so\3\2\2\2tu\3\2\2\2uw\7\5\2\2vx\5")
        buf.write(u" \21\2wv\3\2\2\2wx\3\2\2\2xy\3\2\2\2yz\5\16\b\2z\13\3")
        buf.write(u"\2\2\2{\177\79\2\2|~\5\16\b\2}|\3\2\2\2~\u0081\3\2\2")
        buf.write(u"\2\177}\3\2\2\2\177\u0080\3\2\2\2\u0080\u0082\3\2\2\2")
        buf.write(u"\u0081\177\3\2\2\2\u0082\u0083\7:\2\2\u0083\r\3\2\2\2")
        buf.write(u"\u0084\u008b\5\22\n\2\u0085\u008b\5\24\13\2\u0086\u008b")
        buf.write(u"\5<\37\2\u0087\u008b\5\f\7\2\u0088\u008b\58\35\2\u0089")
        buf.write(u"\u008b\5:\36\2\u008a\u0084\3\2\2\2\u008a\u0085\3\2\2")
        buf.write(u"\2\u008a\u0086\3\2\2\2\u008a\u0087\3\2\2\2\u008a\u0088")
        buf.write(u"\3\2\2\2\u008a\u0089\3\2\2\2\u008b\u008c\3\2\2\2\u008c")
        buf.write(u"\u008d\7\5\2\2\u008d\u0091\3\2\2\2\u008e\u0091\5\60\31")
        buf.write(u"\2\u008f\u0091\5\62\32\2\u0090\u008a\3\2\2\2\u0090\u008e")
        buf.write(u"\3\2\2\2\u0090\u008f\3\2\2\2\u0091\17\3\2\2\2\u0092\u009a")
        buf.write(u"\5\22\n\2\u0093\u009a\5\24\13\2\u0094\u009a\5<\37\2\u0095")
        buf.write(u"\u009a\5\f\7\2\u0096\u009a\58\35\2\u0097\u009a\5\60\31")
        buf.write(u"\2\u0098\u009a\5\62\32\2\u0099\u0092\3\2\2\2\u0099\u0093")
        buf.write(u"\3\2\2\2\u0099\u0094\3\2\2\2\u0099\u0095\3\2\2\2\u0099")
        buf.write(u"\u0096\3\2\2\2\u0099\u0097\3\2\2\2\u0099\u0098\3\2\2")
        buf.write(u"\2\u009a\21\3\2\2\2\u009b\u009c\5D#\2\u009c\u009d\t\2")
        buf.write(u"\2\2\u009d\u009e\5\34\17\2\u009e\23\3\2\2\2\u009f\u00a0")
        buf.write(u"\7>\2\2\u00a0\u00a1\7\b\2\2\u00a1\u00a2\5\36\20\2\u00a2")
        buf.write(u"\u00a3\7\t\2\2\u00a3\25\3\2\2\2\u00a4\u00a5\5D#\2\u00a5")
        buf.write(u"\u00a6\7\n\2\2\u00a6\u00a7\5\30\r\2\u00a7\u00a8\7\13")
        buf.write(u"\2\2\u00a8\u00a9\5\32\16\2\u00a9\u00aa\7\f\2\2\u00aa")
        buf.write(u"\27\3\2\2\2\u00ab\u00ae\7%\2\2\u00ac\u00ae\5\34\17\2")
        buf.write(u"\u00ad\u00ab\3\2\2\2\u00ad\u00ac\3\2\2\2\u00ae\31\3\2")
        buf.write(u"\2\2\u00af\u00b2\7%\2\2\u00b0\u00b2\5\34\17\2\u00b1\u00af")
        buf.write(u"\3\2\2\2\u00b1\u00b0\3\2\2\2\u00b2\33\3\2\2\2\u00b3\u00b4")
        buf.write(u"\b\17\1\2\u00b4\u00b5\7\62\2\2\u00b5\u00c5\5\34\17\t")
        buf.write(u"\u00b6\u00c5\7%\2\2\u00b7\u00c5\t\3\2\2\u00b8\u00c5\5")
        buf.write(u"\24\13\2\u00b9\u00c5\5\26\f\2\u00ba\u00bb\7\"\2\2\u00bb")
        buf.write(u"\u00bc\7\b\2\2\u00bc\u00bd\5\36\20\2\u00bd\u00be\7\t")
        buf.write(u"\2\2\u00be\u00c5\3\2\2\2\u00bf\u00c0\7\b\2\2\u00c0\u00c1")
        buf.write(u"\5\34\17\2\u00c1\u00c2\7\t\2\2\u00c2\u00c5\3\2\2\2\u00c3")
        buf.write(u"\u00c5\5D#\2\u00c4\u00b3\3\2\2\2\u00c4\u00b6\3\2\2\2")
        buf.write(u"\u00c4\u00b7\3\2\2\2\u00c4\u00b8\3\2\2\2\u00c4\u00b9")
        buf.write(u"\3\2\2\2\u00c4\u00ba\3\2\2\2\u00c4\u00bf\3\2\2\2\u00c4")
        buf.write(u"\u00c3\3\2\2\2\u00c5\u00d4\3\2\2\2\u00c6\u00c7\f\16\2")
        buf.write(u"\2\u00c7\u00c8\t\4\2\2\u00c8\u00d3\5\34\17\17\u00c9\u00ca")
        buf.write(u"\f\r\2\2\u00ca\u00cb\t\5\2\2\u00cb\u00d3\5\34\17\16\u00cc")
        buf.write(u"\u00cd\f\f\2\2\u00cd\u00ce\t\6\2\2\u00ce\u00d3\5\34\17")
        buf.write(u"\r\u00cf\u00d0\f\13\2\2\u00d0\u00d1\t\7\2\2\u00d1\u00d3")
        buf.write(u"\5\34\17\f\u00d2\u00c6\3\2\2\2\u00d2\u00c9\3\2\2\2\u00d2")
        buf.write(u"\u00cc\3\2\2\2\u00d2\u00cf\3\2\2\2\u00d3\u00d6\3\2\2")
        buf.write(u"\2\u00d4\u00d2\3\2\2\2\u00d4\u00d5\3\2\2\2\u00d5\35\3")
        buf.write(u"\2\2\2\u00d6\u00d4\3\2\2\2\u00d7\u00dc\5\34\17\2\u00d8")
        buf.write(u"\u00d9\7#\2\2\u00d9\u00db\5\34\17\2\u00da\u00d8\3\2\2")
        buf.write(u"\2\u00db\u00de\3\2\2\2\u00dc\u00da\3\2\2\2\u00dc\u00dd")
        buf.write(u"\3\2\2\2\u00dd\u00e0\3\2\2\2\u00de\u00dc\3\2\2\2\u00df")
        buf.write(u"\u00d7\3\2\2\2\u00df\u00e0\3\2\2\2\u00e0\37\3\2\2\2\u00e1")
        buf.write(u"\u00e5\7(\2\2\u00e2\u00e4\5$\23\2\u00e3\u00e2\3\2\2\2")
        buf.write(u"\u00e4\u00e7\3\2\2\2\u00e5\u00e3\3\2\2\2\u00e5\u00e6")
        buf.write(u"\3\2\2\2\u00e6!\3\2\2\2\u00e7\u00e5\3\2\2\2\u00e8\u00ec")
        buf.write(u"\7)\2\2\u00e9\u00eb\5&\24\2\u00ea\u00e9\3\2\2\2\u00eb")
        buf.write(u"\u00ee\3\2\2\2\u00ec\u00ea\3\2\2\2\u00ec\u00ed\3\2\2")
        buf.write(u"\2\u00ed#\3\2\2\2\u00ee\u00ec\3\2\2\2\u00ef\u00f4\5(")
        buf.write(u"\25\2\u00f0\u00f1\7#\2\2\u00f1\u00f3\5(\25\2\u00f2\u00f0")
        buf.write(u"\3\2\2\2\u00f3\u00f6\3\2\2\2\u00f4\u00f2\3\2\2\2\u00f4")
        buf.write(u"\u00f5\3\2\2\2\u00f5\u00f8\3\2\2\2\u00f6\u00f4\3\2\2")
        buf.write(u"\2\u00f7\u00ef\3\2\2\2\u00f7\u00f8\3\2\2\2\u00f8\u00f9")
        buf.write(u"\3\2\2\2\u00f9\u00fa\7$\2\2\u00fa\u00fb\5*\26\2\u00fb")
        buf.write(u"\u00fc\7\5\2\2\u00fc%\3\2\2\2\u00fd\u00fe\5(\25\2\u00fe")
        buf.write(u"\u00ff\7\27\2\2\u00ff\u0100\7%\2\2\u0100\u0101\7\5\2")
        buf.write(u"\2\u0101\'\3\2\2\2\u0102\u0103\7>\2\2\u0103)\3\2\2\2")
        buf.write(u"\u0104\u0106\5,\27\2\u0105\u0104\3\2\2\2\u0105\u0106")
        buf.write(u"\3\2\2\2\u0106\u0107\3\2\2\2\u0107\u0108\7>\2\2\u0108")
        buf.write(u"+\3\2\2\2\u0109\u010a\7&\2\2\u010a\u010b\7\n\2\2\u010b")
        buf.write(u"\u010c\7%\2\2\u010c\u010d\7\f\2\2\u010d\u010e\7\'\2\2")
        buf.write(u"\u010e-\3\2\2\2\u010f\u0110\5\60\31\2\u0110/\3\2\2\2")
        buf.write(u"\u0111\u0112\7*\2\2\u0112\u0113\5\34\17\2\u0113\u0114")
        buf.write(u"\7,\2\2\u0114\u0118\5\20\t\2\u0115\u0119\7\5\2\2\u0116")
        buf.write(u"\u0117\7+\2\2\u0117\u0119\5\64\33\2\u0118\u0115\3\2\2")
        buf.write(u"\2\u0118\u0116\3\2\2\2\u0118\u0119\3\2\2\2\u0119\61\3")
        buf.write(u"\2\2\2\u011a\u011b\7\64\2\2\u011b\u011c\7\b\2\2\u011c")
        buf.write(u"\u011d\5D#\2\u011d\u011e\7#\2\2\u011e\u011f\5D#\2\u011f")
        buf.write(u"\u0120\7\t\2\2\u0120\u0121\7/\2\2\u0121\u0122\5\16\b")
        buf.write(u"\2\u0122\63\3\2\2\2\u0123\u0124\5\16\b\2\u0124\65\3\2")
        buf.write(u"\2\2\u0125\u0128\7/\2\2\u0126\u0127\7\65\2\2\u0127\u0129")
        buf.write(u"\5\34\17\2\u0128\u0126\3\2\2\2\u0128\u0129\3\2\2\2\u0129")
        buf.write(u"\u012a\3\2\2\2\u012a\u012b\5\16\b\2\u012b\u012e\7\66")
        buf.write(u"\2\2\u012c\u012d\7\65\2\2\u012d\u012f\5\34\17\2\u012e")
        buf.write(u"\u012c\3\2\2\2\u012e\u012f\3\2\2\2\u012f\67\3\2\2\2\u0130")
        buf.write(u"\u0131\7\61\2\2\u0131\u0132\7>\2\2\u0132\u0133\7;\2\2")
        buf.write(u"\u0133\u0134\5\34\17\2\u0134\u0135\7\60\2\2\u0135\u0136")
        buf.write(u"\5\34\17\2\u0136\u0139\7/\2\2\u0137\u013a\5\f\7\2\u0138")
        buf.write(u"\u013a\5\16\b\2\u0139\u0137\3\2\2\2\u0139\u0138\3\2\2")
        buf.write(u"\2\u013a9\3\2\2\2\u013b\u013c\7\63\2\2\u013c;\3\2\2\2")
        buf.write(u"\u013d\u013f\7\67\2\2\u013e\u0140\5\34\17\2\u013f\u013e")
        buf.write(u"\3\2\2\2\u013f\u0140\3\2\2\2\u0140=\3\2\2\2\u0141\u0142")
        buf.write(u"\5D#\2\u0142\u0143\5D#\2\u0143\u0145\5@!\2\u0144\u0146")
        buf.write(u"\5 \21\2\u0145\u0144\3\2\2\2\u0145\u0146\3\2\2\2\u0146")
        buf.write(u"\u0147\3\2\2\2\u0147\u0148\5\f\7\2\u0148?\3\2\2\2\u0149")
        buf.write(u"\u014d\7\b\2\2\u014a\u014c\5B\"\2\u014b\u014a\3\2\2\2")
        buf.write(u"\u014c\u014f\3\2\2\2\u014d\u014b\3\2\2\2\u014d\u014e")
        buf.write(u"\3\2\2\2\u014e\u0150\3\2\2\2\u014f\u014d\3\2\2\2\u0150")
        buf.write(u"\u0151\7\t\2\2\u0151A\3\2\2\2\u0152\u0153\5*\26\2\u0153")
        buf.write(u"\u0156\5D#\2\u0154\u0155\7;\2\2\u0155\u0157\5\34\17\2")
        buf.write(u"\u0156\u0154\3\2\2\2\u0156\u0157\3\2\2\2\u0157C\3\2\2")
        buf.write(u"\2\u0158\u015a\7>\2\2\u0159\u015b\5H%\2\u015a\u0159\3")
        buf.write(u"\2\2\2\u015a\u015b\3\2\2\2\u015b\u015f\3\2\2\2\u015c")
        buf.write(u"\u015e\5F$\2\u015d\u015c\3\2\2\2\u015e\u0161\3\2\2\2")
        buf.write(u"\u015f\u015d\3\2\2\2\u015f\u0160\3\2\2\2\u0160E\3\2\2")
        buf.write(u"\2\u0161\u015f\3\2\2\2\u0162\u0163\7\4\2\2\u0163\u0165")
        buf.write(u"\7>\2\2\u0164\u0166\5H%\2\u0165\u0164\3\2\2\2\u0165\u0166")
        buf.write(u"\3\2\2\2\u0166G\3\2\2\2\u0167\u0168\7\n\2\2\u0168\u0169")
        buf.write(u"\5\34\17\2\u0169\u016a\7\f\2\2\u016aI\3\2\2\2\u016b\u016c")
        buf.write(u"\t\b\2\2\u016cK\3\2\2\2#NQTYsw\177\u008a\u0090\u0099")
        buf.write(u"\u00ad\u00b1\u00c4\u00d2\u00d4\u00dc\u00df\u00e5\u00ec")
        buf.write(u"\u00f4\u00f7\u0105\u0118\u0128\u012e\u0139\u013f\u0145")
        buf.write(u"\u014d\u0156\u015a\u015f\u0165")
        return buf.getvalue()


class CalcParser ( Parser ):

    grammarFileName = "java-escape"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ u"<INVALID>", u"'FORM'", u"'.'", u"';'", u"'UPDATE'", 
                     u"'DESCRIPTION'", u"'('", u"')'", u"'['", u"'..'", 
                     u"']'", u"'/'", u"'*'", u"'+'", u"'-'", u"'and'", u"'or'", 
                     u"'>'", u"'<'", u"'<='", u"'>='", u"'='", u"'<>'", 
                     u"'=='", u"'True'", u"'TRUE'", u"'false'", u"'FALSE'", 
                     u"'False'", u"'Checked'", u"'checked'", u"'CHECKED'", 
                     u"'MAX'", u"','", u"':'", u"<INVALID>", u"<INVALID>", 
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
                      u"ARRAY", u"OF", u"VAR", u"CONSTANT", u"IF", u"ELSE", 
                      u"THEN", u"SECTION", u"PROCEDURE", u"DO", u"TO", u"FOR", 
                      u"NOT", u"BREAK", u"WITHFORMS", u"WHILE", u"LOOP", 
                      u"RETURN", u"WS", u"BEGIN", u"END", u"LET", u"ALTLET", 
                      u"CRAZYLET", u"ID", u"INT", u"STRING", u"TRUE", u"FALSE", 
                      u"CHECKED", u"COMMENT", u"LINE_COMMENT" ]

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
    RULE_vardecl = 15
    RULE_constdecl = 16
    RULE_declList = 17
    RULE_constdeclList = 18
    RULE_varDecl = 19
    RULE_r_type = 20
    RULE_arrayDecl = 21
    RULE_ctrlStruct = 22
    RULE_ifStruct = 23
    RULE_withForms = 24
    RULE_elseStruct = 25
    RULE_loopStruct = 26
    RULE_forloopstruct = 27
    RULE_breakStruct = 28
    RULE_ret = 29
    RULE_function = 30
    RULE_formParList = 31
    RULE_formPar = 32
    RULE_full_id = 33
    RULE_sub_id = 34
    RULE_array_index = 35
    RULE_boolean = 36

    ruleNames =  [ u"calcfile", u"formset", u"converter", u"form", u"section", 
                   u"block", u"stmt", u"open_stmt", u"assign", u"call", 
                   u"multicopy_accum", u"start_index", u"end_index", u"expr", 
                   u"argList", u"vardecl", u"constdecl", u"declList", u"constdeclList", 
                   u"varDecl", u"r_type", u"arrayDecl", u"ctrlStruct", u"ifStruct", 
                   u"withForms", u"elseStruct", u"loopStruct", u"forloopstruct", 
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
    WHILE=51
    LOOP=52
    RETURN=53
    WS=54
    BEGIN=55
    END=56
    LET=57
    ALTLET=58
    CRAZYLET=59
    ID=60
    INT=61
    STRING=62
    TRUE=63
    FALSE=64
    CHECKED=65
    COMMENT=66
    LINE_COMMENT=67

    def __init__(self, input):
        super(CalcParser, self).__init__(input)
        self.checkVersion("4.5")
        self._interp = ParserATNSimulator(self, self.atn, self.decisionsToDFA, self.sharedContextCache)
        self._predicates = None



    class CalcfileContext(ParserRuleContext):

        def __init__(self, parser, parent=None, invokingState=-1):
            super(CalcParser.CalcfileContext, self).__init__(parent, invokingState)
            self.parser = parser

        def formset(self):
            return self.getTypedRuleContext(CalcParser.FormsetContext,0)


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
            self.state = 76
            token = self._input.LA(1)
            if token in [CalcParser.T__0]:
                self.state = 74
                self.formset()

            elif token in [CalcParser.T__3]:
                self.state = 75
                self.converter()

            else:
                raise NoViableAltException(self)

            self.state = 79
            _la = self._input.LA(1)
            if _la==CalcParser.CONSTANT:
                self.state = 78
                self.constdecl()


            self.state = 82
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 81
                self.vardecl()


            self.state = 87
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==CalcParser.SECTION or _la==CalcParser.PROCEDURE:
                self.state = 84
                self.section()
                self.state = 89
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
            self.state = 90
            self.match(CalcParser.T__0)
            self.state = 91
            self.match(CalcParser.ID)
            self.state = 92
            self.match(CalcParser.T__1)
            self.state = 93
            self.form()
            self.state = 94
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

        def ID(self, i=None):
            if i is None:
                return self.getTokens(CalcParser.ID)
            else:
                return self.getToken(CalcParser.ID, i)

        def TO(self):
            return self.getToken(CalcParser.TO, 0)

        def LITERAL(self):
            return self.getToken(CalcParser.LITERAL, 0)

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
            self.state = 96
            self.match(CalcParser.T__3)
            self.state = 97
            self.match(CalcParser.ID)
            self.state = 98
            self.match(CalcParser.TO)
            self.state = 99
            self.match(CalcParser.ID)
            self.state = 100
            self.match(CalcParser.T__2)
            self.state = 101
            self.match(CalcParser.T__4)
            self.state = 102
            self.match(CalcParser.LITERAL)
            self.state = 103
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
            self.state = 105
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

        def stmt(self):
            return self.getTypedRuleContext(CalcParser.StmtContext,0)


        def SECTION(self):
            return self.getToken(CalcParser.SECTION, 0)

        def ID(self):
            return self.getToken(CalcParser.ID, 0)

        def PROCEDURE(self):
            return self.getToken(CalcParser.PROCEDURE, 0)

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
            self.state = 113
            token = self._input.LA(1)
            if token in [CalcParser.SECTION]:
                self.state = 107
                self.match(CalcParser.SECTION)
                self.state = 108
                self.match(CalcParser.ID)

            elif token in [CalcParser.PROCEDURE]:
                self.state = 109
                self.match(CalcParser.PROCEDURE)
                self.state = 110
                self.match(CalcParser.ID)
                self.state = 111
                self.match(CalcParser.T__5)
                self.state = 112
                self.match(CalcParser.T__6)

            else:
                raise NoViableAltException(self)

            self.state = 115
            self.match(CalcParser.T__2)
            self.state = 117
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 116
                self.vardecl()


            self.state = 119
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
            self.state = 121
            self.match(CalcParser.BEGIN)
            self.state = 125
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while (((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.IF) | (1 << CalcParser.FOR) | (1 << CalcParser.BREAK) | (1 << CalcParser.WITHFORMS) | (1 << CalcParser.RETURN) | (1 << CalcParser.BEGIN) | (1 << CalcParser.ID))) != 0):
                self.state = 122
                self.stmt()
                self.state = 127
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 128
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
                self.state = 136
                la_ = self._interp.adaptivePredict(self._input,7,self._ctx)
                if la_ == 1:
                    self.state = 130
                    self.assign()
                    pass

                elif la_ == 2:
                    self.state = 131
                    self.call()
                    pass

                elif la_ == 3:
                    self.state = 132
                    self.ret()
                    pass

                elif la_ == 4:
                    self.state = 133
                    self.block()
                    pass

                elif la_ == 5:
                    self.state = 134
                    self.forloopstruct()
                    pass

                elif la_ == 6:
                    self.state = 135
                    self.breakStruct()
                    pass


                self.state = 138
                self.match(CalcParser.T__2)

            elif token in [CalcParser.IF]:
                self.enterOuterAlt(localctx, 2)
                self.state = 140
                self.ifStruct()

            elif token in [CalcParser.WITHFORMS]:
                self.enterOuterAlt(localctx, 3)
                self.state = 141
                self.withForms()

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
            self.state = 151
            la_ = self._interp.adaptivePredict(self._input,9,self._ctx)
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
            self.state = 153
            self.full_id()
            self.state = 154
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.LET) | (1 << CalcParser.ALTLET) | (1 << CalcParser.CRAZYLET))) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self.consume()
            self.state = 155
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
            self.state = 157
            self.match(CalcParser.ID)
            self.state = 158
            self.match(CalcParser.T__5)
            self.state = 159
            self.argList()
            self.state = 160
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
            self.state = 162
            self.full_id()
            self.state = 163
            self.match(CalcParser.T__7)
            self.state = 164
            self.start_index()
            self.state = 165
            self.match(CalcParser.T__8)
            self.state = 166
            self.end_index()
            self.state = 167
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
            self.state = 171
            la_ = self._interp.adaptivePredict(self._input,10,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 169
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 170
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
            self.state = 175
            la_ = self._interp.adaptivePredict(self._input,11,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 173
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 174
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
            self.state = 194
            la_ = self._interp.adaptivePredict(self._input,12,self._ctx)
            if la_ == 1:
                localctx = CalcParser.NotContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx

                self.state = 178
                self.match(CalcParser.NOT)
                self.state = 179
                self.expr(7)
                pass

            elif la_ == 2:
                localctx = CalcParser.LiteralContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 180
                self.match(CalcParser.LITERAL)
                pass

            elif la_ == 3:
                localctx = CalcParser.BoolContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 181
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
                self.state = 182
                self.call()
                pass

            elif la_ == 5:
                localctx = CalcParser.MultiCopyAccumulateContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 183
                self.multicopy_accum()
                pass

            elif la_ == 6:
                localctx = CalcParser.MaxContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 184
                self.match(CalcParser.T__31)
                self.state = 185
                self.match(CalcParser.T__5)
                self.state = 186
                self.argList()
                self.state = 187
                self.match(CalcParser.T__6)
                pass

            elif la_ == 7:
                localctx = CalcParser.ParensContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 189
                self.match(CalcParser.T__5)
                self.state = 190
                self.expr(0)
                self.state = 191
                self.match(CalcParser.T__6)
                pass

            elif la_ == 8:
                localctx = CalcParser.VarRefContext(self, localctx)
                self._ctx = localctx
                _prevctx = localctx
                self.state = 193
                self.full_id()
                pass


            self._ctx.stop = self._input.LT(-1)
            self.state = 210
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,14,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    self.state = 208
                    la_ = self._interp.adaptivePredict(self._input,13,self._ctx)
                    if la_ == 1:
                        localctx = CalcParser.DivMulContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 196
                        if not self.precpred(self._ctx, 12):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 12)")
                        self.state = 197
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.T__10 or _la==CalcParser.T__11):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 198
                        self.expr(13)
                        pass

                    elif la_ == 2:
                        localctx = CalcParser.AddSubContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 199
                        if not self.precpred(self._ctx, 11):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 11)")
                        self.state = 200
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.T__12 or _la==CalcParser.T__13):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 201
                        self.expr(12)
                        pass

                    elif la_ == 3:
                        localctx = CalcParser.LogicContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 202
                        if not self.precpred(self._ctx, 10):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 10)")
                        self.state = 203
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==CalcParser.T__14 or _la==CalcParser.T__15):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 204
                        self.expr(11)
                        pass

                    elif la_ == 4:
                        localctx = CalcParser.PredicateContext(self, CalcParser.ExprContext(self, _parentctx, _parentState))
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 205
                        if not self.precpred(self._ctx, 9):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 9)")
                        self.state = 206
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not((((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.T__16) | (1 << CalcParser.T__17) | (1 << CalcParser.T__18) | (1 << CalcParser.T__19) | (1 << CalcParser.T__20) | (1 << CalcParser.T__21) | (1 << CalcParser.T__22))) != 0)):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self.consume()
                        self.state = 207
                        self.expr(10)
                        pass

             
                self.state = 212
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
        self.enterRule(localctx, 28, self.RULE_argList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 221
            _la = self._input.LA(1)
            if (((_la) & ~0x3f) == 0 and ((1 << _la) & ((1 << CalcParser.T__5) | (1 << CalcParser.T__23) | (1 << CalcParser.T__24) | (1 << CalcParser.T__25) | (1 << CalcParser.T__26) | (1 << CalcParser.T__27) | (1 << CalcParser.T__28) | (1 << CalcParser.T__29) | (1 << CalcParser.T__30) | (1 << CalcParser.T__31) | (1 << CalcParser.LITERAL) | (1 << CalcParser.NOT) | (1 << CalcParser.ID))) != 0):
                self.state = 213
                self.expr(0)
                self.state = 218
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__32:
                    self.state = 214
                    self.match(CalcParser.T__32)
                    self.state = 215
                    self.expr(0)
                    self.state = 220
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



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
        self.enterRule(localctx, 30, self.RULE_vardecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 223
            self.match(CalcParser.VAR)
            self.state = 227
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,17,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    self.state = 224
                    self.declList() 
                self.state = 229
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
        self.enterRule(localctx, 32, self.RULE_constdecl)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 230
            self.match(CalcParser.CONSTANT)
            self.state = 234
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==CalcParser.ID:
                self.state = 231
                self.constdeclList()
                self.state = 236
                self._errHandler.sync(self)
                _la = self._input.LA(1)

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
        self.enterRule(localctx, 34, self.RULE_declList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 245
            _la = self._input.LA(1)
            if _la==CalcParser.ID:
                self.state = 237
                self.varDecl()
                self.state = 242
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==CalcParser.T__32:
                    self.state = 238
                    self.match(CalcParser.T__32)
                    self.state = 239
                    self.varDecl()
                    self.state = 244
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



            self.state = 247
            self.match(CalcParser.T__33)
            self.state = 248
            self.r_type()
            self.state = 249
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
        self.enterRule(localctx, 36, self.RULE_constdeclList)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 251
            self.varDecl()
            self.state = 252
            self.match(CalcParser.T__20)
            self.state = 253
            self.match(CalcParser.LITERAL)
            self.state = 254
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
        self.enterRule(localctx, 38, self.RULE_varDecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 256
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
        self.enterRule(localctx, 40, self.RULE_r_type)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 259
            _la = self._input.LA(1)
            if _la==CalcParser.ARRAY:
                self.state = 258
                self.arrayDecl()


            self.state = 261
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
        self.enterRule(localctx, 42, self.RULE_arrayDecl)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 263
            self.match(CalcParser.ARRAY)
            self.state = 264
            self.match(CalcParser.T__7)
            self.state = 265
            self.match(CalcParser.LITERAL)
            self.state = 266
            self.match(CalcParser.T__9)
            self.state = 267
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
        self.enterRule(localctx, 44, self.RULE_ctrlStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 269
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
        self.enterRule(localctx, 46, self.RULE_ifStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 271
            self.match(CalcParser.IF)
            self.state = 272
            self.expr(0)
            self.state = 273
            self.match(CalcParser.THEN)
            self.state = 274
            self.open_stmt()
            self.state = 278
            la_ = self._interp.adaptivePredict(self._input,22,self._ctx)
            if la_ == 1:
                self.state = 275
                self.match(CalcParser.T__2)

            elif la_ == 2:
                self.state = 276
                self.match(CalcParser.ELSE)
                self.state = 277
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
        self.enterRule(localctx, 48, self.RULE_withForms)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 280
            self.match(CalcParser.WITHFORMS)
            self.state = 281
            self.match(CalcParser.T__5)
            self.state = 282
            self.full_id()
            self.state = 283
            self.match(CalcParser.T__32)
            self.state = 284
            self.full_id()
            self.state = 285
            self.match(CalcParser.T__6)
            self.state = 286
            self.match(CalcParser.DO)
            self.state = 287
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
        self.enterRule(localctx, 50, self.RULE_elseStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 289
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
        self.enterRule(localctx, 52, self.RULE_loopStruct)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 291
            self.match(CalcParser.DO)
            self.state = 294
            _la = self._input.LA(1)
            if _la==CalcParser.WHILE:
                self.state = 292
                self.match(CalcParser.WHILE)
                self.state = 293
                localctx.preCond = self.expr(0)


            self.state = 296
            self.stmt()
            self.state = 297
            self.match(CalcParser.LOOP)
            self.state = 300
            _la = self._input.LA(1)
            if _la==CalcParser.WHILE:
                self.state = 298
                self.match(CalcParser.WHILE)
                self.state = 299
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
        self.enterRule(localctx, 54, self.RULE_forloopstruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 302
            self.match(CalcParser.FOR)
            self.state = 303
            self.match(CalcParser.ID)
            self.state = 304
            self.match(CalcParser.LET)
            self.state = 305
            self.expr(0)
            self.state = 306
            self.match(CalcParser.TO)
            self.state = 307
            self.expr(0)
            self.state = 308
            self.match(CalcParser.DO)
            self.state = 311
            la_ = self._interp.adaptivePredict(self._input,25,self._ctx)
            if la_ == 1:
                self.state = 309
                self.block()
                pass

            elif la_ == 2:
                self.state = 310
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
        self.enterRule(localctx, 56, self.RULE_breakStruct)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 313
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
        self.enterRule(localctx, 58, self.RULE_ret)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 315
            self.match(CalcParser.RETURN)
            self.state = 317
            la_ = self._interp.adaptivePredict(self._input,26,self._ctx)
            if la_ == 1:
                self.state = 316
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
        self.enterRule(localctx, 60, self.RULE_function)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 319
            localctx.retType = self.full_id()
            self.state = 320
            localctx.fnName = self.full_id()
            self.state = 321
            self.formParList()
            self.state = 323
            _la = self._input.LA(1)
            if _la==CalcParser.VAR:
                self.state = 322
                self.vardecl()


            self.state = 325
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
        self.enterRule(localctx, 62, self.RULE_formParList)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 327
            self.match(CalcParser.T__5)
            self.state = 331
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==CalcParser.ARRAY or _la==CalcParser.ID:
                self.state = 328
                self.formPar()
                self.state = 333
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 334
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
        self.enterRule(localctx, 64, self.RULE_formPar)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 336
            self.r_type()
            self.state = 337
            localctx.name = self.full_id()
            self.state = 340
            _la = self._input.LA(1)
            if _la==CalcParser.LET:
                self.state = 338
                self.match(CalcParser.LET)
                self.state = 339
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
        self.enterRule(localctx, 66, self.RULE_full_id)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 342
            self.match(CalcParser.ID)
            self.state = 344
            la_ = self._interp.adaptivePredict(self._input,30,self._ctx)
            if la_ == 1:
                self.state = 343
                self.array_index()


            self.state = 349
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,31,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    self.state = 346
                    self.sub_id() 
                self.state = 351
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,31,self._ctx)

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
        self.enterRule(localctx, 68, self.RULE_sub_id)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 352
            self.match(CalcParser.T__1)
            self.state = 353
            self.match(CalcParser.ID)
            self.state = 355
            la_ = self._interp.adaptivePredict(self._input,32,self._ctx)
            if la_ == 1:
                self.state = 354
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
        self.enterRule(localctx, 70, self.RULE_array_index)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 357
            self.match(CalcParser.T__7)
            self.state = 358
            self.expr(0)
            self.state = 359
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
        self.enterRule(localctx, 72, self.RULE_boolean)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 361
            _la = self._input.LA(1)
            if not(((((_la - 63)) & ~0x3f) == 0 and ((1 << (_la - 63)) & ((1 << (CalcParser.TRUE - 63)) | (1 << (CalcParser.FALSE - 63)) | (1 << (CalcParser.CHECKED - 63)))) != 0)):
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
         



