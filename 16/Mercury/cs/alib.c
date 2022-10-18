/*
** Automatically generated from `alib.m'
** by the Mercury compiler,
** version 22.01-focal1
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=3
** UNBOXED_FLOAT=yes
** UNBOXED_INT64S=yes
** PREGENERATED_DIST=no
** HIGHLEVEL_CODE=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__alib__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#include "mercury_trace_base.h"
#line 29 "Mercury/cs/alib.c"
#include "alib.mh"

#line 32 "Mercury/cs/alib.c"
#line 33 "Mercury/cs/alib.c"
#include "array.mh"

#line 36 "Mercury/cs/alib.c"
#line 37 "Mercury/cs/alib.c"
#include "bitmap.mh"

#line 40 "Mercury/cs/alib.c"
#line 41 "Mercury/cs/alib.c"
#include "io.mh"

#line 44 "Mercury/cs/alib.c"
#line 45 "Mercury/cs/alib.c"
#include "string.mh"

#line 48 "Mercury/cs/alib.c"
#line 49 "Mercury/cs/alib.c"
#include "table_builtin.mh"

#line 52 "Mercury/cs/alib.c"
#line 53 "Mercury/cs/alib.c"
#include "time.mh"

#line 56 "Mercury/cs/alib.c"
#line 57 "Mercury/cs/alib.c"
#ifndef ALIB_DECL_GUARD
#define ALIB_DECL_GUARD

#line 61 "Mercury/cs/alib.c"
#line 62 "Mercury/cs/alib.c"

#endif
#line 65 "Mercury/cs/alib.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1;
	MR_Integer f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Unsigned f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
	MR_Integer f6;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_alib__type_ctor_info_ch_0,
	mercury_data_alib__type_ctor_info_cl_0;
MR_decl_label5(alib__l_3_0, 2,3,4,6,7)
MR_decl_label6(alib__rlines_4_0, 2,3,6,7,8,9)
MR_decl_label7(alib__seq_3_0, 3,6,7,9,4,11,12)
MR_decl_label9(alib__transpose_2_0, 2,5,8,9,11,14,16,17,19)
MR_decl_label3(__Unify___alib__ch_0_0, 2,4,5)
MR_decl_label4(__Unify___alib__cl_0_0, 2,3,5,6)
MR_decl_label3(__Compare___alib__ch_0_0, 2,3,4)
MR_decl_label3(__Compare___alib__cl_0_0, 2,3,4)
MR_def_extern_entry(alib__transpose_2_0)
MR_def_extern_entry(alib__seq_3_0)
MR_def_extern_entry(alib__rlines_4_0)
MR_def_extern_entry(alib__l_3_0)
MR_def_extern_entry(__Unify___alib__ch_0_0)
MR_def_extern_entry(__Compare___alib__ch_0_0)
MR_def_extern_entry(__Unify___alib__cl_0_0)
MR_def_extern_entry(__Compare___alib__cl_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_res_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_0 mercury_common_0[6] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(io, res),
MR_COMMON(0,2)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_LIST_CTOR_ADDR,
1
},
};

static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
1,
33
}
},
{
{
1,
291
}
},
{
{
1,
293
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__alib__transpose_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__alib__transpose_2_0_1,
MR_COMMON(2,0),
3,
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(1,0),
1
},
};

static const MR_UserClosureId
mercury_data__closure_layout__alib__transpose_2_0_2;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__alib__transpose_2_0_2,
MR_COMMON(2,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(1,0),
MR_COMMON(1,0)
}
},
};

const MR_TypeCtorInfo_Struct mercury_data_alib__type_ctor_info_ch_0 = {
	0,
	18,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___alib__ch_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___alib__ch_0_0)),
	"alib",
	"ch",
	{ 0 },
	{ (void *) &mercury_data_builtin__type_ctor_info_character_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_character_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_character_0
}};

const MR_TypeCtorInfo_Struct mercury_data_alib__type_ctor_info_cl_0 = {
	0,
	18,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___alib__cl_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___alib__cl_0_0)),
	"alib",
	"cl",
	{ 0 },
	{ (void *) &mercury_data_list__ti_list_1builtin__type_ctor_info_character_0 },
	-1,
	0,
	NULL
};

MR_STATIC_LINKAGE const MR_PseudoTypeInfo mercury_data__pseudo_type_info_array__alib[];
MR_STATIC_LINKAGE const MR_HLDSVarNum mercury_data__hlds_var_nums_array__alib[];
MR_STATIC_LINKAGE const MR_ShortLval mercury_data__short_locns_array__alib[];
MR_STATIC_LINKAGE const MR_LabelLayoutShort mercury_data__svar_label_layout_array__alib[];
MR_STATIC_LINKAGE const MR_uint_least16_t mercury_data__proc_head_var_nums_array__alib[];
MR_STATIC_LINKAGE const MR_uint_least32_t mercury_data__proc_var_names_array__alib[];
MR_STATIC_LINKAGE const MR_uint_least8_t mercury_data__proc_body_bytecodes_array__alib[];
MR_STATIC_LINKAGE MR_STATIC_CODE_CONST MR_ExecTrace mercury_data__proc_exec_traces_array__alib[];
MR_STATIC_LINKAGE const MR_LabelLayout *mercury_data__proc_event_layouts_array__alib[];
static const MR_ModuleLayout mercury_data__module_layout__alib;

const MR_ProcLayoutUser mercury_data__proc_layout__mercury__alib__transpose_2_0 = {
{
MR_ENTRY_AP(alib__transpose_2_0), 387,
12,
MR_DETISM_CCMULTI
},
{
MR_PREDICATE,
"alib",
"alib",
"transpose",
2,
0
},
&MR_proc_exec_traces(alib)[0],
NULL,
&MR_proc_body_bytecodes(alib)[0],
&mercury_data__module_layout__alib
};

const MR_ProcLayoutUser mercury_data__proc_layout__mercury__alib__seq_3_0 = {
{
MR_ENTRY_AP(alib__seq_3_0), -1,
9,
MR_DETISM_MULTI
},
{
MR_PREDICATE,
"alib",
"alib",
"seq",
3,
0
},
&MR_proc_exec_traces(alib)[1],
NULL,
&MR_proc_body_bytecodes(alib)[403],
&mercury_data__module_layout__alib
};

const MR_ProcLayoutUser mercury_data__proc_layout__mercury__alib__rlines_4_0 = {
{
MR_ENTRY_AP(alib__rlines_4_0), 291,
9,
MR_DETISM_DET
},
{
MR_PREDICATE,
"alib",
"alib",
"rlines",
4,
0
},
&MR_proc_exec_traces(alib)[2],
NULL,
&MR_proc_body_bytecodes(alib)[590],
&mercury_data__module_layout__alib
};

const MR_ProcLayoutUser mercury_data__proc_layout__mercury__alib__l_3_0 = {
{
MR_ENTRY_AP(alib__l_3_0), 291,
9,
MR_DETISM_SEMI
},
{
MR_PREDICATE,
"alib",
"alib",
"l",
3,
0
},
&MR_proc_exec_traces(alib)[3],
NULL,
&MR_proc_body_bytecodes(alib)[840],
&mercury_data__module_layout__alib
};

const MR_ProcLayoutUCI mercury_data__proc_layout__mercury____Unify___alib__ch_0_0 = {
{
MR_ENTRY_AP(__Unify___alib__ch_0_0), 259,
8,
MR_DETISM_SEMI
},
{
"ch",
"alib",
"alib",
"__Unify__",
0,
0
},
&MR_proc_exec_traces(alib)[4],
NULL,
NULL,
&mercury_data__module_layout__alib
};

const MR_ProcLayoutUCI mercury_data__proc_layout__mercury____Compare___alib__ch_0_0 = {
{
MR_ENTRY_AP(__Compare___alib__ch_0_0), 259,
8,
MR_DETISM_DET
},
{
"ch",
"alib",
"alib",
"__Compare__",
0,
0
},
&MR_proc_exec_traces(alib)[5],
NULL,
NULL,
&mercury_data__module_layout__alib
};

const MR_ProcLayoutUCI mercury_data__proc_layout__mercury____Unify___alib__cl_0_0 = {
{
MR_ENTRY_AP(__Unify___alib__cl_0_0), 259,
8,
MR_DETISM_SEMI
},
{
"cl",
"alib",
"alib",
"__Unify__",
0,
0
},
&MR_proc_exec_traces(alib)[6],
NULL,
NULL,
&mercury_data__module_layout__alib
};

const MR_ProcLayoutUCI mercury_data__proc_layout__mercury____Compare___alib__cl_0_0 = {
{
MR_ENTRY_AP(__Compare___alib__cl_0_0), 259,
8,
MR_DETISM_DET
},
{
"cl",
"alib",
"alib",
"__Compare__",
0,
0
},
&MR_proc_exec_traces(alib)[7],
NULL,
NULL,
&mercury_data__module_layout__alib
};

static const char mercury_data__module_strings__alib[] = {'\0',
'<', 't', 'o', 'o', ' ', 'm', 'a', 'n', 'y', ' ', 'v', 
'a', 'r', 'i', 'a', 'b', 'l', 'e', 's', '>', '\0',
'd', '1', ';', '\0',
'd', '1', ';', 's', '1', '-', '2', ';', '\0',
'd', '1', ';', 's', '2', '-', '2', ';', '\0',
'd', '2', ';', '\0',
'd', '2', ';', 'c', '5', ';', '\0',
'd', '2', ';', 'c', '7', ';', '\0',
'd', '2', ';', 'c', '8', ';', '\0',
'H', 'e', 'a', 'd', 'V', 'a', 'r', '_', '_', '1', '\0',
'H', 'e', 'a', 'd', 'V', 'a', 'r', '_', '_', '2', '\0',
'A', '\0',
'B', '\0',
'C', '\0',
'A', '0', '\0',
'T', 'y', 'p', 'e', 'I', 'n', 'f', 'o', '_', 'f', 'o', 
'r', '_', 'T', '\0',
'a', 'l', 'i', 'b', '.', 'm', '\0',
'[', ']', '\0',
'[', '|', ']', '\0',
'\044', 't', 'y', 'p', 'e', '_', 'c', 't', 'o', 'r', '_', 
'i', 'n', 'f', 'o', '_', 'c', 'o', 'n', 's', 't', '\0',
'\044', 't', 'y', 'p', 'e', '_', 'i', 'n', 'f', 'o', '_', 
'c', 'e', 'l', 'l', '_', 'c', 'o', 'n', 's', 't', 'r', 
'u', 'c', 't', 'o', 'r', '\0',
'\044', 'c', 'l', 'o', 's', 'u', 'r', 'e', '_', 'c', 'o', 
'n', 's', '\0',
'l', 'i', 's', 't', '\0',
'm', 'a', 'p', '\0',
'a', 'l', 'i', 'b', '\0',
't', 'r', 'a', 'n', 's', 'p', 'o', 's', 'e', '\0',
'd', '2', ';', 'c', '2', ';', '\0',
'D', 'C', 'G', '_', '0', '\0',
'H', 'e', 'a', 'd', 'V', 'a', 'r', '_', '_', '3', '\0',
'E', '\0',
'E', 's', '\0',
'D', 'C', 'G', '_', '1', '\0',
'D', 'C', 'G', '_', '2', '\0',
's', 'e', 'q', '\0',
'c', '1', ';', '\0',
'c', '2', ';', 's', '1', '-', '2', ';', '\0',
'c', '2', ';', 's', '1', '-', '2', ';', 'c', '3', ';', 
'\0',
'c', '2', ';', 's', '2', '-', '2', ';', '\0',
'N', '\0',
'L', '0', '\0',
'I', '\0',
'I', 'O', '\0',
'i', 'o', '\0',
'r', 'e', 'a', 'd', '_', 'n', 'a', 'm', 'e', 'd', '_', 
'f', 'i', 'l', 'e', '_', 'a', 's', '_', 'l', 'i', 'n', 
'e', 's', '\0',
'e', 'r', 'r', 'o', 'r', '\0',
'p', 'r', 'i', 'n', 't', '\0',
'o', 'k', '\0',
'c', '3', ';', '\0',
'X', '\0',
'Y', '\0',
'Z', '\0',
'X', '0', '\0',
's', 't', 'r', 'i', 'n', 'g', '\0',
't', 'o', '_', 'c', 'h', 'a', 'r', '_', 'l', 'i', 's', 
't', '\0',
'a', 'p', 'p', 'e', 'n', 'd', '\0',
'C', 'a', 's', 't', '_', 'H', 'e', 'a', 'd', 'V', 'a', 
'r', '1', '\0',
'C', 'a', 's', 't', '_', 'H', 'e', 'a', 'd', 'V', 'a', 
'r', '2', '\0',
'c', '4', ';', '\0'};

static const MR_ProcLayout *mercury_data__module_procs__alib[] = {
MR_PROC_LAYOUT1(alib__transpose_2_0)
MR_PROC_LAYOUT1(alib__seq_3_0)
MR_PROC_LAYOUT1(alib__rlines_4_0)
MR_PROC_LAYOUT1(alib__l_3_0)
MR_PROC_LAYOUT1(__Unify___alib__ch_0_0)
MR_PROC_LAYOUT1(__Compare___alib__ch_0_0)
MR_PROC_LAYOUT1(__Unify___alib__cl_0_0)
MR_PROC_LAYOUT1(__Compare___alib__cl_0_0)
};

static const MR_int_least16_t mercury_data__file_lines__alib_0[] = {
4, 4, 4, 4, 4, 4, 5, 5, 5, 5,
5, 5, 5, 15, 15, 15, 15, 16, 17, 18,
19, 20, 22, 22, 22, 22, 22, 23, 23, 25,
25, 26, 27, 28, 28, 30, 30, 30, 30, 30,
};

static const MR_LabelLayout *mercury_data__file_label_layouts__alib_0[] = {
MR_svar_label_layout_refs10(alib, 32,31,30,29,28,27,39,38,37,36)
MR_svar_label_layout_refs10(alib, 35,34,33,8,2,1,0,3,4,5)
MR_svar_label_layout_refs10(alib, 6,7,15,14,11,10,9,13,12,21)
MR_svar_label_layout_refs10(alib, 16,17,20,19,18,26,25,24,23,22)
};

static const MR_ModuleFileLayout mercury_data__file_layout__alib_0 = {
"alib.m",
40,
mercury_data__file_lines__alib_0,
mercury_data__file_label_layouts__alib_0
};

static const MR_ModuleFileLayout *mercury_data__module_files__alib[] = {
&mercury_data__file_layout__alib_0,
};

static MR_Unsigned mercury_data__module_label_exec_counts__alib[30];

static const MR_ModuleLayout mercury_data__module_layout__alib = {
5,
"alib",
421,
mercury_data__module_strings__alib,
0,
NULL,
0,
NULL,
8,
mercury_data__module_procs__alib,
1,
mercury_data__module_files__alib,
MR_TRACE_LEVEL_DECL_REP,
0,
30,
mercury_data__module_label_exec_counts__alib,
NULL,
NULL,
0,
0,
NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__alib__transpose_2_0_2 = {
{
MR_FUNCTION,
"list",
"list",
"det_tail",
2,
0
},
"alib",
"alib.m",
19,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__alib__transpose_2_0_1 = {
{
MR_FUNCTION,
"list",
"list",
"det_head",
2,
0
},
"alib",
"alib.m",
18,
"11"
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_comparison_result_0;

static const MR_PseudoTypeInfo mercury_data__pseudo_type_info_array__alib[53] = {
MR_cast_to_pti10(MR_COMMON(0,1),
	MR_CTOR0_ADDR(private_builtin, type_info),
	MR_COMMON(0,1),
	MR_COMMON(0,1),
	MR_CTOR0_ADDR(private_builtin, type_info),
	MR_CTOR0_ADDR(private_builtin, type_info),
	MR_CTOR0_ADDR(private_builtin, type_info),
	MR_COMMON(0,1),
	MR_COMMON(1,0),
	MR_COMMON(0,1))
MR_cast_to_pti10(MR_CTOR0_ADDR(private_builtin, type_info),
	MR_CTOR0_ADDR(private_builtin, type_info),
	MR_CTOR0_ADDR(private_builtin, type_info),
	MR_COMMON(0,1),
	MR_COMMON(0,1),
	MR_COMMON(1,0),
	MR_COMMON(0,1),
	MR_CTOR0_ADDR(private_builtin, type_info),
	MR_CTOR0_ADDR(private_builtin, type_info),
	MR_CTOR0_ADDR(private_builtin, type_info))
MR_cast_to_pti10(MR_COMMON(1,0),
	MR_CTOR0_ADDR(private_builtin, type_info),
	MR_COMMON(1,0),
	MR_COMMON(1,0),
	(MR_Integer) 1,
	MR_CTOR0_ADDR(private_builtin, type_info),
	MR_COMMON(1,0),
	MR_COMMON(1,0),
	MR_COMMON(1,0),
	MR_CTOR0_ADDR(private_builtin, type_info))
MR_cast_to_pti10(MR_STRING_CTOR_ADDR,
	MR_COMMON(0,3),
	MR_STRING_CTOR_ADDR,
	MR_CTOR0_ADDR(io, error),
	MR_COMMON(0,3),
	MR_STRING_CTOR_ADDR,
	MR_CTOR0_ADDR(private_builtin, type_info),
	MR_COMMON(0,4),
	MR_STRING_CTOR_ADDR,
	MR_STRING_CTOR_ADDR)
MR_cast_to_pti10(MR_COMMON(0,5),
	MR_CTOR0_ADDR(private_builtin, type_info),
	MR_STRING_CTOR_ADDR,
	MR_COMMON(0,5),
	MR_COMMON(0,5),
	MR_CHAR_CTOR_ADDR,
	MR_CHAR_CTOR_ADDR,
	MR_CTOR0_ADDR(builtin, comparison_result),
	MR_CHAR_CTOR_ADDR,
	MR_CHAR_CTOR_ADDR)
MR_cast_to_pti3(MR_CTOR0_ADDR(builtin, comparison_result),
	MR_COMMON(0,5),
	MR_COMMON(0,5))
};


static const MR_HLDSVarNum mercury_data__hlds_var_nums_array__alib[46] = {
1, 11, 5, 1, 12, 13, 11, 5, 6, 1,
12, 13, 11, 5, 8, 6, 1, 12, 13, 11,
1, 2, 11, 2, 8, 2, 6, 4, 8, 2,
1, 3, 8, 3, 1, 4, 3, 1, 8, 5,
1, 4, 2, 1, 2, 3,
};


static const MR_ShortLval mercury_data__short_locns_array__alib[51] = {
8, 4, 25, 21, 41, 45, 37, 25, 29, 21,
41, 45, 37, 25, 33, 29, 21, 41, 45, 37,
21, 4, 37, 26, 38, 26, 34, 30, 38, 26,
4, 8, 38, 4, 21, 29, 25, 21, 33, 21,
25, 33, 21, 29, 25, 21, 25, 8, 4, 25,
29,
};


static const MR_LabelLayoutShort mercury_data__svar_label_layout_array__alib[40] = {
{ MR_LL(alib__transpose_2_0, CALL,1,0),
  2,MR_LLVSC(alib,2,0,0,0,0) },
{ MR_LL(alib__transpose_2_0, DISJ_FIRST,2,44),
  2,MR_LLVSC(alib,2,0,0,0,0) },
{ MR_LL(alib__transpose_2_0, SWITCH,3,52),
  2,MR_LLVSC(alib,2,0,0,0,0) },
{ MR_LL(alib__transpose_2_0, SWITCH,4,70),
  2,MR_LLVSC(alib,2,0,0,0,0) },
{ MR_LL(alib__transpose_2_0, DISJ_LATER,5,88),
  2,MR_LLVSC(alib,2,0,0,0,0) },
{ MR_LL(alib__transpose_2_0, EXCEPTION,0,96),
  5,MR_LLVSC(alib,2,1,2,2,2) },
{ MR_LL(alib__transpose_2_0, EXCEPTION,0,110),
  6,MR_LLVSC(alib,2,1,7,7,7) },
{ MR_LL(alib__transpose_2_0, EXCEPTION,0,124),
  7,MR_LLVSC(alib,2,1,13,13,13) },
{ MR_LL(alib__transpose_2_0, EXIT,6,0),
  3,MR_LLVSC(alib,2,1,2,20,20) },
{ MR_LL(alib__seq_3_0, REDO,7,0),
  2,MR_LLVSC(alib,2,2,20,23,23) },
{ MR_LL(alib__seq_3_0, CALL,8,0),
  2,MR_LLVSC(alib,2,0,20,23,0) },
{ MR_LL(alib__seq_3_0, DISJ_FIRST,9,44),
  2,MR_LLVSC(alib,2,0,20,23,0) },
{ MR_LL(alib__seq_3_0, DISJ_LATER,10,88),
  2,MR_LLVSC(alib,2,2,20,23,23) },
{ MR_LL(alib__seq_3_0, EXCEPTION,0,434),
  4,MR_LLVSC(alib,2,2,22,25,25) },
{ MR_LL(alib__seq_3_0, EXIT,11,0),
  4,MR_LLVSC(alib,2,2,26,29,29) },
{ MR_LL(alib__seq_3_0, FAIL,12,0),
  2,MR_LLVSC(alib,2,2,28,23,23) },
{ MR_LL(alib__rlines_4_0, CALL,13,0),
  1,MR_LLVS0(alib,30,30,30) },
{ MR_LL(alib__rlines_4_0, EXCEPTION,0,524),
  1,MR_LLVS0(alib,30,30,20) },
{ MR_LL(alib__rlines_4_0, SWITCH,14,532),
  2,MR_LLVS0(alib,31,33,33) },
{ MR_LL(alib__rlines_4_0, EXCEPTION,0,550),
  4,MR_LLVS0(alib,33,35,35) },
{ MR_LL(alib__rlines_4_0, SWITCH,15,574),
  2,MR_LLVS0(alib,34,36,33) },
{ MR_LL(alib__rlines_4_0, EXIT,16,0),
  2,MR_LLVS0(alib,37,29,33) },
{ MR_LL(alib__l_3_0, CALL,17,0),
  2,MR_LLVS0(alib,39,20,30) },
{ MR_LL(alib__l_3_0, EXCEPTION,0,524),
  2,MR_LLVS0(alib,39,20,39) },
{ MR_LL(alib__l_3_0, EXCEPTION,0,698),
  4,MR_LLVS0(alib,41,39,41) },
{ MR_LL(alib__l_3_0, EXIT,18,0),
  3,MR_LLVS0(alib,42,43,45) },
{ MR_LL(alib__l_3_0, FAIL,19,0),
  2,MR_LLVS0(alib,42,43,45) },
{ MR_LL(__Unify___alib__ch_0_0, CALL,20,0),
  2,MR_LLVS0(alib,45,43,30) },
{ MR_LL(__Unify___alib__ch_0_0, EXIT,21,0),
  2,MR_LLVS0(alib,45,43,30) },
{ MR_LL(__Unify___alib__ch_0_0, FAIL,22,0),
  2,MR_LLVS0(alib,45,43,7) },
{ MR_LL(__Compare___alib__ch_0_0, CALL,23,0),
  2,MR_LLVS0(alib,45,44,30) },
{ MR_LL(__Compare___alib__ch_0_0, EXCEPTION,0,834),
  2,MR_LLVS0(alib,45,44,7) },
{ MR_LL(__Compare___alib__ch_0_0, EXIT,24,0),
  3,MR_LLVS0(alib,47,43,48) },
{ MR_LL(__Unify___alib__cl_0_0, CALL,25,0),
  2,MR_LLVS0(alib,43,43,30) },
{ MR_LL(__Unify___alib__cl_0_0, EXCEPTION,0,834),
  2,MR_LLVS0(alib,43,43,49) },
{ MR_LL(__Unify___alib__cl_0_0, EXIT,26,0),
  2,MR_LLVS0(alib,43,43,49) },
{ MR_LL(__Unify___alib__cl_0_0, FAIL,27,0),
  2,MR_LLVS0(alib,43,43,49) },
{ MR_LL(__Compare___alib__cl_0_0, CALL,28,0),
  2,MR_LLVS0(alib,43,44,30) },
{ MR_LL(__Compare___alib__cl_0_0, EXCEPTION,0,834),
  2,MR_LLVS0(alib,43,44,49) },
{ MR_LL(__Compare___alib__cl_0_0, EXIT,29,0),
  3,MR_LLVS0(alib,50,43,48) },
};


static const MR_uint_least16_t mercury_data__proc_head_var_nums_array__alib[11] = {
11, 1, 2, 8, 1, 2, 3, 1, 2, 5,
6,
};


static const MR_uint_least32_t mercury_data__proc_var_names_array__alib[55] = {
138, 160, 0, 0, 182, 186, 190, 194, 0, 0,
200, 771, 837, 138, 448, 460, 482, 486, 492, 504,
200, 592, 596, 602, 482, 19857473, 19857409, 19858241, 899, 706,
710, 714, 718, 515, 138, 160, 778, 806, 138, 160,
460, 778, 806, 387, 138, 160, 778, 806, 325, 138,
160, 460, 778, 806, 389,
};


static const MR_uint_least8_t mercury_data__proc_body_bytecodes_array__alib[953] = {

0, 0, 1, 147, 0, 0, 0, 230, 0, 0,
0, 0, 3, 11, 1, 1, 1, 1, 1, 2,
0, 1, 2, 0, 0, 0, 2, 3, 1, 1,
0, 0, 0, 2, 0, 0, 0, 244, 0, 0,
0, 0, 0, 0, 7, 2, 0, 0, 0, 244,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 15, 0, 0, 0, 1, 2, 6, 0, 0,
0, 250, 0, 2, 0, 0, 0, 0, 1, 0,
0, 0, 3, 8, 1, 0, 0, 0, 250, 0,
0, 0, 2, 4, 3, 0, 0, 0, 0, 0,
0, 0, 16, 0, 0, 0, 1, 4, 6, 8,
4, 0, 0, 0, 244, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
0, 2, 7, 2, 0, 0, 0, 244, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 16,
0, 0, 0, 1, 2, 6, 2, 2, 1, 0,
0, 0, 9, 11, 5, 1, 0, 0, 0, 0,
0, 0, 0, 17, 0, 0, 0, 1, 5, 6,
7, 12, 0, 0, 1, 2, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 1, 12, 6, 7, 13, 0, 0, 1, 46,
0, 0, 0, 2, 12, 11, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 1, 13, 6,
7, 9, 0, 0, 1, 102, 0, 0, 0, 1,
11, 0, 0, 0, 0, 0, 0, 0, 18, 0,
0, 0, 1, 9, 6, 17, 0, 0, 1, 130,
0, 0, 1, 140, 0, 0, 0, 5, 13, 11,
9, 5, 6, 0, 0, 0, 0, 0, 0, 0,
18, 0, 0, 0, 1, 6, 6, 7, 10, 0,
0, 1, 102, 0, 0, 0, 1, 11, 0, 0,
0, 0, 0, 0, 0, 19, 0, 0, 0, 1,
10, 6, 17, 0, 0, 1, 130, 0, 0, 1,
140, 0, 0, 0, 5, 13, 13, 10, 5, 8,
0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
0, 1, 8, 6, 17, 0, 0, 1, 148, 0,
0, 1, 158, 0, 0, 0, 3, 11, 8, 7,
0, 0, 0, 0, 0, 0, 0, 20, 0, 0,
0, 1, 7, 14, 7, 2, 0, 0, 0, 250,
0, 0, 0, 2, 6, 7, 0, 0, 0, 0,
0, 0, 0, 17, 0, 0, 0, 1, 2, 6,
14, 14, 14, 0, 0, 0, 187, 0, 0, 0,
230, 0, 0, 0, 0, 4, 8, 1, 1, 1,
0, 1, 2, 1, 1, 3, 0, 1, 2, 0,
0, 0, 2, 1, 0, 0, 0, 2, 7, 1,
0, 0, 0, 244, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 22, 0, 0, 0, 1,
1, 6, 11, 3, 2, 0, 0, 0, 0, 0,
0, 0, 22, 0, 0, 0, 1, 3, 6, 6,
1, 0, 0, 0, 4, 8, 2, 0, 0, 0,
250, 0, 0, 0, 2, 4, 6, 0, 0, 0,
0, 0, 0, 0, 23, 0, 0, 0, 2, 4,
6, 2, 17, 0, 0, 1, 148, 0, 0, 2,
4, 0, 0, 0, 4, 8, 5, 6, 7, 0,
0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
2, 5, 7, 7, 7, 1, 0, 0, 0, 250,
0, 0, 0, 2, 4, 5, 0, 0, 0, 0,
0, 0, 0, 23, 0, 0, 0, 1, 1, 6,
11, 3, 7, 0, 0, 0, 0, 0, 0, 0,
23, 0, 0, 0, 1, 3, 6, 3, 7, 7,
0, 0, 0, 250, 0, 0, 0, 230, 0, 0,
0, 0, 4, 1, 1, 1, 2, 0, 1, 5,
1, 1, 6, 0, 1, 1, 0, 0, 0, 2,
17, 0, 0, 2, 100, 0, 0, 2, 106, 0,
0, 0, 4, 1, 3, 5, 7, 0, 0, 0,
0, 0, 0, 0, 26, 0, 0, 0, 2, 3,
7, 6, 3, 1, 3, 0, 0, 0, 2, 0,
0, 2, 156, 0, 1, 0, 0, 0, 0, 1,
0, 0, 0, 4, 8, 3, 0, 0, 2, 156,
0, 0, 0, 1, 4, 0, 0, 0, 0, 0,
0, 0, 28, 0, 0, 0, 1, 4, 6, 7,
8, 0, 0, 1, 2, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
1, 8, 6, 17, 0, 0, 2, 100, 0, 0,
2, 168, 0, 0, 0, 4, 8, 4, 7, 6,
0, 0, 0, 0, 0, 0, 0, 28, 0, 0,
0, 1, 6, 6, 7, 2, 0, 0, 0, 244,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 28, 0, 0, 0, 1, 2, 6, 6, 0,
0, 2, 180, 0, 1, 0, 0, 0, 0, 1,
0, 0, 0, 2, 8, 3, 0, 0, 2, 180,
0, 0, 0, 1, 2, 0, 0, 0, 0, 0,
0, 0, 27, 0, 0, 0, 1, 2, 6, 11,
6, 7, 0, 0, 0, 0, 0, 0, 0, 27,
0, 0, 0, 1, 6, 6, 6, 6, 6, 6,
0, 0, 0, 113, 0, 0, 0, 230, 0, 0,
0, 0, 3, 1, 1, 1, 2, 1, 1, 3,
0, 1, 1, 0, 0, 0, 3, 17, 0, 0,
2, 212, 0, 0, 2, 226, 0, 0, 0, 2,
1, 4, 0, 0, 0, 0, 0, 0, 0, 30,
0, 0, 0, 1, 4, 6, 7, 5, 0, 0,
1, 2, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 1, 5, 6,
17, 0, 0, 1, 130, 0, 0, 2, 252, 0,
0, 0, 4, 5, 4, 3, 2, 0, 0, 0,
0, 0, 0, 0, 30, 0, 0, 0, 1, 3,
2, 2, 2,};


static const MR_LabelLayout *mercury_data__proc_event_layouts_array__alib[29] = {
MR_svar_label_layout_refs10(alib, 0,8,1,2,3,4,9,10,14,15)
MR_svar_label_layout_refs10(alib, 11,12,16,21,18,20,22,25,26,27)
MR_svar_label_layout_refs9(alib, 28,29,30,32,33,35,36,37,39)
};


static MR_STATIC_CODE_CONST MR_ExecTrace mercury_data__proc_exec_traces_array__alib[8] = {
{ (MR_LabelLayout *) &MR_svar_label_layouts(alib)[0],
  (const MR_ModuleLayout *) &mercury_data__module_layout__alib,
  &MR_proc_event_layouts(alib)[0],6,
  { NULL },
  &MR_proc_head_var_nums(alib)[0],&MR_proc_var_names(alib)[0],
  3,13,2,0,-1,4,-1,-1,MR_EVAL_METHOD_NORMAL,-1,MR_TRACE_LEVEL_DECL_REP,
  0,-1 },
{ (MR_LabelLayout *) &MR_svar_label_layouts(alib)[10],
  (const MR_ModuleLayout *) &mercury_data__module_layout__alib,
  &MR_proc_event_layouts(alib)[6],6,
  { NULL },
  &MR_proc_head_var_nums(alib)[3],&MR_proc_var_names(alib)[13],
  4,8,2,0,-1,5,-1,-1,MR_EVAL_METHOD_NORMAL,-1,MR_TRACE_LEVEL_DECL_REP,
  0,-1 },
{ (MR_LabelLayout *) &MR_svar_label_layouts(alib)[16],
  (const MR_ModuleLayout *) &mercury_data__module_layout__alib,
  &MR_proc_event_layouts(alib)[12],4,
  { NULL },
  &MR_proc_head_var_nums(alib)[7],&MR_proc_var_names(alib)[21],
  4,8,2,0,-1,4,-1,-1,MR_EVAL_METHOD_NORMAL,-1,MR_TRACE_LEVEL_DECL_REP,
  1,-1 },
{ (MR_LabelLayout *) &MR_svar_label_layouts(alib)[22],
  (const MR_ModuleLayout *) &mercury_data__module_layout__alib,
  &MR_proc_event_layouts(alib)[16],3,
  { NULL },
  &MR_proc_head_var_nums(alib)[4],&MR_proc_var_names(alib)[29],
  3,5,2,0,-1,4,-1,-1,MR_EVAL_METHOD_NORMAL,-1,MR_TRACE_LEVEL_DECL_REP,
  0,-1 },
{ (MR_LabelLayout *) &MR_svar_label_layouts(alib)[27],
  (const MR_ModuleLayout *) &mercury_data__module_layout__alib,
  &MR_proc_event_layouts(alib)[19],3,
  { NULL },
  &MR_proc_head_var_nums(alib)[7],&MR_proc_var_names(alib)[34],
  2,4,2,0,4,5,-1,-1,MR_EVAL_METHOD_NORMAL,-1,MR_TRACE_LEVEL_SHALLOW,
  0,-1 },
{ (MR_LabelLayout *) &MR_svar_label_layouts(alib)[30],
  (const MR_ModuleLayout *) &mercury_data__module_layout__alib,
  &MR_proc_event_layouts(alib)[22],2,
  { NULL },
  &MR_proc_head_var_nums(alib)[4],&MR_proc_var_names(alib)[38],
  3,6,2,0,4,5,-1,-1,MR_EVAL_METHOD_NORMAL,-1,MR_TRACE_LEVEL_SHALLOW,
  0,-1 },
{ (MR_LabelLayout *) &MR_svar_label_layouts(alib)[33],
  (const MR_ModuleLayout *) &mercury_data__module_layout__alib,
  &MR_proc_event_layouts(alib)[24],3,
  { NULL },
  &MR_proc_head_var_nums(alib)[7],&MR_proc_var_names(alib)[44],
  2,5,2,0,4,5,-1,-1,MR_EVAL_METHOD_NORMAL,-1,MR_TRACE_LEVEL_SHALLOW,
  0,-1 },
{ (MR_LabelLayout *) &MR_svar_label_layouts(alib)[37],
  (const MR_ModuleLayout *) &mercury_data__module_layout__alib,
  &MR_proc_event_layouts(alib)[27],2,
  { NULL },
  &MR_proc_head_var_nums(alib)[4],&MR_proc_var_names(alib)[49],
  3,6,2,0,4,5,-1,-1,MR_EVAL_METHOD_NORMAL,-1,MR_TRACE_LEVEL_SHALLOW,
  0,-1 },
};


MR_decl_entry(fn__list__det_head_1_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__list__det_tail_1_0);

MR_BEGIN_MODULE(alib_module0)
	MR_init_entry1_sl(alib__transpose_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__alib__transpose_2_0);
	MR_init_label_svi9(alib__transpose_2_0, alib,
		2,0, 5,1, 8,2, 9,3, 11,4, 14,5, 16,6, 17,7, 19,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transpose'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__alib__transpose_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = ((MR_Word) MR_succip);
	{
		MR_trace_fill_std_slots(MR_sv(1), MR_sv(2), MR_sv(3));
		MR_sv(4) = MR_io_tabling_counter;
	}
MR_def_label(alib__transpose_2_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[0]
		/* port CALL, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
MR_def_label(alib__transpose_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[1]
		/* port DISJ_FIRST, path <d1;> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(alib__transpose_2_0_i9);
	}
MR_def_label(alib__transpose_2_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[2]
		/* port SWITCH, path <d1;s1-2;> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_sv(5) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Unsigned) 0U;
	MR_GOTO_LAB(alib__transpose_2_0_i19);
MR_def_label(alib__transpose_2_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[3]
		/* port SWITCH, path <d1;s2-2;> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_r3 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(alib__transpose_2_0_i11);
	}
	MR_sv(5) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Unsigned) 0U;
	MR_GOTO_LAB(alib__transpose_2_0_i19);
MR_def_label(alib__transpose_2_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[4]
		/* port DISJ_LATER, path <d2;> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Word) MR_LIST_CTOR_ADDR);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Word) MR_COMMON(3,0));
	MR_tfield(0, MR_tempr2, 1) = ((MR_Word) MR_ENTRY_AP(fn__list__det_head_1_0));
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_sv(10) = ((MR_Word) MR_LIST_CTOR_ADDR);
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(5);
	MR_trace_reset_depth_from_full(MR_sv(3));
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		alib__transpose_2_0_i14);
MR_def_label(alib__transpose_2_0, 14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Word) MR_COMMON(4,0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Word) MR_ENTRY_AP(fn__list__det_tail_1_0));
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(5);
	MR_trace_reset_depth_from_full(MR_sv(3));
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		alib__transpose_2_0_i16);
MR_def_label(alib__transpose_2_0, 16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_trace_reset_depth_from_full(MR_sv(3));
	MR_np_localcall_lab(alib__transpose_2_0,
		alib__transpose_2_0_i17);
MR_def_label(alib__transpose_2_0, 17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(alib__transpose_2_0, 19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[8]
		/* port EXIT, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_trace_redo_fail_deep);
MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(alib_module1)
	MR_init_entry1_sl(alib__seq_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__alib__seq_3_0);
	MR_init_label1(alib__seq_3_0,4)
	MR_init_label_svi6(alib__seq_3_0, alib,
		3,10, 6,11, 7,12, 9,13, 11,14, 12,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'seq'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__alib__seq_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred alib.seq/3-0", 9,
		MR_LABEL_AP(alib__seq_3_0_i12));
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[9]
		MR_trace_fill_std_slots(MR_fv(1), MR_fv(2), MR_fv(3));
		MR_fv(4) = (MR_Word) (const MR_Word *) MR_HASH_DEF_LABEL_LAYOUT;
		MR_fv(5) = MR_io_tabling_counter;
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
MR_def_label(alib__seq_3_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[10]
		/* port CALL, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_mktempframe(MR_LABEL_AP(alib__seq_3_0_i7));
MR_def_label(alib__seq_3_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[11]
		/* port DISJ_FIRST, path <d1;> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_fv(6) = MR_r2;
	MR_fv(9) = MR_r1;
	MR_r1 = (MR_Unsigned) 0U;
	MR_GOTO_LAB(alib__seq_3_0_i4);
MR_def_label(alib__seq_3_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[12]
		/* port DISJ_LATER, path <d2;> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_maxfr_word = ((MR_Word) MR_prevfr_slot(MR_maxfr));
	if (MR_INT_EQ(MR_fv(6),0)) {
		MR_GOTO_LAB(alib__seq_3_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(6);
	MR_fv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_fv(8) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_fv(9);
	MR_r2 = MR_fv(8);
	MR_trace_reset_depth_from_full(MR_fv(3));
	}
	MR_np_localcall_lab(alib__seq_3_0,
		alib__seq_3_0_i9);
MR_def_label(alib__seq_3_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(alib__seq_3_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mktempframe(MR_ENTRY(MR_do_trace_redo_fail_deep));
MR_def_label(alib__seq_3_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[14]
		/* port EXIT, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_succeed();
MR_def_label(alib__seq_3_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[15]
		/* port FAIL, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_GOTO(MR_ENTRY(MR_do_fail));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__read_named_file_as_lines_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_error_0;
MR_decl_entry(io__print_3_0);

MR_BEGIN_MODULE(alib_module2)
	MR_init_entry1_sl(alib__rlines_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__alib__rlines_4_0);
	MR_init_label_svi6(alib__rlines_4_0, alib,
		2,16, 3,17, 6,18, 7,19, 8,20, 9,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rlines'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__alib__rlines_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = ((MR_Word) MR_succip);
	{
		MR_trace_fill_std_slots(MR_sv(1), MR_sv(2), MR_sv(3));
		MR_sv(4) = MR_io_tabling_counter;
	}
MR_def_label(alib__rlines_4_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[16]
		/* port CALL, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_sv(5) = MR_r1;
	MR_trace_reset_depth_from_full(MR_sv(3));
	MR_np_call_localret_ent(io__read_named_file_as_lines_4_0,
		alib__rlines_4_0_i3);
MR_def_label(alib__rlines_4_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),1)) {
		MR_GOTO_LAB(alib__rlines_4_0_i8);
	}
MR_def_label(alib__rlines_4_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[18]
		/* port SWITCH, path <c2;s1-2;> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_sv(8) = ((MR_Word) MR_CTOR0_ADDR(io, error));
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_trace_reset_depth_from_full(MR_sv(3));
	MR_np_call_localret_ent(io__print_3_0,
		alib__rlines_4_0_i7);
MR_def_label(alib__rlines_4_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Unsigned) 0U;
	MR_GOTO_LAB(alib__rlines_4_0_i9);
MR_def_label(alib__rlines_4_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[20]
		/* port SWITCH, path <c2;s2-2;> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
MR_def_label(alib__rlines_4_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[21]
		/* port EXIT, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);
MR_decl_entry(list__append_3_3);

MR_BEGIN_MODULE(alib_module3)
	MR_init_entry1_sl(alib__l_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__alib__l_3_0);
	MR_init_label_svi5(alib__l_3_0, alib,
		2,22, 3,23, 4,24, 6,25, 7,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'l'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__alib__l_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = ((MR_Word) MR_succip);
	{
		MR_trace_fill_std_slots(MR_sv(1), MR_sv(2), MR_sv(3));
		MR_sv(4) = MR_io_tabling_counter;
	}
MR_def_label(alib__l_3_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[22]
		/* port CALL, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_trace_reset_depth_from_full(MR_sv(3));
	MR_np_call_localret_ent(string__to_char_list_2_0,
		alib__l_3_0_i3);
MR_def_label(alib__l_3_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = ((MR_Word) MR_CHAR_CTOR_ADDR);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_trace_reset_depth_from_full(MR_sv(3));
	MR_np_call_localret_ent(list__append_3_3,
		alib__l_3_0_i4);
MR_def_label(alib__l_3_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(alib__l_3_0_i7);
	}
MR_def_label(alib__l_3_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[25]
		/* port EXIT, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(alib__l_3_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[26]
		/* port FAIL, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(alib_module4)
	MR_init_entry1_sl(__Unify___alib__ch_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___alib__ch_0_0);
	MR_init_label_svi3(__Unify___alib__ch_0_0, alib,
		2,27, 4,28, 5,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___alib__ch_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = ((MR_Word) MR_succip);
	{
		MR_sv(4) = MR_trace_from_full;
		if (MR_trace_from_full) {
		MR_trace_fill_std_slots(MR_sv(1), MR_sv(2), MR_sv(3));
		MR_sv(5) = MR_io_tabling_counter;
		} else {
			MR_sv(3) = MR_trace_call_depth;
		}
	}
MR_def_label(__Unify___alib__ch_0_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[27]
		/* port CALL, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___alib__ch_0_0_i4);
	}
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_GOTO_LAB(__Unify___alib__ch_0_0_i5);
MR_def_label(__Unify___alib__ch_0_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[28]
		/* port EXIT, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___alib__ch_0_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[29]
		/* port FAIL, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(alib_module5)
	MR_init_entry1_sl(__Compare___alib__ch_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___alib__ch_0_0);
	MR_init_label_svi3(__Compare___alib__ch_0_0, alib,
		2,30, 3,31, 4,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___alib__ch_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = ((MR_Word) MR_succip);
	{
		MR_sv(4) = MR_trace_from_full;
		if (MR_trace_from_full) {
		MR_trace_fill_std_slots(MR_sv(1), MR_sv(2), MR_sv(3));
		MR_sv(5) = MR_io_tabling_counter;
		} else {
			MR_sv(3) = MR_trace_call_depth;
		}
	}
MR_def_label(__Compare___alib__ch_0_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[30]
		/* port CALL, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = ((MR_Word) MR_CHAR_CTOR_ADDR);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_trace_reset_depth_from_shallow(MR_sv(3));
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___alib__ch_0_0_i3);
MR_def_label(__Compare___alib__ch_0_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_dummy_function_call();
MR_def_label(__Compare___alib__ch_0_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[32]
		/* port EXIT, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(alib_module6)
	MR_init_entry1_sl(__Unify___alib__cl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___alib__cl_0_0);
	MR_init_label_svi4(__Unify___alib__cl_0_0, alib,
		2,33, 3,34, 5,35, 6,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___alib__cl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = ((MR_Word) MR_succip);
	{
		MR_sv(4) = MR_trace_from_full;
		if (MR_trace_from_full) {
		MR_trace_fill_std_slots(MR_sv(1), MR_sv(2), MR_sv(3));
		MR_sv(5) = MR_io_tabling_counter;
		} else {
			MR_sv(3) = MR_trace_call_depth;
		}
	}
MR_def_label(__Unify___alib__cl_0_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[33]
		/* port CALL, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,0,0));
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_trace_reset_depth_from_shallow(MR_sv(3));
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___alib__cl_0_0_i3);
MR_def_label(__Unify___alib__cl_0_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___alib__cl_0_0_i6);
	}
MR_def_label(__Unify___alib__cl_0_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[35]
		/* port EXIT, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___alib__cl_0_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[36]
		/* port FAIL, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(alib_module7)
	MR_init_entry1_sl(__Compare___alib__cl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___alib__cl_0_0);
	MR_init_label_svi3(__Compare___alib__cl_0_0, alib,
		2,37, 3,38, 4,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___alib__cl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = ((MR_Word) MR_succip);
	{
		MR_sv(4) = MR_trace_from_full;
		if (MR_trace_from_full) {
		MR_trace_fill_std_slots(MR_sv(1), MR_sv(2), MR_sv(3));
		MR_sv(5) = MR_io_tabling_counter;
		} else {
			MR_sv(3) = MR_trace_call_depth;
		}
	}
MR_def_label(__Compare___alib__cl_0_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[37]
		/* port CALL, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,0,0));
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_trace_reset_depth_from_shallow(MR_sv(3));
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___alib__cl_0_0_i3);
MR_def_label(__Compare___alib__cl_0_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_dummy_function_call();
MR_def_label(__Compare___alib__cl_0_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define MR_HASH_DEF_LABEL_LAYOUT &MR_svar_label_layouts(alib)[39]
		/* port EXIT, path <> */
		MR_EVENT_SYS
