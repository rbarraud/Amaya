/* Definitions for compiler of language TRANS */

/*  SHORT KEY-WORDS  */

#define CHR_59 	1001
#define CHR_61 	1002
#define CHR_58 	1003
#define CHR_45 	1004
#define CHR_40 	1005
#define CHR_41 	1006
#define CHR_44 	1007
#define CHR_62 	1008
#define CHR_60 	1009
#define CHR_91 	1010
#define CHR_46 	1011
#define CHR_93 	1012
#define CHR_42 	1013
#define CHR_43 	1014

/*  LONG KEY-WORDS  */

#define KWD_Translation 	1101
#define KWD_LineLength 	1102
#define KWD_LineEnd 	1103
#define KWD_LineEndInsert 	1104
#define KWD_Buffers 	1105
#define KWD_Counters 	1106
#define KWD_Const 	1107
#define KWD_Var 	1108
#define KWD_Rules 	1109
#define KWD_Attributes 	1110
#define KWD_Presentation 	1111
#define KWD_TextTranslate 	1112
#define KWD_SymbTranslate 	1113
#define KWD_GraphTranslate 	1114
#define KWD_End 	1115
#define KWD_Rank 	1116
#define KWD_of 	1117
#define KWD_Init 	1118
#define KWD_Rlevel 	1119
#define KWD_Set 	1120
#define KWD_On 	1121
#define KWD_Add 	1122
#define KWD_Picture 	1123
#define KWD_Variable 	1124
#define KWD_Value 	1125
#define KWD_FileDir 	1126
#define KWD_FileName 	1127
#define KWD_Extension 	1128
#define KWD_DocumentName 	1129
#define KWD_DocumentDir 	1130
#define KWD_ARABIC 	1131
#define KWD_UROMAN 	1132
#define KWD_LROMAN 	1133
#define KWD_UPPERCASE 	1134
#define KWD_LOWERCASE 	1135
#define KWD_IN 	1136
#define KWD_First 	1137
#define KWD_Second 	1138
#define KWD_Begin 	1139
#define KWD_If 	1140
#define KWD_And 	1141
#define KWD_Not 	1142
#define KWD_Target 	1143
#define KWD_FirstRef 	1144
#define KWD_LastRef 	1145
#define KWD_ExternalRef 	1146
#define KWD_Script 	1147
#define KWD_FirstAttr 	1148
#define KWD_LastAttr 	1149
#define KWD_ComputedPage 	1150
#define KWD_StartPage 	1151
#define KWD_UserPage 	1152
#define KWD_ReminderPage 	1153
#define KWD_Empty 	1154
#define KWD_Root 	1155
#define KWD_Transclusion 	1156
#define KWD_Parent 	1157
#define KWD_Ancestor 	1158
#define KWD_Last 	1159
#define KWD_Refered 	1160
#define KWD_Referred 	1161
#define KWD_Immediately 	1162
#define KWD_Within 	1163
#define KWD_FirstWithin 	1164
#define KWD_Create 	1165
#define KWD_Get 	1166
#define KWD_Copy 	1167
#define KWD_Use 	1168
#define KWD_For 	1169
#define KWD_Remove 	1170
#define KWD_Ignore 	1171
#define KWD_Write 	1172
#define KWD_Read 	1173
#define KWD_Include 	1174
#define KWD_NoTranslation 	1175
#define KWD_NoLineBreak 	1176
#define KWD_ChangeMainFile 	1177
#define KWD_Indent 	1178
#define KWD_RemoveFile 	1179
#define KWD_Suspend 	1180
#define KWD_Resume 	1181
#define KWD_Translated 	1182
#define KWD_Content 	1183
#define KWD_RefId 	1184
#define KWD_PairId 	1185
#define KWD_After 	1186
#define KWD_Before 	1187
#define KWD_Included 	1188
#define KWD_Size 	1189
#define KWD_LineSpacing 	1190
#define KWD_Adjust 	1191
#define KWD_Hyphenate 	1192
#define KWD_Style 	1193
#define KWD_Weight 	1194
#define KWD_Font 	1195
#define KWD_UnderLine 	1196
#define KWD_Thickness 	1197
#define KWD_LineStyle 	1198
#define KWD_LineWeight 	1199
#define KWD_FillPattern 	1200
#define KWD_Background 	1201
#define KWD_Foreground 	1202
#define KWD_Left 	1203
#define KWD_Right 	1204
#define KWD_VMiddle 	1205
#define KWD_LeftWithDots 	1206
#define KWD_Justify 	1207
#define KWD_Yes 	1208
#define KWD_No 	1209
#define KWD_Roman 	1210
#define KWD_Italics 	1211
#define KWD_Oblique 	1212
#define KWD_Normal 	1213
#define KWD_Bold 	1214
#define KWD_Times 	1215
#define KWD_Helvetica 	1216
#define KWD_Courier 	1217
#define KWD_NoUnderline 	1218
#define KWD_Underlined 	1219
#define KWD_Overlined 	1220
#define KWD_CrossedOut 	1221
#define KWD_OverLine 	1222
#define KWD_StrikeOut 	1223
#define KWD_Thick 	1224
#define KWD_Thin 	1225
#define KWD_Solid 	1226
#define KWD_Dashed 	1227
#define KWD_Dotted 	1228

