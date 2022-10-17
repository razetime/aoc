/*
** Automatically generated from `a03.m'
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
INIT mercury__a03__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 28 "Mercury/cs/a03.c"
#include "a03.mh"

#line 31 "Mercury/cs/a03.c"
#line 32 "Mercury/cs/a03.c"
#include "array.mh"

#line 35 "Mercury/cs/a03.c"
#line 36 "Mercury/cs/a03.c"
#include "bitmap.mh"

#line 39 "Mercury/cs/a03.c"
#line 40 "Mercury/cs/a03.c"
#include "io.mh"

#line 43 "Mercury/cs/a03.c"
#line 44 "Mercury/cs/a03.c"
#include "string.mh"

#line 47 "Mercury/cs/a03.c"
#line 48 "Mercury/cs/a03.c"
#include "time.mh"

#line 51 "Mercury/cs/a03.c"
#line 52 "Mercury/cs/a03.c"
#ifndef A03_DECL_GUARD
#define A03_DECL_GUARD

#line 56 "Mercury/cs/a03.c"
#line 57 "Mercury/cs/a03.c"

#endif
#line 60 "Mercury/cs/a03.c"

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
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
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
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];
MR_decl_label4(a03__chk_1_0, 2,3,7,1)
MR_decl_label10(main_2_0, 2,5,4,8,10,11,12,13,14,15)
MR_decl_label4(main_2_0, 16,17,19,20)
MR_decl_label5(a03__transpose_2_0, 5,3,8,10,11)
MR_decl_label1(fn__a03__IntroducedFrom__func__main__29__1_1_0, 3)
MR_def_extern_entry(main_2_0)
MR_decl_static(a03__chk_1_0)
MR_decl_static(a03__transpose_2_0)
MR_decl_static(fn__a03__IntroducedFrom__func__main__29__1_1_0)
MR_decl_static(fn__a03__IntroducedFrom__func__transpose__20__1_1_0)
MR_decl_static(fn__a03__IntroducedFrom__func__transpose__21__1_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__a03__transpose_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__a03__transpose_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__a03__IntroducedFrom__func__main__29__1_1_0_1;
static const struct mercury_type_1 mercury_common_1[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_1,
((MR_Word *) (MR_Integer) 0),
2,
MR_STRING_CTOR_ADDR,
MR_COMMON(0,1)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_2,
((MR_Word *) (MR_Integer) 0),
2,
MR_STRING_CTOR_ADDR,
MR_COMMON(0,1)
},
{
(MR_Word *) &mercury_data__closure_layout__a03__transpose_2_0_1,
((MR_Word *) (MR_Integer) 0),
2,
MR_COMMON(0,1),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__a03__transpose_2_0_2,
((MR_Word *) (MR_Integer) 0),
2,
MR_COMMON(0,1),
MR_COMMON(0,1)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__a03__IntroducedFrom__func__main__29__1_1_0_1,
((MR_Word *) (MR_Integer) 0),
2,
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
};

MR_decl_entry(string__to_int_2_0);
static const struct mercury_type_2 mercury_common_2[7] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(fn__a03__IntroducedFrom__func__main__29__1_1_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(fn__a03__IntroducedFrom__func__main__29__1_1_0),
0
},
{
MR_COMMON(3,0),
MR_ENTRY_AP(a03__chk_1_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(a03__chk_1_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(fn__a03__IntroducedFrom__func__transpose__20__1_1_0),
0
},
{
MR_COMMON(1,3),
MR_ENTRY_AP(fn__a03__IntroducedFrom__func__transpose__21__1_1_0),
0
},
{
MR_COMMON(1,4),
MR_ENTRY_AP(string__to_int_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_4;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_3,
((MR_Word *) (MR_Integer) 0),
1,
MR_COMMON(0,1)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_4,
((MR_Word *) (MR_Integer) 0),
1,
MR_COMMON(0,1)
},
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__a03__IntroducedFrom__func__main__29__1_1_0_1 = {
{
MR_PREDICATE,
"string",
"string",
"to_int",
2,
0
},
"a03",
"a03.m",
29,
"19"
};

static const MR_UserClosureId
mercury_data__closure_layout__a03__transpose_2_0_2 = {
{
MR_FUNCTION,
"a03",
"a03",
"lambda_a03_m_21",
2,
0
},
"a03",
"a03.m",
21,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__a03__transpose_2_0_1 = {
{
MR_FUNCTION,
"a03",
"a03",
"lambda_a03_m_20",
2,
0
},
"a03",
"a03.m",
20,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_4 = {
{
MR_PREDICATE,
"a03",
"a03",
"chk",
1,
0
},
"a03",
"a03.m",
40,
"36"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3 = {
{
MR_PREDICATE,
"a03",
"a03",
"chk",
1,
0
},
"a03",
"a03.m",
31,
"24"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2 = {
{
MR_FUNCTION,
"a03",
"a03",
"lambda_a03_m_29",
2,
0
},
"a03",
"a03.m",
29,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1 = {
{
MR_FUNCTION,
"a03",
"a03",
"lambda_a03_m_29",
2,
0
},
"a03",
"a03.m",
29,
"15"
};


MR_decl_entry(io__read_named_file_as_lines_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_error_0;
MR_decl_entry(io__print_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(io__print_line_3_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(list__chunk_3_0);

MR_BEGIN_MODULE(a03_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,2,5,4,8,10,11,12,13,14,15)
	MR_init_label4(main_2_0,16,17,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = ((MR_Word) MR_succip);
	MR_r1 = ((MR_Word) MR_string_const("inp/03", 6));
	MR_np_call_localret_ent(io__read_named_file_as_lines_4_0,
		main_2_0_i2);
MR_def_label(main_2_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),1)) {
		MR_GOTO_LAB(main_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_CTOR0_ADDR(io, error));
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i5);
MR_def_label(main_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Unsigned) 0U;
	MR_r3 = ((MR_Word) MR_TAG_COMMON(0,2,0));
	MR_r1 = ((MR_Word) MR_STRING_CTOR_ADDR);
	MR_r2 = ((MR_Word) MR_TAG_COMMON(0,0,0));
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__list__map_2_0,
		main_2_0_i8);
MR_def_label(main_2_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 0);
	MR_r3 = ((MR_Word) MR_TAG_COMMON(0,2,1));
	MR_r1 = ((MR_Word) MR_STRING_CTOR_ADDR);
	MR_r2 = ((MR_Word) MR_TAG_COMMON(0,0,0));
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__list__map_2_0,
		main_2_0_i8);
MR_def_label(main_2_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Word) MR_TAG_COMMON(0,2,2));
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__filter_3_0,
		main_2_0_i10);
MR_def_label(main_2_0, 10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		main_2_0_i11);
MR_def_label(main_2_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Word) MR_string_const("Part 1: ", 8));
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i12);
MR_def_label(main_2_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__print_line_3_0,
		main_2_0_i13);
MR_def_label(main_2_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Word) MR_string_const("Part 2: ", 8));
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i14);
MR_def_label(main_2_0, 14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(a03__transpose_2_0,
		main_2_0_i15);
MR_def_label(main_2_0, 15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		main_2_0_i16);
MR_def_label(main_2_0, 16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 3;
	}
	MR_np_call_localret_ent(list__chunk_3_0,
		main_2_0_i17);
MR_def_label(main_2_0, 17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Word) MR_TAG_COMMON(0,2,3));
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		main_2_0_i19);
MR_def_label(main_2_0, 19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		main_2_0_i20);
MR_def_label(main_2_0, 20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__print_line_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__sort_2_0);
MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(a03_module1)
	MR_init_entry1(a03__chk_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__a03__chk_1_0);
	MR_init_label4(a03__chk_1_0,2,3,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'chk'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(a03__chk_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = ((MR_Word) MR_succip);
	MR_sv(2) = MR_r1;
	MR_sv(1) = (MR_Integer) 3;
	MR_sv(3) = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		a03__chk_1_0_i2);
MR_def_label(a03__chk_1_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(a03__chk_1_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Unsigned) 0U;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		a03__chk_1_0_i3);
MR_def_label(a03__chk_1_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(a03__chk_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(a03__chk_1_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(a03__chk_1_0_i1);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,0,0));
	MR_r2 = (MR_Unsigned) 0U;
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		a03__chk_1_0_i7);
MR_def_label(a03__chk_1_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(a03__chk_1_0_i1);
	}
	MR_r1 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_sv(2)) + (MR_Unsigned) ((MR_Integer) MR_sv(1)));
	MR_r1 = (((MR_Integer) MR_sv(3)) < ((MR_Integer) MR_r1));
	MR_decr_sp_and_return(4);
MR_def_label(a03__chk_1_0, 1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(a03_module2)
	MR_init_entry1(a03__transpose_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__a03__transpose_2_0);
	MR_init_label5(a03__transpose_2_0,5,3,8,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transpose'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(a03__transpose_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = ((MR_Word) MR_succip);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(a03__transpose_2_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Unsigned) 0U;
	MR_decr_sp_and_return(3);
MR_def_label(a03__transpose_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(a03__transpose_2_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Unsigned) 0U;
	MR_decr_sp_and_return(3);
MR_def_label(a03__transpose_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = ((MR_Word) MR_TAG_COMMON(0,0,0));
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_r3 = ((MR_Word) MR_TAG_COMMON(0,2,4));
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		a03__transpose_2_0_i8);
MR_def_label(a03__transpose_2_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r3 = ((MR_Word) MR_TAG_COMMON(0,2,5));
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		a03__transpose_2_0_i10);
MR_def_label(a03__transpose_2_0, 10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(a03__transpose_2_0,
		a03__transpose_2_0_i11);
MR_def_label(a03__transpose_2_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__split_at_char_2_0);
MR_decl_entry(list__filter_map_3_0);

MR_BEGIN_MODULE(a03_module3)
	MR_init_entry1(fn__a03__IntroducedFrom__func__main__29__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__a03__IntroducedFrom__func__main__29__1_1_0);
	MR_init_label1(fn__a03__IntroducedFrom__func__main__29__1_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__main__29__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__a03__IntroducedFrom__func__main__29__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	MR_sv(1) = ((MR_Word) MR_TAG_COMMON(0,2,6));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 32;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__split_at_char_2_0,
		fn__a03__IntroducedFrom__func__main__29__1_1_0_i3);
MR_def_label(fn__a03__IntroducedFrom__func__main__29__1_1_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_STRING_CTOR_ADDR);
	MR_r2 = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__filter_map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__det_head_1_0);

MR_BEGIN_MODULE(a03_module4)
	MR_init_entry1(fn__a03__IntroducedFrom__func__transpose__20__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__a03__IntroducedFrom__func__transpose__20__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__transpose__20__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__a03__IntroducedFrom__func__transpose__20__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__list__det_head_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__det_tail_1_0);

MR_BEGIN_MODULE(a03_module5)
	MR_init_entry1(fn__a03__IntroducedFrom__func__transpose__21__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__a03__IntroducedFrom__func__transpose__21__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__transpose__21__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__a03__IntroducedFrom__func__transpose__21__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__list__det_tail_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__a03_maybe_bunch_0(void)
{
	a03_module0();
	a03_module1();
	a03_module2();
	a03_module3();
	a03_module4();
	a03_module5();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__a03__init(void);
void mercury__a03__init_type_tables(void);
void mercury__a03__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__a03__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__a03__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__a03__init_threadscope_string_table(void);
#endif
const char *mercury__a03__grade_check(void);

void mercury__a03__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__a03_maybe_bunch_0();
	mercury__a03__init_debugger();
}

void mercury__a03__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__a03__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__a03__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__a03);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__a03__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__a03__init_threadscope_string_table(void)
{
}

#endif

// Ensure everything is compiled with the same grade.
const char *mercury__a03__grade_check(void)
{
    return &MR_GRADE_VAR;
}
