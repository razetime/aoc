/*
** Automatically generated from `t_a07.m'
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
INIT mercury__t_a07__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 28 "Mercury/cs/t_a07.c"
#include "array.mh"

#line 31 "Mercury/cs/t_a07.c"
#line 32 "Mercury/cs/t_a07.c"
#include "bitmap.mh"

#line 35 "Mercury/cs/t_a07.c"
#line 36 "Mercury/cs/t_a07.c"
#include "io.mh"

#line 39 "Mercury/cs/t_a07.c"
#line 40 "Mercury/cs/t_a07.c"
#include "string.mh"

#line 43 "Mercury/cs/t_a07.c"
#line 44 "Mercury/cs/t_a07.c"
#include "t_a07.mh"

#line 47 "Mercury/cs/t_a07.c"
#line 48 "Mercury/cs/t_a07.c"
#include "time.mh"

#line 51 "Mercury/cs/t_a07.c"
#line 52 "Mercury/cs/t_a07.c"
#ifndef T_A07_DECL_GUARD
#define T_A07_DECL_GUARD

#line 56 "Mercury/cs/t_a07.c"
#line 57 "Mercury/cs/t_a07.c"

#endif
#line 60 "Mercury/cs/t_a07.c"

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
MR_decl_label4(t_a07__IntroducedFrom__pred__main__25__1_1_0, 3,4,5,2)
MR_decl_label3(t_a07__abba_1_0, 7,6,1)
MR_decl_label3(main_2_0, 2,4,5)
MR_decl_label10(t_a07__tls_4_0, 3,6,2,8,10,14,16,20,24,28)
MR_def_extern_entry(main_2_0)
MR_decl_static(t_a07__tls_4_0)
MR_decl_static(t_a07__abba_1_0)
MR_decl_static(t_a07__IntroducedFrom__pred__main__25__1_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_0 mercury_common_0[2] =
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
MR_CHAR_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__t_a07__tls_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const MR_UserClosureId
mercury_data__closure_layout__t_a07__tls_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__t_a07__tls_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__t_a07__tls_4_0_4;
static const struct mercury_type_1 mercury_common_1[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_1,
((MR_Word *) (MR_Integer) 0),
1,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__t_a07__tls_4_0_1,
((MR_Word *) (MR_Integer) 0),
1,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__t_a07__tls_4_0_2,
((MR_Word *) (MR_Integer) 0),
1,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__t_a07__tls_4_0_3,
((MR_Word *) (MR_Integer) 0),
1,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__t_a07__tls_4_0_4,
((MR_Word *) (MR_Integer) 0),
1,
MR_COMMON(0,1)
},
};

MR_decl_entry(char__is_alpha_1_0);
static const struct mercury_type_2 mercury_common_2[5] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(t_a07__IntroducedFrom__pred__main__25__1_1_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(char__is_alpha_1_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(char__is_alpha_1_0),
0
},
{
MR_COMMON(1,3),
MR_ENTRY_AP(char__is_alpha_1_0),
0
},
{
MR_COMMON(1,4),
MR_ENTRY_AP(t_a07__abba_1_0),
0
},
};


static const MR_UserClosureId
mercury_data__closure_layout__t_a07__tls_4_0_4 = {
{
MR_PREDICATE,
"t_a07",
"t_a07",
"abba",
1,
0
},
"t_a07",
"t_a07.m",
14,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__t_a07__tls_4_0_3 = {
{
MR_PREDICATE,
"char",
"char",
"is_alpha",
1,
0
},
"t_a07",
"t_a07.m",
17,
"3"
};

static const MR_UserClosureId
mercury_data__closure_layout__t_a07__tls_4_0_2 = {
{
MR_PREDICATE,
"char",
"char",
"is_alpha",
1,
0
},
"t_a07",
"t_a07.m",
17,
"3"
};

static const MR_UserClosureId
mercury_data__closure_layout__t_a07__tls_4_0_1 = {
{
MR_PREDICATE,
"char",
"char",
"is_alpha",
1,
0
},
"t_a07",
"t_a07.m",
17,
"3"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1 = {
{
MR_PREDICATE,
"t_a07",
"t_a07",
"lambda_t_a07_m_25",
1,
0
},
"t_a07",
"t_a07.m",
25,
"6"
};


MR_decl_entry(alib__rlines_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__filter_3_0);
MR_decl_entry(list__length_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(io__print_line_3_0);

MR_BEGIN_MODULE(t_a07_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label3(main_2_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	MR_r1 = ((MR_Word) MR_string_const("inp/07", 6));
	MR_np_call_localret_ent(alib__rlines_4_0,
		main_2_0_i2);
MR_def_label(main_2_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Word) MR_STRING_CTOR_ADDR);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Word) MR_TAG_COMMON(0,2,0));
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		main_2_0_i4);
MR_def_label(main_2_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		main_2_0_i5);
MR_def_label(main_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__print_line_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(alib__seq_3_0);
MR_decl_entry(list__all_true_2_0);
MR_declare_entry(MR_do_redo);
MR_declare_entry(MR_do_fail);
MR_decl_entry(list__any_true_2_0);

MR_BEGIN_MODULE(t_a07_module1)
	MR_init_entry1(t_a07__tls_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__t_a07__tls_4_0);
	MR_init_label10(t_a07__tls_4_0,3,6,2,8,10,14,16,20,24,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'tls'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(t_a07__tls_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred t_a07.tls/4-0", 6,
		MR_LABEL_AP(t_a07__tls_4_0_i2));
	MR_fv(3) = MR_r1;
	MR_fv(1) = (MR_Unsigned) 0U;
	MR_fv(4) = (MR_Unsigned) 0U;
	MR_r1 = ((MR_Word) MR_CHAR_CTOR_ADDR);
	MR_r2 = MR_fv(3);
	MR_np_call_localret_ent(alib__seq_3_0,
		t_a07__tls_4_0_i3);
MR_def_label(t_a07__tls_4_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_fv(5) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_fv(4);
	MR_fv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = ((MR_Word) MR_CHAR_CTOR_ADDR);
	MR_r2 = ((MR_Word) MR_TAG_COMMON(0,2,1));
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__all_true_2_0,
		t_a07__tls_4_0_i6);
MR_def_label(t_a07__tls_4_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(5);
	MR_r2 = MR_fv(1);
	MR_r3 = MR_fv(2);
	MR_succeed();
MR_def_label(t_a07__tls_4_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = ((MR_Word) MR_ENTRY(MR_do_fail));
	MR_fv(6) = ((MR_Word) MR_CHAR_CTOR_ADDR);
	MR_r1 = MR_fv(6);
	MR_r2 = MR_fv(3);
	MR_np_call_localret_ent(alib__seq_3_0,
		t_a07__tls_4_0_i8);
MR_def_label(t_a07__tls_4_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_fv(5) = MR_r2;
	MR_r1 = ((MR_Word) MR_CHAR_CTOR_ADDR);
	MR_r2 = ((MR_Word) MR_TAG_COMMON(0,2,2));
	MR_r3 = MR_fv(3);
	MR_np_call_localret_ent(list__all_true_2_0,
		t_a07__tls_4_0_i10);
MR_def_label(t_a07__tls_4_0, 10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_INT_EQ(MR_fv(5),0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(5);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r3,91)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(6);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(alib__seq_3_0,
		t_a07__tls_4_0_i14);
MR_def_label(t_a07__tls_4_0, 14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(4) = MR_r1;
	MR_fv(5) = MR_r2;
	MR_r1 = ((MR_Word) MR_CHAR_CTOR_ADDR);
	MR_r2 = ((MR_Word) MR_TAG_COMMON(0,2,3));
	MR_r3 = MR_fv(4);
	MR_np_call_localret_ent(list__all_true_2_0,
		t_a07__tls_4_0_i16);
MR_def_label(t_a07__tls_4_0, 16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(4);
	MR_np_call_localret_ent(t_a07__abba_1_0,
		t_a07__tls_4_0_i20);
MR_def_label(t_a07__tls_4_0, 20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_INT_EQ(MR_fv(5),0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(5);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r2,93)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_localcall_lab(t_a07__tls_4_0,
		t_a07__tls_4_0_i24);
MR_def_label(t_a07__tls_4_0, 24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_fv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_fv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_fv(5) = MR_tempr1;
	MR_fv(2) = MR_r3;
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,0,0));
	MR_r2 = ((MR_Word) MR_TAG_COMMON(0,2,4));
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__any_true_2_0,
		t_a07__tls_4_0_i28);
MR_def_label(t_a07__tls_4_0, 28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(5);
	MR_r2 = MR_fv(1);
	MR_r3 = MR_fv(2);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(t_a07_module2)
	MR_init_entry1(t_a07__abba_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__t_a07__abba_1_0);
	MR_init_label3(t_a07__abba_1_0,7,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abba'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(t_a07__abba_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(t_a07__abba_1_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(t_a07__abba_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(t_a07__abba_1_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(t_a07__abba_1_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_r2, 0);
	MR_tempr4 = MR_tfield(1, MR_tempr1, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(t_a07__abba_1_0_i7);
	}
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	if ((MR_tempr1 != MR_r1)) {
		MR_GOTO_LAB(t_a07__abba_1_0_i7);
	}
	if ((MR_tempr1 != MR_tempr3)) {
		MR_GOTO_LAB(t_a07__abba_1_0_i6);
	}
	}
MR_def_label(t_a07__abba_1_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_localtailcall(t_a07__abba_1_0);
MR_def_label(t_a07__abba_1_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(t_a07__abba_1_0, 1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);
MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(t_a07_module3)
	MR_init_entry1(t_a07__IntroducedFrom__pred__main__25__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__t_a07__IntroducedFrom__pred__main__25__1_1_0);
	MR_init_label4(t_a07__IntroducedFrom__pred__main__25__1_1_0,3,4,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__main__25__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(t_a07__IntroducedFrom__pred__main__25__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = ((MR_Word) MR_succip);
	MR_sv(2) = ((MR_Word) MR_redoip_slot(MR_maxfr));
	MR_sv(3) = ((MR_Word) MR_redofr_slot(MR_maxfr));
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = ((MR_Word) MR_curfr);
	MR_redoip_slot_word(MR_maxfr) = ((MR_Word) MR_LABEL_AP(t_a07__IntroducedFrom__pred__main__25__1_1_0_i2));
	MR_np_call_localret_ent(string__to_char_list_2_0,
		t_a07__IntroducedFrom__pred__main__25__1_1_0_i3);
MR_def_label(t_a07__IntroducedFrom__pred__main__25__1_1_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Unsigned) 0U;
	MR_np_call_localret_ent(t_a07__tls_4_0,
		t_a07__IntroducedFrom__pred__main__25__1_1_0_i4);
MR_def_label(t_a07__IntroducedFrom__pred__main__25__1_1_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,0,0));
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(builtin__unify_2_0,
		t_a07__IntroducedFrom__pred__main__25__1_1_0_i5);
MR_def_label(t_a07__IntroducedFrom__pred__main__25__1_1_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(t_a07__IntroducedFrom__pred__main__25__1_1_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__t_a07_maybe_bunch_0(void)
{
	t_a07_module0();
	t_a07_module1();
	t_a07_module2();
	t_a07_module3();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__t_a07__init(void);
void mercury__t_a07__init_type_tables(void);
void mercury__t_a07__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__t_a07__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__t_a07__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__t_a07__init_threadscope_string_table(void);
#endif
const char *mercury__t_a07__grade_check(void);

void mercury__t_a07__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__t_a07_maybe_bunch_0();
	mercury__t_a07__init_debugger();
}

void mercury__t_a07__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__t_a07__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__t_a07__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__t_a07);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__t_a07__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__t_a07__init_threadscope_string_table(void)
{
}

#endif

// Ensure everything is compiled with the same grade.
const char *mercury__t_a07__grade_check(void)
{
    return &MR_GRADE_VAR;
}