/*  RULES  */

#define RULE_TransSchema 	   1
#define RULE_TypeIdent 	   2
#define RULE_MaxLineLength 	   3
#define RULE_LineEndString 	   4
#define RULE_LineEndInsertString 	   5
#define RULE_SeqOfBuffer 	   6
#define RULE_SeqOfCounter 	   7
#define RULE_SeqOfConst 	   8
#define RULE_SeqOfVariable 	   9
#define RULE_TheRules 	  10
#define RULE_SeqOfAttr 	  11
#define RULE_SeqOfPres 	  12
#define RULE_TSeqOfTransl 	  13
#define RULE_SeqOfTransl 	  14
#define RULE_ConstDcl 	  15
#define RULE_ConstIdent 	  16
#define RULE_ConstValue 	  17
#define RULE_CounterDcl 	  18
#define RULE_CounterIdent 	  19
#define RULE_CountFunction 	  20
#define RULE_RelAncestorLevel 	  21
#define RULE_AttrIdent 	  22
#define RULE_InitValue 	  23
#define RULE_IncrValue 	  24
#define RULE_AncestorLevel 	  25
#define RULE_BufferDcl 	  26
#define RULE_BufferIdent 	  27
#define RULE_BufferType 	  28
#define RULE_VariableDcl 	  29
#define RULE_VariableIdent 	  30
#define RULE_Function 	  31
#define RULE_Length 	  32
#define RULE_CounterStyle 	  33
#define RULE_CharString 	  34
#define RULE_TransAttr 	  35
#define RULE_AttrRelat 	  36
#define RULE_SeqOfRules 	  37
#define RULE_AttrValue 	  38
#define RULE_MinVal 	  39
#define RULE_MaxVal 	  40
#define RULE_MinInterval 	  41
#define RULE_MaxInterval 	  42
#define RULE_ValEqual 	  43
#define RULE_TextEqual 	  44
#define RULE_AttrValIdent 	  45
#define RULE_TransType 	  46
#define RULE_FirstSec 	  47
#define RULE_CondRules 	  48
#define RULE_Rule1 	  49
#define RULE_Rule2 	  50
#define RULE_SeqOfCond 	  51
#define RULE_SeqOfRules1 	  52
#define RULE_Condition 	  53
#define RULE_Cond 	  54
#define RULE_CondOnSelf 	  55
#define RULE_CondAscend 	  56
#define RULE_Script 	  57
#define RULE_Ascend 	  58
#define RULE_CondOnAscend 	  59
#define RULE_LevelOrType 	  60
#define RULE_CondRelLevel 	  61
#define RULE_ParentLevel 	  62
#define RULE_PresRule 	  63
#define RULE_GreaterLess 	  64
#define RULE_RelLevel 	  65
#define RULE_TrSchema 	  66
#define RULE_RuleA 	  67
#define RULE_RuleB 	  68
#define RULE_Token 	  69
#define RULE_Position 	  70
#define RULE_RelPosition 	  71
#define RULE_File 	  72
#define RULE_Indent 	  73
#define RULE_IndentSign 	  74
#define RULE_IndentVal 	  75
#define RULE_VarOrType 	  76
#define RULE_FileName 	  77
#define RULE_Translation 	  78
#define RULE_Source 	  79
#define RULE_Target 	  80
#define RULE_TransPres 	  81
#define RULE_PresRelat 	  82
#define RULE_AdjustVal 	  83
#define RULE_BooleanVal 	  84
#define RULE_StyleVal 	  85
#define RULE_WeightVal 	  86
#define RULE_FontVal 	  87
#define RULE_UnderLineVal 	  88
#define RULE_UnderLStyleVal 	  89
#define RULE_LineStyleVal 	  90
#define RULE_Pattern 	  91
#define RULE_Color 	  92
#define RULE_PresValue 	  93
#define RULE_MinimumPres 	  94
#define RULE_MaximumPres 	  95
#define RULE_MinIntervalPres 	  96
#define RULE_MaxIntervalPres 	  97
#define RULE_PresVal 	  98
