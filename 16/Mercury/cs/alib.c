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
#line 28 "Mercury/cs/alib.c"
#include "alib.mh"

#line 31 "Mercury/cs/alib.c"
#line 32 "Mercury/cs/alib.c"
#include "array.mh"

#line 35 "Mercury/cs/alib.c"
#line 36 "Mercury/cs/alib.c"
#include "bitmap.mh"

#line 39 "Mercury/cs/alib.c"
#line 40 "Mercury/cs/alib.c"
#include "io.mh"

#line 43 "Mercury/cs/alib.c"
#line 44 "Mercury/cs/alib.c"
#include "string.mh"

#line 47 "Mercury/cs/alib.c"
#line 48 "Mercury/cs/alib.c"
#include "time.mh"

#line 51 "Mercury/cs/alib.c"
#line 52 "Mercury/cs/alib.c"
#ifndef ALIB_DECL_GUARD
#define ALIB_DECL_GUARD

#line 56 "Mercury/cs/alib.c"
#line 57 "Mercury/cs/alib.c"

#endif
#line 60 "Mercury/cs/alib.c"

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


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_alib__type_ctor_info_ch_0,
	mercury_data_alib__type_ctor_info_cl_0;
MR_decl_label1(alib__l_3_0, 2)
MR_decl_label4(alib__num_3_0, 2,3,5,6)
MR_decl_label1(alib__rchr_4_0, 2)
MR_decl_label2(alib__rlines_4_0, 2,4)
MR_decl_label2(alib__rstr_4_0, 2,4)
MR_decl_label2(alib__seq_3_0, 2,4)
MR_decl_label5(alib__transpose_2_0, 5,3,9,11,12)
MR_def_extern_entry(alib__transpose_2_0)
MR_def_extern_entry(alib__seq_3_0)
MR_def_extern_entry(alib__rlines_4_0)
MR_def_extern_entry(alib__l_3_0)
MR_def_extern_entry(alib__rstr_4_0)
MR_def_extern_entry(alib__rchr_4_0)
MR_def_extern_entry(alib__alp_1_0)
MR_def_extern_entry(alib__num_3_0)
MR_def_extern_entry(__Unify___alib__ch_0_0)
MR_def_extern_entry(__Compare___alib__ch_0_0)
MR_def_extern_entry(__Unify___alib__cl_0_0)
MR_def_extern_entry(__Compare___alib__cl_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
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

static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
1,
33
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

static const MR_UserClosureId
mercury_data__closure_layout__alib__alp_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const MR_UserClosureId
mercury_data__closure_layout__alib__num_3_0_1;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__alib__alp_1_0_1,
((MR_Word *) (MR_Integer) 0),
1,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__alib__num_3_0_1,
((MR_Word *) (MR_Integer) 0),
1,
MR_CHAR_CTOR_ADDR
},
};