#undef MR_HASH_DEF_LABEL_LAYOUT
	}
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__alib_always_bunch_0(void)
{
	alib_module0();
	alib_module1();
	alib_module2();
	alib_module3();
	alib_module4();
	alib_module5();
	alib_module6();
	alib_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__alib__init(void);
void mercury__alib__init_type_tables(void);
void mercury__alib__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__alib__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__alib__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__alib__init_threadscope_string_table(void);
#endif
const char *mercury__alib__grade_check(void);

void mercury__alib__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__alib_always_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_alib__type_ctor_info_ch_0,
		alib__ch_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_alib__type_ctor_info_cl_0,
		alib__cl_0_0);
	mercury__alib__init_debugger();
}

void mercury__alib__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_alib__type_ctor_info_ch_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_alib__type_ctor_info_cl_0);
	}
}


void mercury__alib__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	if (MR_register_module_layout != NULL) {
		(*MR_register_module_layout)(
			&mercury_data__module_layout__alib);
	}
}

#ifdef MR_DEEP_PROFILING

void mercury__alib__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__alib);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__alib__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__alib__init_threadscope_string_table(void)
{
}

#endif

// Ensure everything is compiled with the same grade.
const char *mercury__alib__grade_check(void)
{
    return &MR_GRADE_VAR;
}
