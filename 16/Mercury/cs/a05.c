/*
** Automatically generated from `a05.m'
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
INIT mercury__a05__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 28 "Mercury/cs/a05.c"
#include "a05.mh"

#line 31 "Mercury/cs/a05.c"
#line 32 "Mercury/cs/a05.c"
#include "array.mh"

#line 35 "Mercury/cs/a05.c"
#line 36 "Mercury/cs/a05.c"
#include "bitmap.mh"

#line 39 "Mercury/cs/a05.c"
#line 40 "Mercury/cs/a05.c"
#include "io.mh"

#line 43 "Mercury/cs/a05.c"
#line 44 "Mercury/cs/a05.c"
#include "string.mh"

#line 47 "Mercury/cs/a05.c"
#line 48 "Mercury/cs/a05.c"
#include "time.mh"

#line 51 "Mercury/cs/a05.c"
#line 52 "Mercury/cs/a05.c"
#ifndef A05_DECL_GUARD
#define A05_DECL_GUARD

#line 56 "Mercury/cs/a05.c"
#line 57 "Mercury/cs/a05.c"

#endif
#line 60 "Mercury/cs/a05.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
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
MR_decl_label9(a05__f_p1_4_0, 16,2,5,6,7,9,10,12,8)
MR_decl_label10(a05__f_p2_5_0, 24,2,5,6,7,9,10,13,16,20)
MR_decl_label1(a05__f_p2_5_0, 8)
MR_decl_label7(main_2_0, 2,3,4,5,6,8,9)
MR_def_extern_entry(main_2_0)
MR_decl_static(a05__f_p1_4_0)
MR_decl_static(a05__f_p2_5_0)
MR_decl_static(fn__a05__IntroducedFrom__func__main__35__1_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
MR_CTOR0_ADDR(builtin, tuple),
2,
MR_INT_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
},
{
MR_CTOR0_ADDR(builtin, tuple),
2,
MR_INT_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_1,
((MR_Word *) (MR_Integer) 0),
2,
MR_COMMON(0,1),
MR_CHAR_CTOR_ADDR
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(fn__a05__IntroducedFrom__func__main__35__1_1_0),
0
},
};


static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1 = {
{
MR_FUNCTION,
"a05",
"a05",
"lambda_a05_m_35",
2,
0
},
"a05",
"a05.m",
35,
"16"
};


MR_decl_entry(string__from_char_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(io__print_line_3_0);
MR_decl_entry(list__sort_2_0);
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(a05_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label7(main_2_0,2,3,4,5,6,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = ((MR_Word) MR_succip);
	MR_save_maxfr(MR_sv(3));
	MR_sv(2) = ((MR_Word) MR_string_const("ojvtpuvg", 8));
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 8;
	MR_np_call_localret_ent(a05__f_p1_4_0,
		main_2_0_i2);
MR_def_label(main_2_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(3));
	MR_np_call_localret_ent(string__from_char_list_2_0,
		main_2_0_i3);
MR_def_label(main_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Word) MR_STRING_CTOR_ADDR);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__print_line_3_0,
		main_2_0_i4);
MR_def_label(main_2_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_save_maxfr(MR_sv(3));
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 8;
	MR_r4 = (MR_Unsigned) 0U;
	MR_np_call_localret_ent(a05__f_p2_5_0,
		main_2_0_i5);
MR_def_label(main_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(3));
	MR_sv(2) = ((MR_Word) MR_TAG_COMMON(0,0,0));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		main_2_0_i6);
MR_def_label(main_2_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Word) MR_CHAR_CTOR_ADDR);
	MR_r3 = ((MR_Word) MR_TAG_COMMON(0,2,0));
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		main_2_0_i8);
MR_def_label(main_2_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		main_2_0_i9);
MR_def_label(main_2_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__print_line_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(fn__string__from_int_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__md5__md5sum_1_0);
MR_decl_entry(string__split_4_0);
MR_decl_entry(string__first_char_3_3);

MR_BEGIN_MODULE(a05_module1)
	MR_init_entry1(a05__f_p1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__a05__f_p1_4_0);
	MR_init_label9(a05__f_p1_4_0,16,2,5,6,7,9,10,12,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'f_p1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(a05__f_p1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe_no_redoip("pred a05.f_p1/4-0", 4);
MR_def_label(a05__f_p1_4_0, 16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = ((MR_Word) MR_ENTRY(MR_do_fail));
	MR_redoip_slot_word(MR_maxfr) = ((MR_Word) MR_LABEL_AP(a05__f_p1_4_0_i2));
	MR_fv(3) = MR_r1;
	MR_fv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_fv(2) = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(a05__f_p1_4_0_i2);
	}
	MR_r1 = (MR_Unsigned) 0U;
	MR_succeed();
	}
MR_def_label(a05__f_p1_4_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(3);
	MR_r2 = MR_fv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(2);
	MR_redoip_slot_word(MR_curfr) = ((MR_Word) MR_ENTRY(MR_do_fail));
	MR_fv(3) = MR_r1;
	MR_fv(1) = MR_r2;
	MR_fv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		a05__f_p1_4_0_i5);
MR_def_label(a05__f_p1_4_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		a05__f_p1_4_0_i6);
MR_def_label(a05__f_p1_4_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__md5__md5sum_1_0,
		a05__f_p1_4_0_i7);
MR_def_label(a05__f_p1_4_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(4) = ((MR_Word) MR_string_const("00000", 5));
	MR_r2 = (MR_Integer) 5;
	MR_np_call_localret_ent(string__split_4_0,
		a05__f_p1_4_0_i9);
MR_def_label(a05__f_p1_4_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) ((MR_Word *) MR_fv(4)), (char *) ((MR_Word *) MR_r1)) != 0)) {
		MR_GOTO_LAB(a05__f_p1_4_0_i8);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__first_char_3_3,
		a05__f_p1_4_0_i10);
MR_def_label(a05__f_p1_4_0, 10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(a05__f_p1_4_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(3);
	MR_fv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_fv(1)) + (MR_Unsigned) (MR_Integer) 1);
	MR_r3 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_fv(2)) - (MR_Unsigned) (MR_Integer) 1);
	}
	MR_np_localcall_lab(a05__f_p1_4_0,
		a05__f_p1_4_0_i12);
MR_def_label(a05__f_p1_4_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_fv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_succeed();
MR_def_label(a05__f_p1_4_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(3);
	MR_r2 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_fv(1)) + (MR_Unsigned) (MR_Integer) 1);
	MR_r3 = MR_fv(2);
	MR_GOTO_LAB(a05__f_p1_4_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);
MR_decl_entry(char__octal_digit_to_int_2_0);
MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(a05_module2)
	MR_init_entry1(a05__f_p2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__a05__f_p2_5_0);
	MR_init_label10(a05__f_p2_5_0,24,2,5,6,7,9,10,13,16,20)
	MR_init_label1(a05__f_p2_5_0,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'f_p2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(a05__f_p2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe_no_redoip("pred a05.f_p2/5-0", 6);
MR_def_label(a05__f_p2_5_0, 24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = ((MR_Word) MR_ENTRY(MR_do_fail));
	MR_redoip_slot_word(MR_maxfr) = ((MR_Word) MR_LABEL_AP(a05__f_p2_5_0_i2));
	MR_fv(6) = MR_r1;
	MR_fv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_fv(2) = MR_tempr1;
	MR_fv(3) = MR_r4;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(a05__f_p2_5_0_i2);
	}
	MR_r1 = (MR_Unsigned) 0U;
	MR_succeed();
	}
MR_def_label(a05__f_p2_5_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(6);
	MR_r2 = MR_fv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_fv(2);
	MR_tempr2 = MR_fv(3);
	MR_redoip_slot_word(MR_curfr) = ((MR_Word) MR_ENTRY(MR_do_fail));
	MR_fv(6) = MR_r1;
	MR_fv(1) = MR_r2;
	MR_fv(2) = MR_tempr1;
	MR_fv(3) = MR_tempr2;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		a05__f_p2_5_0_i5);
MR_def_label(a05__f_p2_5_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		a05__f_p2_5_0_i6);
MR_def_label(a05__f_p2_5_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__md5__md5sum_1_0,
		a05__f_p2_5_0_i7);
MR_def_label(a05__f_p2_5_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(5) = ((MR_Word) MR_string_const("00000", 5));
	MR_r2 = (MR_Integer) 5;
	MR_np_call_localret_ent(string__split_4_0,
		a05__f_p2_5_0_i9);
MR_def_label(a05__f_p2_5_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) ((MR_Word *) MR_fv(5)), (char *) ((MR_Word *) MR_r1)) != 0)) {
		MR_GOTO_LAB(a05__f_p2_5_0_i8);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		a05__f_p2_5_0_i10);
MR_def_label(a05__f_p2_5_0, 10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(a05__f_p2_5_0_i8);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(a05__f_p2_5_0_i8);
	}
	MR_fv(5) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(char__octal_digit_to_int_2_0,
		a05__f_p2_5_0_i13);
MR_def_label(a05__f_p2_5_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(a05__f_p2_5_0_i8);
	}
	MR_fv(4) = MR_r2;
	MR_r1 = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_r3 = MR_fv(3);
	MR_np_call_localret_ent(list__member_2_0,
		a05__f_p2_5_0_i16);
MR_def_label(a05__f_p2_5_0, 16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(a05__f_p2_5_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr4 = MR_fv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = MR_fv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = MR_fv(3);
	MR_tempr3 = MR_fv(6);
	MR_fv(6) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_fv(1)) + (MR_Unsigned) (MR_Integer) 1);
	MR_r3 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_fv(2)) - (MR_Unsigned) (MR_Integer) 1);
	}
	MR_np_localcall_lab(a05__f_p2_5_0,
		a05__f_p2_5_0_i20);
MR_def_label(a05__f_p2_5_0, 20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_fv(6);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_succeed();
MR_def_label(a05__f_p2_5_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(6);
	MR_r2 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_fv(1)) + (MR_Unsigned) (MR_Integer) 1);
	MR_r3 = MR_fv(2);
	MR_r4 = MR_fv(3);
	MR_GOTO_LAB(a05__f_p2_5_0_i24);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(a05_module3)
	MR_init_entry1(fn__a05__IntroducedFrom__func__main__35__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__a05__IntroducedFrom__func__main__35__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__main__35__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__a05__IntroducedFrom__func__main__35__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__a05_maybe_bunch_0(void)
{
	a05_module0();
	a05_module1();
	a05_module2();
	a05_module3();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__a05__init(void);
void mercury__a05__init_type_tables(void);
void mercury__a05__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__a05__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__a05__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__a05__init_threadscope_string_table(void);
#endif
const char *mercury__a05__grade_check(void);

void mercury__a05__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__a05_maybe_bunch_0();
	mercury__a05__init_debugger();
}

void mercury__a05__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__a05__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__a05__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__a05);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__a05__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__a05__init_threadscope_string_table(void)
{
}

#endif

// Ensure everything is compiled with the same grade.
const char *mercury__a05__grade_check(void)
{
    return &MR_GRADE_VAR;
}