MR_decl_entry(char__is_alpha_1_0);
MR_decl_entry(char__is_digit_1_0);
static const struct mercury_type_6 mercury_common_6[2] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(char__is_alpha_1_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(char__is_digit_1_0),
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;

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


static const MR_UserClosureId
mercury_data__closure_layout__alib__num_3_0_1 = {
{
MR_PREDICATE,
"char",
"char",
"is_digit",
1,
0
},
"alib",
"alib.m",
49,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__alib__alp_1_0_1 = {
{
MR_PREDICATE,
"char",
"char",
"is_alpha",
1,
0
},
"alib",
"alib.m",
47,
"3"
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
25,
"14"
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
24,
"12"
};


MR_decl_entry(fn__list__det_head_1_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__list__det_tail_1_0);

MR_BEGIN_MODULE(alib_module0)
	MR_init_entry1(alib__transpose_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__alib__transpose_2_0);
	MR_init_label5(alib__transpose_2_0,5,3,9,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transpose'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__alib__transpose_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = ((MR_Word) MR_succip);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(alib__transpose_2_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Unsigned) 0U;
	MR_decr_sp_and_return(4);
MR_def_label(alib__transpose_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(alib__transpose_2_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Unsigned) 0U;
	MR_decr_sp_and_return(4);
	}
MR_def_label(alib__transpose_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		alib__transpose_2_0_i9);
MR_def_label(alib__transpose_2_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Word) MR_COMMON(4,0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Word) MR_ENTRY_AP(fn__list__det_tail_1_0));
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		alib__transpose_2_0_i11);
MR_def_label(alib__transpose_2_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(alib__transpose_2_0,
		alib__transpose_2_0_i12);
MR_def_label(alib__transpose_2_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(alib_module1)
	MR_init_entry1(alib__seq_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__alib__seq_3_0);
	MR_init_label2(alib__seq_3_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'seq'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__alib__seq_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred alib.seq/3-0", 2,
		MR_LABEL_AP(alib__seq_3_0_i2));
	MR_fv(1) = MR_r2;
	MR_fv(2) = MR_r1;
	MR_r1 = (MR_Unsigned) 0U;
	MR_succeed();
MR_def_label(alib__seq_3_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = ((MR_Word) MR_ENTRY(MR_do_fail));
	if (MR_INT_EQ(MR_fv(1),0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(1);
	MR_fv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_fv(2);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_localcall_lab(alib__seq_3_0,
		alib__seq_3_0_i4);
MR_def_label(alib__seq_3_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__read_named_file_as_lines_4_0);
MR_decl_entry(require__unexpected_2_0);

MR_BEGIN_MODULE(alib_module2)
	MR_init_entry1(alib__rlines_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__alib__rlines_4_0);
	MR_init_label2(alib__rlines_4_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rlines'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__alib__rlines_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = ((MR_Word) MR_succip);
	MR_np_call_localret_ent(io__read_named_file_as_lines_4_0,
		alib__rlines_4_0_i2);
MR_def_label(alib__rlines_4_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(alib__rlines_4_0_i4);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(alib__rlines_4_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("predicate \140alib.rlines\'/4", 25));
	MR_r2 = ((MR_Word) MR_string_const("lol", 3));
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);
MR_decl_entry(list__append_3_3);

MR_BEGIN_MODULE(alib_module3)
	MR_init_entry1(alib__l_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__alib__l_3_0);
	MR_init_label1(alib__l_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'l'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__alib__l_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		alib__l_3_0_i2);
MR_def_label(alib__l_3_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_CHAR_CTOR_ADDR);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__append_3_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__read_named_file_as_string_4_0);
MR_decl_entry(fn__string__strip_1_0);

MR_BEGIN_MODULE(alib_module4)
	MR_init_entry1(alib__rstr_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__alib__rstr_4_0);
	MR_init_label2(alib__rstr_4_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rstr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__alib__rstr_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = ((MR_Word) MR_succip);
	MR_np_call_localret_ent(io__read_named_file_as_string_4_0,
		alib__rstr_4_0_i2);
MR_def_label(alib__rstr_4_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(alib__rstr_4_0_i4);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__string__strip_1_0);
MR_def_label(alib__rstr_4_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("predicate \140alib.rstr\'/4", 23));
	MR_r2 = ((MR_Word) MR_string_const("lol", 3));
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(alib_module5)
	MR_init_entry1(alib__rchr_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__alib__rchr_4_0);
	MR_init_label1(alib__rchr_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rchr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__alib__rchr_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = ((MR_Word) MR_succip);
	MR_np_call_localret_ent(alib__rstr_4_0,
		alib__rchr_4_0_i2);
MR_def_label(alib__rchr_4_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__to_char_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__all_true_2_0);

MR_BEGIN_MODULE(alib_module6)
	MR_init_entry1(alib__alp_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__alib__alp_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'alp'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__alib__alp_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_CHAR_CTOR_ADDR);
	MR_r2 = ((MR_Word) MR_TAG_COMMON(0,6,0));
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__all_true_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_redo);
MR_decl_entry(string__from_char_list_2_0);
MR_decl_entry(string__to_int_2_0);

MR_BEGIN_MODULE(alib_module7)
	MR_init_entry1(alib__num_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__alib__num_3_0);
	MR_init_label4(alib__num_3_0,2,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__alib__num_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred alib.num/3-0", 4,
		MR_ENTRY(MR_do_fail));
	MR_fv(3) = ((MR_Word) MR_TAG_COMMON(0,6,1));
	MR_fv(4) = ((MR_Word) MR_CHAR_CTOR_ADDR);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(alib__seq_3_0,
		alib__num_3_0_i2);
MR_def_label(alib__num_3_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_r1 = MR_fv(4);
	MR_r2 = MR_fv(3);
	MR_r3 = MR_fv(1);
	MR_np_call_localret_ent(list__all_true_2_0,
		alib__num_3_0_i3);
MR_def_label(alib__num_3_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(string__from_char_list_2_0,
		alib__num_3_0_i5);
MR_def_label(alib__num_3_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_int_2_0,
		alib__num_3_0_i6);
MR_def_label(alib__num_3_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_fv(2);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(alib_module8)
	MR_init_entry1(__Unify___alib__ch_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___alib__ch_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___alib__ch_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_character_3_0);

MR_BEGIN_MODULE(alib_module9)
	MR_init_entry1(__Compare___alib__ch_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___alib__ch_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___alib__ch_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_character_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(alib_module10)
	MR_init_entry1(__Unify___alib__cl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___alib__cl_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___alib__cl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,0,0));
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(alib_module11)
	MR_init_entry1(__Compare___alib__cl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___alib__cl_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___alib__cl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,0,0));
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__alib_maybe_bunch_0(void)
{
	alib_module0();
	alib_module1();
	alib_module2();
	alib_module3();
	alib_module4();
	alib_module5();
	alib_module6();
	alib_module7();
	alib_module8();
	alib_module9();
	alib_module10();
	alib_module11();
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
	mercury__alib_maybe_bunch_0();
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
