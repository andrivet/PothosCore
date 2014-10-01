# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef POTHOS_PREPROCESSOR_DETAIL_AUTO_REC_HPP
# define POTHOS_PREPROCESSOR_DETAIL_AUTO_REC_HPP
#
# include <Pothos/serialization/impl/preprocessor/control/iif.hpp>
#
# /* POTHOS_PP_AUTO_REC */
#
# define POTHOS_PP_AUTO_REC(pred, n) POTHOS_PP_NODE_ENTRY_ ## n(pred)
#
# define POTHOS_PP_NODE_ENTRY_256(p) POTHOS_PP_NODE_128(p)(p)(p)(p)(p)(p)(p)(p)
# define POTHOS_PP_NODE_ENTRY_128(p) POTHOS_PP_NODE_64(p)(p)(p)(p)(p)(p)(p)
# define POTHOS_PP_NODE_ENTRY_64(p) POTHOS_PP_NODE_32(p)(p)(p)(p)(p)(p)
# define POTHOS_PP_NODE_ENTRY_32(p) POTHOS_PP_NODE_16(p)(p)(p)(p)(p)
# define POTHOS_PP_NODE_ENTRY_16(p) POTHOS_PP_NODE_8(p)(p)(p)(p)
# define POTHOS_PP_NODE_ENTRY_8(p) POTHOS_PP_NODE_4(p)(p)(p)
# define POTHOS_PP_NODE_ENTRY_4(p) POTHOS_PP_NODE_2(p)(p)
# define POTHOS_PP_NODE_ENTRY_2(p) POTHOS_PP_NODE_1(p)
#
# define POTHOS_PP_NODE_128(p) POTHOS_PP_IIF(p##(128), POTHOS_PP_NODE_64, POTHOS_PP_NODE_192)
#    define POTHOS_PP_NODE_64(p) POTHOS_PP_IIF(p##(64), POTHOS_PP_NODE_32, POTHOS_PP_NODE_96)
#        define POTHOS_PP_NODE_32(p) POTHOS_PP_IIF(p##(32), POTHOS_PP_NODE_16, POTHOS_PP_NODE_48)
#            define POTHOS_PP_NODE_16(p) POTHOS_PP_IIF(p##(16), POTHOS_PP_NODE_8, POTHOS_PP_NODE_24)
#                define POTHOS_PP_NODE_8(p) POTHOS_PP_IIF(p##(8), POTHOS_PP_NODE_4, POTHOS_PP_NODE_12)
#                    define POTHOS_PP_NODE_4(p) POTHOS_PP_IIF(p##(4), POTHOS_PP_NODE_2, POTHOS_PP_NODE_6)
#                        define POTHOS_PP_NODE_2(p) POTHOS_PP_IIF(p##(2), POTHOS_PP_NODE_1, POTHOS_PP_NODE_3)
#                            define POTHOS_PP_NODE_1(p) POTHOS_PP_IIF(p##(1), 1, 2)
#                            define POTHOS_PP_NODE_3(p) POTHOS_PP_IIF(p##(3), 3, 4)
#                        define POTHOS_PP_NODE_6(p) POTHOS_PP_IIF(p##(6), POTHOS_PP_NODE_5, POTHOS_PP_NODE_7)
#                            define POTHOS_PP_NODE_5(p) POTHOS_PP_IIF(p##(5), 5, 6)
#                            define POTHOS_PP_NODE_7(p) POTHOS_PP_IIF(p##(7), 7, 8)
#                    define POTHOS_PP_NODE_12(p) POTHOS_PP_IIF(p##(12), POTHOS_PP_NODE_10, POTHOS_PP_NODE_14)
#                        define POTHOS_PP_NODE_10(p) POTHOS_PP_IIF(p##(10), POTHOS_PP_NODE_9, POTHOS_PP_NODE_11)
#                            define POTHOS_PP_NODE_9(p) POTHOS_PP_IIF(p##(9), 9, 10)
#                            define POTHOS_PP_NODE_11(p) POTHOS_PP_IIF(p##(11), 11, 12)
#                        define POTHOS_PP_NODE_14(p) POTHOS_PP_IIF(p##(14), POTHOS_PP_NODE_13, POTHOS_PP_NODE_15)
#                            define POTHOS_PP_NODE_13(p) POTHOS_PP_IIF(p##(13), 13, 14)
#                            define POTHOS_PP_NODE_15(p) POTHOS_PP_IIF(p##(15), 15, 16)
#                define POTHOS_PP_NODE_24(p) POTHOS_PP_IIF(p##(24), POTHOS_PP_NODE_20, POTHOS_PP_NODE_28)
#                    define POTHOS_PP_NODE_20(p) POTHOS_PP_IIF(p##(20), POTHOS_PP_NODE_18, POTHOS_PP_NODE_22)
#                        define POTHOS_PP_NODE_18(p) POTHOS_PP_IIF(p##(18), POTHOS_PP_NODE_17, POTHOS_PP_NODE_19)
#                            define POTHOS_PP_NODE_17(p) POTHOS_PP_IIF(p##(17), 17, 18)
#                            define POTHOS_PP_NODE_19(p) POTHOS_PP_IIF(p##(19), 19, 20)
#                        define POTHOS_PP_NODE_22(p) POTHOS_PP_IIF(p##(22), POTHOS_PP_NODE_21, POTHOS_PP_NODE_23)
#                            define POTHOS_PP_NODE_21(p) POTHOS_PP_IIF(p##(21), 21, 22)
#                            define POTHOS_PP_NODE_23(p) POTHOS_PP_IIF(p##(23), 23, 24)
#                    define POTHOS_PP_NODE_28(p) POTHOS_PP_IIF(p##(28), POTHOS_PP_NODE_26, POTHOS_PP_NODE_30)
#                        define POTHOS_PP_NODE_26(p) POTHOS_PP_IIF(p##(26), POTHOS_PP_NODE_25, POTHOS_PP_NODE_27)
#                            define POTHOS_PP_NODE_25(p) POTHOS_PP_IIF(p##(25), 25, 26)
#                            define POTHOS_PP_NODE_27(p) POTHOS_PP_IIF(p##(27), 27, 28)
#                        define POTHOS_PP_NODE_30(p) POTHOS_PP_IIF(p##(30), POTHOS_PP_NODE_29, POTHOS_PP_NODE_31)
#                            define POTHOS_PP_NODE_29(p) POTHOS_PP_IIF(p##(29), 29, 30)
#                            define POTHOS_PP_NODE_31(p) POTHOS_PP_IIF(p##(31), 31, 32)
#            define POTHOS_PP_NODE_48(p) POTHOS_PP_IIF(p##(48), POTHOS_PP_NODE_40, POTHOS_PP_NODE_56)
#                define POTHOS_PP_NODE_40(p) POTHOS_PP_IIF(p##(40), POTHOS_PP_NODE_36, POTHOS_PP_NODE_44)
#                    define POTHOS_PP_NODE_36(p) POTHOS_PP_IIF(p##(36), POTHOS_PP_NODE_34, POTHOS_PP_NODE_38)
#                        define POTHOS_PP_NODE_34(p) POTHOS_PP_IIF(p##(34), POTHOS_PP_NODE_33, POTHOS_PP_NODE_35)
#                            define POTHOS_PP_NODE_33(p) POTHOS_PP_IIF(p##(33), 33, 34)
#                            define POTHOS_PP_NODE_35(p) POTHOS_PP_IIF(p##(35), 35, 36)
#                        define POTHOS_PP_NODE_38(p) POTHOS_PP_IIF(p##(38), POTHOS_PP_NODE_37, POTHOS_PP_NODE_39)
#                            define POTHOS_PP_NODE_37(p) POTHOS_PP_IIF(p##(37), 37, 38)
#                            define POTHOS_PP_NODE_39(p) POTHOS_PP_IIF(p##(39), 39, 40)
#                    define POTHOS_PP_NODE_44(p) POTHOS_PP_IIF(p##(44), POTHOS_PP_NODE_42, POTHOS_PP_NODE_46)
#                        define POTHOS_PP_NODE_42(p) POTHOS_PP_IIF(p##(42), POTHOS_PP_NODE_41, POTHOS_PP_NODE_43)
#                            define POTHOS_PP_NODE_41(p) POTHOS_PP_IIF(p##(41), 41, 42)
#                            define POTHOS_PP_NODE_43(p) POTHOS_PP_IIF(p##(43), 43, 44)
#                        define POTHOS_PP_NODE_46(p) POTHOS_PP_IIF(p##(46), POTHOS_PP_NODE_45, POTHOS_PP_NODE_47)
#                            define POTHOS_PP_NODE_45(p) POTHOS_PP_IIF(p##(45), 45, 46)
#                            define POTHOS_PP_NODE_47(p) POTHOS_PP_IIF(p##(47), 47, 48)
#                define POTHOS_PP_NODE_56(p) POTHOS_PP_IIF(p##(56), POTHOS_PP_NODE_52, POTHOS_PP_NODE_60)
#                    define POTHOS_PP_NODE_52(p) POTHOS_PP_IIF(p##(52), POTHOS_PP_NODE_50, POTHOS_PP_NODE_54)
#                        define POTHOS_PP_NODE_50(p) POTHOS_PP_IIF(p##(50), POTHOS_PP_NODE_49, POTHOS_PP_NODE_51)
#                            define POTHOS_PP_NODE_49(p) POTHOS_PP_IIF(p##(49), 49, 50)
#                            define POTHOS_PP_NODE_51(p) POTHOS_PP_IIF(p##(51), 51, 52)
#                        define POTHOS_PP_NODE_54(p) POTHOS_PP_IIF(p##(54), POTHOS_PP_NODE_53, POTHOS_PP_NODE_55)
#                            define POTHOS_PP_NODE_53(p) POTHOS_PP_IIF(p##(53), 53, 54)
#                            define POTHOS_PP_NODE_55(p) POTHOS_PP_IIF(p##(55), 55, 56)
#                    define POTHOS_PP_NODE_60(p) POTHOS_PP_IIF(p##(60), POTHOS_PP_NODE_58, POTHOS_PP_NODE_62)
#                        define POTHOS_PP_NODE_58(p) POTHOS_PP_IIF(p##(58), POTHOS_PP_NODE_57, POTHOS_PP_NODE_59)
#                            define POTHOS_PP_NODE_57(p) POTHOS_PP_IIF(p##(57), 57, 58)
#                            define POTHOS_PP_NODE_59(p) POTHOS_PP_IIF(p##(59), 59, 60)
#                        define POTHOS_PP_NODE_62(p) POTHOS_PP_IIF(p##(62), POTHOS_PP_NODE_61, POTHOS_PP_NODE_63)
#                            define POTHOS_PP_NODE_61(p) POTHOS_PP_IIF(p##(61), 61, 62)
#                            define POTHOS_PP_NODE_63(p) POTHOS_PP_IIF(p##(63), 63, 64)
#        define POTHOS_PP_NODE_96(p) POTHOS_PP_IIF(p##(96), POTHOS_PP_NODE_80, POTHOS_PP_NODE_112)
#            define POTHOS_PP_NODE_80(p) POTHOS_PP_IIF(p##(80), POTHOS_PP_NODE_72, POTHOS_PP_NODE_88)
#                define POTHOS_PP_NODE_72(p) POTHOS_PP_IIF(p##(72), POTHOS_PP_NODE_68, POTHOS_PP_NODE_76)
#                    define POTHOS_PP_NODE_68(p) POTHOS_PP_IIF(p##(68), POTHOS_PP_NODE_66, POTHOS_PP_NODE_70)
#                        define POTHOS_PP_NODE_66(p) POTHOS_PP_IIF(p##(66), POTHOS_PP_NODE_65, POTHOS_PP_NODE_67)
#                            define POTHOS_PP_NODE_65(p) POTHOS_PP_IIF(p##(65), 65, 66)
#                            define POTHOS_PP_NODE_67(p) POTHOS_PP_IIF(p##(67), 67, 68)
#                        define POTHOS_PP_NODE_70(p) POTHOS_PP_IIF(p##(70), POTHOS_PP_NODE_69, POTHOS_PP_NODE_71)
#                            define POTHOS_PP_NODE_69(p) POTHOS_PP_IIF(p##(69), 69, 70)
#                            define POTHOS_PP_NODE_71(p) POTHOS_PP_IIF(p##(71), 71, 72)
#                    define POTHOS_PP_NODE_76(p) POTHOS_PP_IIF(p##(76), POTHOS_PP_NODE_74, POTHOS_PP_NODE_78)
#                        define POTHOS_PP_NODE_74(p) POTHOS_PP_IIF(p##(74), POTHOS_PP_NODE_73, POTHOS_PP_NODE_75)
#                            define POTHOS_PP_NODE_73(p) POTHOS_PP_IIF(p##(73), 73, 74)
#                            define POTHOS_PP_NODE_75(p) POTHOS_PP_IIF(p##(75), 75, 76)
#                        define POTHOS_PP_NODE_78(p) POTHOS_PP_IIF(p##(78), POTHOS_PP_NODE_77, POTHOS_PP_NODE_79)
#                            define POTHOS_PP_NODE_77(p) POTHOS_PP_IIF(p##(77), 77, 78)
#                            define POTHOS_PP_NODE_79(p) POTHOS_PP_IIF(p##(79), 79, 80)
#                define POTHOS_PP_NODE_88(p) POTHOS_PP_IIF(p##(88), POTHOS_PP_NODE_84, POTHOS_PP_NODE_92)
#                    define POTHOS_PP_NODE_84(p) POTHOS_PP_IIF(p##(84), POTHOS_PP_NODE_82, POTHOS_PP_NODE_86)
#                        define POTHOS_PP_NODE_82(p) POTHOS_PP_IIF(p##(82), POTHOS_PP_NODE_81, POTHOS_PP_NODE_83)
#                            define POTHOS_PP_NODE_81(p) POTHOS_PP_IIF(p##(81), 81, 82)
#                            define POTHOS_PP_NODE_83(p) POTHOS_PP_IIF(p##(83), 83, 84)
#                        define POTHOS_PP_NODE_86(p) POTHOS_PP_IIF(p##(86), POTHOS_PP_NODE_85, POTHOS_PP_NODE_87)
#                            define POTHOS_PP_NODE_85(p) POTHOS_PP_IIF(p##(85), 85, 86)
#                            define POTHOS_PP_NODE_87(p) POTHOS_PP_IIF(p##(87), 87, 88)
#                    define POTHOS_PP_NODE_92(p) POTHOS_PP_IIF(p##(92), POTHOS_PP_NODE_90, POTHOS_PP_NODE_94)
#                        define POTHOS_PP_NODE_90(p) POTHOS_PP_IIF(p##(90), POTHOS_PP_NODE_89, POTHOS_PP_NODE_91)
#                            define POTHOS_PP_NODE_89(p) POTHOS_PP_IIF(p##(89), 89, 90)
#                            define POTHOS_PP_NODE_91(p) POTHOS_PP_IIF(p##(91), 91, 92)
#                        define POTHOS_PP_NODE_94(p) POTHOS_PP_IIF(p##(94), POTHOS_PP_NODE_93, POTHOS_PP_NODE_95)
#                            define POTHOS_PP_NODE_93(p) POTHOS_PP_IIF(p##(93), 93, 94)
#                            define POTHOS_PP_NODE_95(p) POTHOS_PP_IIF(p##(95), 95, 96)
#            define POTHOS_PP_NODE_112(p) POTHOS_PP_IIF(p##(112), POTHOS_PP_NODE_104, POTHOS_PP_NODE_120)
#                define POTHOS_PP_NODE_104(p) POTHOS_PP_IIF(p##(104), POTHOS_PP_NODE_100, POTHOS_PP_NODE_108)
#                    define POTHOS_PP_NODE_100(p) POTHOS_PP_IIF(p##(100), POTHOS_PP_NODE_98, POTHOS_PP_NODE_102)
#                        define POTHOS_PP_NODE_98(p) POTHOS_PP_IIF(p##(98), POTHOS_PP_NODE_97, POTHOS_PP_NODE_99)
#                            define POTHOS_PP_NODE_97(p) POTHOS_PP_IIF(p##(97), 97, 98)
#                            define POTHOS_PP_NODE_99(p) POTHOS_PP_IIF(p##(99), 99, 100)
#                        define POTHOS_PP_NODE_102(p) POTHOS_PP_IIF(p##(102), POTHOS_PP_NODE_101, POTHOS_PP_NODE_103)
#                            define POTHOS_PP_NODE_101(p) POTHOS_PP_IIF(p##(101), 101, 102)
#                            define POTHOS_PP_NODE_103(p) POTHOS_PP_IIF(p##(103), 103, 104)
#                    define POTHOS_PP_NODE_108(p) POTHOS_PP_IIF(p##(108), POTHOS_PP_NODE_106, POTHOS_PP_NODE_110)
#                        define POTHOS_PP_NODE_106(p) POTHOS_PP_IIF(p##(106), POTHOS_PP_NODE_105, POTHOS_PP_NODE_107)
#                            define POTHOS_PP_NODE_105(p) POTHOS_PP_IIF(p##(105), 105, 106)
#                            define POTHOS_PP_NODE_107(p) POTHOS_PP_IIF(p##(107), 107, 108)
#                        define POTHOS_PP_NODE_110(p) POTHOS_PP_IIF(p##(110), POTHOS_PP_NODE_109, POTHOS_PP_NODE_111)
#                            define POTHOS_PP_NODE_109(p) POTHOS_PP_IIF(p##(109), 109, 110)
#                            define POTHOS_PP_NODE_111(p) POTHOS_PP_IIF(p##(111), 111, 112)
#                define POTHOS_PP_NODE_120(p) POTHOS_PP_IIF(p##(120), POTHOS_PP_NODE_116, POTHOS_PP_NODE_124)
#                    define POTHOS_PP_NODE_116(p) POTHOS_PP_IIF(p##(116), POTHOS_PP_NODE_114, POTHOS_PP_NODE_118)
#                        define POTHOS_PP_NODE_114(p) POTHOS_PP_IIF(p##(114), POTHOS_PP_NODE_113, POTHOS_PP_NODE_115)
#                            define POTHOS_PP_NODE_113(p) POTHOS_PP_IIF(p##(113), 113, 114)
#                            define POTHOS_PP_NODE_115(p) POTHOS_PP_IIF(p##(115), 115, 116)
#                        define POTHOS_PP_NODE_118(p) POTHOS_PP_IIF(p##(118), POTHOS_PP_NODE_117, POTHOS_PP_NODE_119)
#                            define POTHOS_PP_NODE_117(p) POTHOS_PP_IIF(p##(117), 117, 118)
#                            define POTHOS_PP_NODE_119(p) POTHOS_PP_IIF(p##(119), 119, 120)
#                    define POTHOS_PP_NODE_124(p) POTHOS_PP_IIF(p##(124), POTHOS_PP_NODE_122, POTHOS_PP_NODE_126)
#                        define POTHOS_PP_NODE_122(p) POTHOS_PP_IIF(p##(122), POTHOS_PP_NODE_121, POTHOS_PP_NODE_123)
#                            define POTHOS_PP_NODE_121(p) POTHOS_PP_IIF(p##(121), 121, 122)
#                            define POTHOS_PP_NODE_123(p) POTHOS_PP_IIF(p##(123), 123, 124)
#                        define POTHOS_PP_NODE_126(p) POTHOS_PP_IIF(p##(126), POTHOS_PP_NODE_125, POTHOS_PP_NODE_127)
#                            define POTHOS_PP_NODE_125(p) POTHOS_PP_IIF(p##(125), 125, 126)
#                            define POTHOS_PP_NODE_127(p) POTHOS_PP_IIF(p##(127), 127, 128)
#    define POTHOS_PP_NODE_192(p) POTHOS_PP_IIF(p##(192), POTHOS_PP_NODE_160, POTHOS_PP_NODE_224)
#        define POTHOS_PP_NODE_160(p) POTHOS_PP_IIF(p##(160), POTHOS_PP_NODE_144, POTHOS_PP_NODE_176)
#            define POTHOS_PP_NODE_144(p) POTHOS_PP_IIF(p##(144), POTHOS_PP_NODE_136, POTHOS_PP_NODE_152)
#                define POTHOS_PP_NODE_136(p) POTHOS_PP_IIF(p##(136), POTHOS_PP_NODE_132, POTHOS_PP_NODE_140)
#                    define POTHOS_PP_NODE_132(p) POTHOS_PP_IIF(p##(132), POTHOS_PP_NODE_130, POTHOS_PP_NODE_134)
#                        define POTHOS_PP_NODE_130(p) POTHOS_PP_IIF(p##(130), POTHOS_PP_NODE_129, POTHOS_PP_NODE_131)
#                            define POTHOS_PP_NODE_129(p) POTHOS_PP_IIF(p##(129), 129, 130)
#                            define POTHOS_PP_NODE_131(p) POTHOS_PP_IIF(p##(131), 131, 132)
#                        define POTHOS_PP_NODE_134(p) POTHOS_PP_IIF(p##(134), POTHOS_PP_NODE_133, POTHOS_PP_NODE_135)
#                            define POTHOS_PP_NODE_133(p) POTHOS_PP_IIF(p##(133), 133, 134)
#                            define POTHOS_PP_NODE_135(p) POTHOS_PP_IIF(p##(135), 135, 136)
#                    define POTHOS_PP_NODE_140(p) POTHOS_PP_IIF(p##(140), POTHOS_PP_NODE_138, POTHOS_PP_NODE_142)
#                        define POTHOS_PP_NODE_138(p) POTHOS_PP_IIF(p##(138), POTHOS_PP_NODE_137, POTHOS_PP_NODE_139)
#                            define POTHOS_PP_NODE_137(p) POTHOS_PP_IIF(p##(137), 137, 138)
#                            define POTHOS_PP_NODE_139(p) POTHOS_PP_IIF(p##(139), 139, 140)
#                        define POTHOS_PP_NODE_142(p) POTHOS_PP_IIF(p##(142), POTHOS_PP_NODE_141, POTHOS_PP_NODE_143)
#                            define POTHOS_PP_NODE_141(p) POTHOS_PP_IIF(p##(141), 141, 142)
#                            define POTHOS_PP_NODE_143(p) POTHOS_PP_IIF(p##(143), 143, 144)
#                define POTHOS_PP_NODE_152(p) POTHOS_PP_IIF(p##(152), POTHOS_PP_NODE_148, POTHOS_PP_NODE_156)
#                    define POTHOS_PP_NODE_148(p) POTHOS_PP_IIF(p##(148), POTHOS_PP_NODE_146, POTHOS_PP_NODE_150)
#                        define POTHOS_PP_NODE_146(p) POTHOS_PP_IIF(p##(146), POTHOS_PP_NODE_145, POTHOS_PP_NODE_147)
#                            define POTHOS_PP_NODE_145(p) POTHOS_PP_IIF(p##(145), 145, 146)
#                            define POTHOS_PP_NODE_147(p) POTHOS_PP_IIF(p##(147), 147, 148)
#                        define POTHOS_PP_NODE_150(p) POTHOS_PP_IIF(p##(150), POTHOS_PP_NODE_149, POTHOS_PP_NODE_151)
#                            define POTHOS_PP_NODE_149(p) POTHOS_PP_IIF(p##(149), 149, 150)
#                            define POTHOS_PP_NODE_151(p) POTHOS_PP_IIF(p##(151), 151, 152)
#                    define POTHOS_PP_NODE_156(p) POTHOS_PP_IIF(p##(156), POTHOS_PP_NODE_154, POTHOS_PP_NODE_158)
#                        define POTHOS_PP_NODE_154(p) POTHOS_PP_IIF(p##(154), POTHOS_PP_NODE_153, POTHOS_PP_NODE_155)
#                            define POTHOS_PP_NODE_153(p) POTHOS_PP_IIF(p##(153), 153, 154)
#                            define POTHOS_PP_NODE_155(p) POTHOS_PP_IIF(p##(155), 155, 156)
#                        define POTHOS_PP_NODE_158(p) POTHOS_PP_IIF(p##(158), POTHOS_PP_NODE_157, POTHOS_PP_NODE_159)
#                            define POTHOS_PP_NODE_157(p) POTHOS_PP_IIF(p##(157), 157, 158)
#                            define POTHOS_PP_NODE_159(p) POTHOS_PP_IIF(p##(159), 159, 160)
#            define POTHOS_PP_NODE_176(p) POTHOS_PP_IIF(p##(176), POTHOS_PP_NODE_168, POTHOS_PP_NODE_184)
#                define POTHOS_PP_NODE_168(p) POTHOS_PP_IIF(p##(168), POTHOS_PP_NODE_164, POTHOS_PP_NODE_172)
#                    define POTHOS_PP_NODE_164(p) POTHOS_PP_IIF(p##(164), POTHOS_PP_NODE_162, POTHOS_PP_NODE_166)
#                        define POTHOS_PP_NODE_162(p) POTHOS_PP_IIF(p##(162), POTHOS_PP_NODE_161, POTHOS_PP_NODE_163)
#                            define POTHOS_PP_NODE_161(p) POTHOS_PP_IIF(p##(161), 161, 162)
#                            define POTHOS_PP_NODE_163(p) POTHOS_PP_IIF(p##(163), 163, 164)
#                        define POTHOS_PP_NODE_166(p) POTHOS_PP_IIF(p##(166), POTHOS_PP_NODE_165, POTHOS_PP_NODE_167)
#                            define POTHOS_PP_NODE_165(p) POTHOS_PP_IIF(p##(165), 165, 166)
#                            define POTHOS_PP_NODE_167(p) POTHOS_PP_IIF(p##(167), 167, 168)
#                    define POTHOS_PP_NODE_172(p) POTHOS_PP_IIF(p##(172), POTHOS_PP_NODE_170, POTHOS_PP_NODE_174)
#                        define POTHOS_PP_NODE_170(p) POTHOS_PP_IIF(p##(170), POTHOS_PP_NODE_169, POTHOS_PP_NODE_171)
#                            define POTHOS_PP_NODE_169(p) POTHOS_PP_IIF(p##(169), 169, 170)
#                            define POTHOS_PP_NODE_171(p) POTHOS_PP_IIF(p##(171), 171, 172)
#                        define POTHOS_PP_NODE_174(p) POTHOS_PP_IIF(p##(174), POTHOS_PP_NODE_173, POTHOS_PP_NODE_175)
#                            define POTHOS_PP_NODE_173(p) POTHOS_PP_IIF(p##(173), 173, 174)
#                            define POTHOS_PP_NODE_175(p) POTHOS_PP_IIF(p##(175), 175, 176)
#                define POTHOS_PP_NODE_184(p) POTHOS_PP_IIF(p##(184), POTHOS_PP_NODE_180, POTHOS_PP_NODE_188)
#                    define POTHOS_PP_NODE_180(p) POTHOS_PP_IIF(p##(180), POTHOS_PP_NODE_178, POTHOS_PP_NODE_182)
#                        define POTHOS_PP_NODE_178(p) POTHOS_PP_IIF(p##(178), POTHOS_PP_NODE_177, POTHOS_PP_NODE_179)
#                            define POTHOS_PP_NODE_177(p) POTHOS_PP_IIF(p##(177), 177, 178)
#                            define POTHOS_PP_NODE_179(p) POTHOS_PP_IIF(p##(179), 179, 180)
#                        define POTHOS_PP_NODE_182(p) POTHOS_PP_IIF(p##(182), POTHOS_PP_NODE_181, POTHOS_PP_NODE_183)
#                            define POTHOS_PP_NODE_181(p) POTHOS_PP_IIF(p##(181), 181, 182)
#                            define POTHOS_PP_NODE_183(p) POTHOS_PP_IIF(p##(183), 183, 184)
#                    define POTHOS_PP_NODE_188(p) POTHOS_PP_IIF(p##(188), POTHOS_PP_NODE_186, POTHOS_PP_NODE_190)
#                        define POTHOS_PP_NODE_186(p) POTHOS_PP_IIF(p##(186), POTHOS_PP_NODE_185, POTHOS_PP_NODE_187)
#                            define POTHOS_PP_NODE_185(p) POTHOS_PP_IIF(p##(185), 185, 186)
#                            define POTHOS_PP_NODE_187(p) POTHOS_PP_IIF(p##(187), 187, 188)
#                        define POTHOS_PP_NODE_190(p) POTHOS_PP_IIF(p##(190), POTHOS_PP_NODE_189, POTHOS_PP_NODE_191)
#                            define POTHOS_PP_NODE_189(p) POTHOS_PP_IIF(p##(189), 189, 190)
#                            define POTHOS_PP_NODE_191(p) POTHOS_PP_IIF(p##(191), 191, 192)
#        define POTHOS_PP_NODE_224(p) POTHOS_PP_IIF(p##(224), POTHOS_PP_NODE_208, POTHOS_PP_NODE_240)
#            define POTHOS_PP_NODE_208(p) POTHOS_PP_IIF(p##(208), POTHOS_PP_NODE_200, POTHOS_PP_NODE_216)
#                define POTHOS_PP_NODE_200(p) POTHOS_PP_IIF(p##(200), POTHOS_PP_NODE_196, POTHOS_PP_NODE_204)
#                    define POTHOS_PP_NODE_196(p) POTHOS_PP_IIF(p##(196), POTHOS_PP_NODE_194, POTHOS_PP_NODE_198)
#                        define POTHOS_PP_NODE_194(p) POTHOS_PP_IIF(p##(194), POTHOS_PP_NODE_193, POTHOS_PP_NODE_195)
#                            define POTHOS_PP_NODE_193(p) POTHOS_PP_IIF(p##(193), 193, 194)
#                            define POTHOS_PP_NODE_195(p) POTHOS_PP_IIF(p##(195), 195, 196)
#                        define POTHOS_PP_NODE_198(p) POTHOS_PP_IIF(p##(198), POTHOS_PP_NODE_197, POTHOS_PP_NODE_199)
#                            define POTHOS_PP_NODE_197(p) POTHOS_PP_IIF(p##(197), 197, 198)
#                            define POTHOS_PP_NODE_199(p) POTHOS_PP_IIF(p##(199), 199, 200)
#                    define POTHOS_PP_NODE_204(p) POTHOS_PP_IIF(p##(204), POTHOS_PP_NODE_202, POTHOS_PP_NODE_206)
#                        define POTHOS_PP_NODE_202(p) POTHOS_PP_IIF(p##(202), POTHOS_PP_NODE_201, POTHOS_PP_NODE_203)
#                            define POTHOS_PP_NODE_201(p) POTHOS_PP_IIF(p##(201), 201, 202)
#                            define POTHOS_PP_NODE_203(p) POTHOS_PP_IIF(p##(203), 203, 204)
#                        define POTHOS_PP_NODE_206(p) POTHOS_PP_IIF(p##(206), POTHOS_PP_NODE_205, POTHOS_PP_NODE_207)
#                            define POTHOS_PP_NODE_205(p) POTHOS_PP_IIF(p##(205), 205, 206)
#                            define POTHOS_PP_NODE_207(p) POTHOS_PP_IIF(p##(207), 207, 208)
#                define POTHOS_PP_NODE_216(p) POTHOS_PP_IIF(p##(216), POTHOS_PP_NODE_212, POTHOS_PP_NODE_220)
#                    define POTHOS_PP_NODE_212(p) POTHOS_PP_IIF(p##(212), POTHOS_PP_NODE_210, POTHOS_PP_NODE_214)
#                        define POTHOS_PP_NODE_210(p) POTHOS_PP_IIF(p##(210), POTHOS_PP_NODE_209, POTHOS_PP_NODE_211)
#                            define POTHOS_PP_NODE_209(p) POTHOS_PP_IIF(p##(209), 209, 210)
#                            define POTHOS_PP_NODE_211(p) POTHOS_PP_IIF(p##(211), 211, 212)
#                        define POTHOS_PP_NODE_214(p) POTHOS_PP_IIF(p##(214), POTHOS_PP_NODE_213, POTHOS_PP_NODE_215)
#                            define POTHOS_PP_NODE_213(p) POTHOS_PP_IIF(p##(213), 213, 214)
#                            define POTHOS_PP_NODE_215(p) POTHOS_PP_IIF(p##(215), 215, 216)
#                    define POTHOS_PP_NODE_220(p) POTHOS_PP_IIF(p##(220), POTHOS_PP_NODE_218, POTHOS_PP_NODE_222)
#                        define POTHOS_PP_NODE_218(p) POTHOS_PP_IIF(p##(218), POTHOS_PP_NODE_217, POTHOS_PP_NODE_219)
#                            define POTHOS_PP_NODE_217(p) POTHOS_PP_IIF(p##(217), 217, 218)
#                            define POTHOS_PP_NODE_219(p) POTHOS_PP_IIF(p##(219), 219, 220)
#                        define POTHOS_PP_NODE_222(p) POTHOS_PP_IIF(p##(222), POTHOS_PP_NODE_221, POTHOS_PP_NODE_223)
#                            define POTHOS_PP_NODE_221(p) POTHOS_PP_IIF(p##(221), 221, 222)
#                            define POTHOS_PP_NODE_223(p) POTHOS_PP_IIF(p##(223), 223, 224)
#            define POTHOS_PP_NODE_240(p) POTHOS_PP_IIF(p##(240), POTHOS_PP_NODE_232, POTHOS_PP_NODE_248)
#                define POTHOS_PP_NODE_232(p) POTHOS_PP_IIF(p##(232), POTHOS_PP_NODE_228, POTHOS_PP_NODE_236)
#                    define POTHOS_PP_NODE_228(p) POTHOS_PP_IIF(p##(228), POTHOS_PP_NODE_226, POTHOS_PP_NODE_230)
#                        define POTHOS_PP_NODE_226(p) POTHOS_PP_IIF(p##(226), POTHOS_PP_NODE_225, POTHOS_PP_NODE_227)
#                            define POTHOS_PP_NODE_225(p) POTHOS_PP_IIF(p##(225), 225, 226)
#                            define POTHOS_PP_NODE_227(p) POTHOS_PP_IIF(p##(227), 227, 228)
#                        define POTHOS_PP_NODE_230(p) POTHOS_PP_IIF(p##(230), POTHOS_PP_NODE_229, POTHOS_PP_NODE_231)
#                            define POTHOS_PP_NODE_229(p) POTHOS_PP_IIF(p##(229), 229, 230)
#                            define POTHOS_PP_NODE_231(p) POTHOS_PP_IIF(p##(231), 231, 232)
#                    define POTHOS_PP_NODE_236(p) POTHOS_PP_IIF(p##(236), POTHOS_PP_NODE_234, POTHOS_PP_NODE_238)
#                        define POTHOS_PP_NODE_234(p) POTHOS_PP_IIF(p##(234), POTHOS_PP_NODE_233, POTHOS_PP_NODE_235)
#                            define POTHOS_PP_NODE_233(p) POTHOS_PP_IIF(p##(233), 233, 234)
#                            define POTHOS_PP_NODE_235(p) POTHOS_PP_IIF(p##(235), 235, 236)
#                        define POTHOS_PP_NODE_238(p) POTHOS_PP_IIF(p##(238), POTHOS_PP_NODE_237, POTHOS_PP_NODE_239)
#                            define POTHOS_PP_NODE_237(p) POTHOS_PP_IIF(p##(237), 237, 238)
#                            define POTHOS_PP_NODE_239(p) POTHOS_PP_IIF(p##(239), 239, 240)
#                define POTHOS_PP_NODE_248(p) POTHOS_PP_IIF(p##(248), POTHOS_PP_NODE_244, POTHOS_PP_NODE_252)
#                    define POTHOS_PP_NODE_244(p) POTHOS_PP_IIF(p##(244), POTHOS_PP_NODE_242, POTHOS_PP_NODE_246)
#                        define POTHOS_PP_NODE_242(p) POTHOS_PP_IIF(p##(242), POTHOS_PP_NODE_241, POTHOS_PP_NODE_243)
#                            define POTHOS_PP_NODE_241(p) POTHOS_PP_IIF(p##(241), 241, 242)
#                            define POTHOS_PP_NODE_243(p) POTHOS_PP_IIF(p##(243), 243, 244)
#                        define POTHOS_PP_NODE_246(p) POTHOS_PP_IIF(p##(246), POTHOS_PP_NODE_245, POTHOS_PP_NODE_247)
#                            define POTHOS_PP_NODE_245(p) POTHOS_PP_IIF(p##(245), 245, 246)
#                            define POTHOS_PP_NODE_247(p) POTHOS_PP_IIF(p##(247), 247, 248)
#                    define POTHOS_PP_NODE_252(p) POTHOS_PP_IIF(p##(252), POTHOS_PP_NODE_250, POTHOS_PP_NODE_254)
#                        define POTHOS_PP_NODE_250(p) POTHOS_PP_IIF(p##(250), POTHOS_PP_NODE_249, POTHOS_PP_NODE_251)
#                            define POTHOS_PP_NODE_249(p) POTHOS_PP_IIF(p##(249), 249, 250)
#                            define POTHOS_PP_NODE_251(p) POTHOS_PP_IIF(p##(251), 251, 252)
#                        define POTHOS_PP_NODE_254(p) POTHOS_PP_IIF(p##(254), POTHOS_PP_NODE_253, POTHOS_PP_NODE_255)
#                            define POTHOS_PP_NODE_253(p) POTHOS_PP_IIF(p##(253), 253, 254)
#                            define POTHOS_PP_NODE_255(p) POTHOS_PP_IIF(p##(255), 255, 256)
#
# endif