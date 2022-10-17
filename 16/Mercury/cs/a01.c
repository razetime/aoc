/*
** Automatically generated from `a01.m'
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
INIT mercury__a01__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 28 "Mercury/cs/a01.c"
#include "a01.mh"

#line 31 "Mercury/cs/a01.c"
#line 32 "Mercury/cs/a01.c"
#include "array.mh"

#line 35 "Mercury/cs/a01.c"
#line 36 "Mercury/cs/a01.c"
#include "bitmap.mh"

#line 39 "Mercury/cs/a01.c"
#line 40 "Mercury/cs/a01.c"
#include "io.mh"

#line 43 "Mercury/cs/a01.c"
#line 44 "Mercury/cs/a01.c"
#include "string.mh"

#line 47 "Mercury/cs/a01.c"
#line 48 "Mercury/cs/a01.c"
#include "time.mh"

#line 51 "Mercury/cs/a01.c"
#line 52 "Mercury/cs/a01.c"
#ifndef A01_DECL_GUARD
#define A01_DECL_GUARD

#line 56 "Mercury/cs/a01.c"
#line 57 "Mercury/cs/a01.c"

#endif
#line 60 "Mercury/cs/a01.c"

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
	MR_Integer f1;
	MR_Word * f2;
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
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
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
	MR_Code * f2;
	MR_Integer f3;
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
	MR_Word * f3[6];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];
MR_decl_label1(a01__IntroducedFrom__pred__entry__14__1_2_0, 2)
MR_decl_label5(a01__IntroducedFrom__pred__entry__17__1_6_0, 4,5,7,9,10)
MR_decl_label1(a01__abs_sum_2_0, 3)
MR_decl_label4(a01__entry_3_0, 2,5,3,7)
MR_decl_label3(a01__first_rep_2_0, 3,5,4)
MR_decl_label3(a01__inter_4_0, 2,6,7)
MR_decl_label10(main_2_0, 2,5,4,9,12,13,14,11,16,17)
MR_decl_label10(main_2_0, 18,19,20,21,22,23,24,25,26,27)
MR_decl_label1(main_2_0, 28)
MR_decl_label2(a01__rot_3_0, 7,2)
MR_def_extern_entry(main_2_0)
MR_decl_static(a01__entry_3_0)
MR_decl_static(a01__rot_3_0)
MR_decl_static(a01__inter_4_0)
MR_decl_static(a01__first_rep_2_0)
MR_decl_static(a01__abs_sum_2_0)
MR_decl_static(a01__IntroducedFrom__pred__entry__14__1_2_0)
MR_decl_static(a01__IntroducedFrom__pred__entry__20__1_3_0)
MR_decl_static(a01__IntroducedFrom__pred__entry__17__1_6_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_0 mercury_common_0[7] =
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
MR_STRING_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,0)
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
MR_INT_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,4)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const struct mercury_type_1 mercury_common_1[6] =
{
{
1,
((MR_Word *) (MR_Unsigned) 0U)
},
{
0,
MR_TAG_COMMON(1,1,0)
},
{
0,
((MR_Word *) (MR_Unsigned) 0U)
},
{
0,
MR_TAG_COMMON(1,1,2)
},
{
-1,
((MR_Word *) (MR_Unsigned) 0U)
},
{
-1,
MR_TAG_COMMON(1,1,4)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__a01__entry_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__a01__abs_sum_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__a01__entry_3_0_1,
((MR_Word *) (MR_Integer) 0),
2,
MR_STRING_CTOR_ADDR,
MR_COMMON(0,3)
},
{
(MR_Word *) &mercury_data__closure_layout__a01__abs_sum_2_0_1,
((MR_Word *) (MR_Integer) 0),
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
};

MR_decl_entry(fn__f_105_110_116_95_95_43_2_0);
MR_decl_entry(fn__int__abs_1_0);
static const struct mercury_type_3 mercury_common_3[6] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(a01__IntroducedFrom__pred__entry__14__1_2_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(a01__IntroducedFrom__pred__entry__17__1_6_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(fn__f_105_110_116_95_95_43_2_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(fn__int__abs_1_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(fn__f_105_110_116_95_95_43_2_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(fn__f_105_110_116_95_95_43_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__a01__entry_3_0_2;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__a01__entry_3_0_2,
((MR_Word *) (MR_Integer) 0)
},
6,
{
MR_COMMON(0,3),
MR_COMMON(0,5),
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__a01__inter_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__a01__abs_sum_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__a01__IntroducedFrom__pred__entry__17__1_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__a01__IntroducedFrom__pred__entry__17__1_6_0_2;
static const struct mercury_type_5 mercury_common_5[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__a01__inter_4_0_1,
((MR_Word *) (MR_Integer) 0)
},
3,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__a01__abs_sum_2_0_2,
((MR_Word *) (MR_Integer) 0)
},
3,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__a01__IntroducedFrom__pred__entry__17__1_6_0_1,
((MR_Word *) (MR_Integer) 0)
},
3,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__a01__IntroducedFrom__pred__entry__17__1_6_0_2,
((MR_Word *) (MR_Integer) 0)
},
3,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__a01__IntroducedFrom__pred__entry__17__1_6_0_2 = {
{
MR_FUNCTION,
"int",
"int",
"+",
3,
0
},
"a01",
"a01.m",
21,
"34"
};

static const MR_UserClosureId
mercury_data__closure_layout__a01__IntroducedFrom__pred__entry__17__1_6_0_1 = {
{
MR_PREDICATE,
"a01",
"a01",
"lambda_a01_m_20",
3,
0
},
"a01",
"a01.m",
20,
"27"
};

static const MR_UserClosureId
mercury_data__closure_layout__a01__abs_sum_2_0_2 = {
{
MR_FUNCTION,
"int",
"int",
"+",
3,
0
},
"a01",
"a01.m",
52,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__a01__abs_sum_2_0_1 = {
{
MR_FUNCTION,
"int",
"int",
"abs",
2,
0
},
"a01",
"a01.m",
51,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__a01__inter_4_0_1 = {
{
MR_FUNCTION,
"int",
"int",
"+",
3,
0
},
"a01",
"a01.m",
41,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__a01__entry_3_0_2 = {
{
MR_PREDICATE,
"a01",
"a01",
"lambda_a01_m_17",
6,
0
},
"a01",
"a01.m",
17,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__a01__entry_3_0_1 = {
{
MR_PREDICATE,
"a01",
"a01",
"lambda_a01_m_14",
2,
0
},
"a01",
"a01.m",
14,
"5"
};


MR_decl_entry(io__open_input_4_0);
MR_decl_entry(io__stderr_stream_3_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(io__read_file_as_string_4_0);
MR_decl_entry(io__write_string_4_0);
MR_decl_entry(io__set_exit_status_3_0);
MR_decl_entry(io__close_input_3_0);
MR_decl_entry(fn__string__strip_1_0);
MR_decl_entry(fn__string__split_at_string_2_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__print_3_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(fn__list__condense_1_0);

MR_BEGIN_MODULE(a01_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,2,5,4,9,12,13,14,11,16,17)
	MR_init_label10(main_2_0,18,19,20,21,22,23,24,25,26,27)
	MR_init_label1(main_2_0,28)
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
	MR_r1 = ((MR_Word) MR_string_const("inp/01", 6));
	MR_np_call_localret_ent(io__open_input_4_0,
		main_2_0_i2);
MR_def_label(main_2_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),1)) {
		MR_GOTO_LAB(main_2_0_i4);
	}
	MR_sv(1) = ((MR_Word) MR_string_const("", 0));
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		main_2_0_i5);
MR_def_label(main_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		main_2_0_i13);
MR_def_label(main_2_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__read_file_as_string_4_0,
		main_2_0_i9);
MR_def_label(main_2_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),1)) {
		MR_GOTO_LAB(main_2_0_i11);
	}
	MR_sv(1) = ((MR_Word) MR_string_const("", 0));
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		main_2_0_i12);
MR_def_label(main_2_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		main_2_0_i13);
MR_def_label(main_2_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		main_2_0_i14);
MR_def_label(main_2_0, 14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		main_2_0_i16);
MR_def_label(main_2_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__close_input_3_0,
		main_2_0_i16);
MR_def_label(main_2_0, 16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__strip_1_0,
		main_2_0_i17);
MR_def_label(main_2_0, 17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_string_const(", ", 2));
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__split_at_string_2_0,
		main_2_0_i18);
MR_def_label(main_2_0, 18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_save_maxfr(MR_sv(3));
	MR_np_call_localret_ent(a01__entry_3_0,
		main_2_0_i19);
MR_def_label(main_2_0, 19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(3));
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = ((MR_Word) MR_string_const("Part 1: ", 8));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i20);
MR_def_label(main_2_0, 20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(a01__abs_sum_2_0,
		main_2_0_i21);
MR_def_label(main_2_0, 21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Word) MR_INT_CTOR_ADDR);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i22);
MR_def_label(main_2_0, 22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		main_2_0_i23);
MR_def_label(main_2_0, 23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("Part 2: ", 8));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i24);
MR_def_label(main_2_0, 24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,0,0));
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__condense_1_0,
		main_2_0_i25);
MR_def_label(main_2_0, 25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(a01__first_rep_2_0,
		main_2_0_i26);
MR_def_label(main_2_0, 26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(a01__abs_sum_2_0,
		main_2_0_i27);
MR_def_label(main_2_0, 27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i28);
MR_def_label(main_2_0, 28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(list__map_3_0);
MR_decl_entry(list__map_foldl2_7_10);
MR_decl_entry(require__unexpected_2_0);

MR_BEGIN_MODULE(a01_module1)
	MR_init_entry1(a01__entry_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__a01__entry_3_0);
	MR_init_label4(a01__entry_3_0,2,5,3,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'entry'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(a01__entry_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred a01.entry/3-0", 1,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = ((MR_Word) MR_TAG_COMMON(0,0,1));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_STRING_CTOR_ADDR);
	MR_r2 = MR_fv(1);
	MR_r3 = ((MR_Word) MR_TAG_COMMON(0,3,0));
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		a01__entry_3_0_i2);
MR_def_label(a01__entry_3_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = ((MR_Word) MR_LABEL_AP(a01__entry_3_0_i3));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = ((MR_Word) MR_TAG_COMMON(0,0,2));
	MR_r3 = ((MR_Word) MR_TAG_COMMON(0,0,0));
	MR_r4 = MR_r3;
	MR_r5 = ((MR_Word) MR_TAG_COMMON(0,3,1));
	MR_r6 = MR_tempr1;
	MR_r7 = ((MR_Word) MR_TAG_COMMON(1,1,1));
	MR_r8 = ((MR_Word) MR_TAG_COMMON(1,1,3));
	}
	MR_np_call_localret_ent(list__map_foldl2_7_10,
		a01__entry_3_0_i5);
MR_def_label(a01__entry_3_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = ((MR_Word) MR_ENTRY(MR_do_fail));
	MR_r2 = MR_r3;
	MR_succeed();
MR_def_label(a01__entry_3_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = ((MR_Word) MR_ENTRY(MR_do_fail));
	MR_r1 = ((MR_Word) MR_string_const("predicate \140a01.entry\'/3", 23));
	MR_r2 = ((MR_Word) MR_string_const("Unexpected arguments in call to entry/3", 39));
	MR_np_call_localret_ent(require__unexpected_2_0,
		a01__entry_3_0_i7);
MR_def_label(a01__entry_3_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(a01_module2)
	MR_init_entry1(a01__rot_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__a01__rot_3_0);
	MR_init_label2(a01__rot_3_0,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rot'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(a01__rot_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(a01__rot_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(a01__rot_3_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(a01__rot_3_0_i2);
	}
	if ((strcmp((char *) ((MR_Word *) MR_r1), MR_string_const("L", 1)) != 0)) {
		MR_GOTO_LAB(a01__rot_3_0_i7);
	}
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Unsigned) 0U;
	MR_tempr2 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 0 - (MR_Unsigned) ((MR_Integer) MR_tfield(1, MR_tempr1, 0)));
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_proceed();
	}
MR_def_label(a01__rot_3_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) ((MR_Word *) MR_r1), MR_string_const("R", 1)) != 0)) {
		MR_GOTO_LAB(a01__rot_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 0 - (MR_Unsigned) ((MR_Integer) MR_tfield(1, MR_r2, 0)));
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Unsigned) 0U;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_proceed();
	}
MR_def_label(a01__rot_3_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("predicate \140a01.rot\'/3", 21));
	MR_r2 = ((MR_Word) MR_string_const("Unexpected arguments in call to rot/3", 37));
	MR_np_tailcall_ent(require__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_corresponding_4_0);

MR_BEGIN_MODULE(a01_module3)
	MR_init_entry1(a01__inter_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__a01__inter_4_0);
	MR_init_label3(a01__inter_4_0,2,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inter'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(a01__inter_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred a01.inter/4-0", 3,
		MR_LABEL_AP(a01__inter_4_0_i2));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_fv(3) = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(a01__inter_4_0_i2);
	}
	MR_r1 = (MR_Unsigned) 0U;
	MR_succeed();
	}
MR_def_label(a01__inter_4_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(3);
	MR_redoip_slot_word(MR_curfr) = ((MR_Word) MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_fv(3) = MR_r3;
	MR_r1 = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_r2 = MR_r1;
	MR_r3 = MR_r1;
	MR_r4 = ((MR_Word) MR_TAG_COMMON(0,3,2));
	MR_r5 = MR_fv(1);
	MR_r6 = MR_fv(2);
	MR_np_call_localret_ent(list__map_corresponding_4_0,
		a01__inter_4_0_i6);
MR_def_label(a01__inter_4_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_fv(2);
	MR_r3 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_fv(3)) - (MR_Unsigned) (MR_Integer) 1);
	MR_np_localcall_lab(a01__inter_4_0,
		a01__inter_4_0_i7);
MR_def_label(a01__inter_4_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_fv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(a01_module4)
	MR_init_entry1(a01__first_rep_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__a01__first_rep_2_0);
	MR_init_label3(a01__first_rep_2_0,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'first_rep'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(a01__first_rep_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = ((MR_Word) MR_succip);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(a01__first_rep_2_0_i3);
	}
	MR_r1 = ((MR_Word) MR_TAG_COMMON(1,1,5));
	MR_decr_sp_and_return(3);
MR_def_label(a01__first_rep_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_r3;
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,0,0));
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_0,
		a01__first_rep_2_0_i5);
MR_def_label(a01__first_rep_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(a01__first_rep_2_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(a01__first_rep_2_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(a01__first_rep_2_0_i3);
	}
	MR_r1 = ((MR_Word) MR_TAG_COMMON(1,1,5));
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__list__foldl_3_0);

MR_BEGIN_MODULE(a01_module5)
	MR_init_entry1(a01__abs_sum_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__a01__abs_sum_2_0);
	MR_init_label1(a01__abs_sum_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abs_sum'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(a01__abs_sum_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	MR_sv(1) = ((MR_Word) MR_INT_CTOR_ADDR);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r3 = ((MR_Word) MR_TAG_COMMON(0,3,3));
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		a01__abs_sum_2_0_i3);
MR_def_label(a01__abs_sum_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r3 = ((MR_Word) MR_TAG_COMMON(0,3,4));
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__split_4_0);

MR_BEGIN_MODULE(a01_module6)
	MR_init_entry1(a01__IntroducedFrom__pred__entry__14__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__a01__IntroducedFrom__pred__entry__14__1_2_0);
	MR_init_label1(a01__IntroducedFrom__pred__entry__14__1_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__entry__14__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(a01__IntroducedFrom__pred__entry__14__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = ((MR_Word) MR_succip);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(string__split_4_0,
		a01__IntroducedFrom__pred__entry__14__1_2_0_i2);
MR_def_label(a01__IntroducedFrom__pred__entry__14__1_2_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Unsigned) 0U;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(a01_module7)
	MR_init_entry1(a01__IntroducedFrom__pred__entry__20__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__a01__IntroducedFrom__pred__entry__20__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__entry__20__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(a01__IntroducedFrom__pred__entry__20__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_r2) * (MR_Unsigned) ((MR_Integer) MR_r1));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__string__det_to_int_1_0);

MR_BEGIN_MODULE(a01_module8)
	MR_init_entry1(a01__IntroducedFrom__pred__entry__17__1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__a01__IntroducedFrom__pred__entry__17__1_6_0);
	MR_init_label5(a01__IntroducedFrom__pred__entry__17__1_6_0,4,5,7,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__entry__17__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(a01__IntroducedFrom__pred__entry__17__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_mkframe("pred a01.IntroducedFrom__pred__entry__17__1/6-0", 4,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_r4 = MR_tempr1;
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_fv(2) = MR_r3;
	MR_fv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(a01__rot_3_0,
		a01__IntroducedFrom__pred__entry__17__1_6_0_i4);
MR_def_label(a01__IntroducedFrom__pred__entry__17__1_6_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(1) = MR_r1;
	MR_r1 = MR_fv(3);
	MR_np_call_localret_ent(fn__string__det_to_int_1_0,
		a01__IntroducedFrom__pred__entry__17__1_6_0_i5);
MR_def_label(a01__IntroducedFrom__pred__entry__17__1_6_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Word) MR_COMMON(5,2));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Word) MR_ENTRY_AP(a01__IntroducedFrom__pred__entry__20__1_3_0));
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_fv(3) = MR_r1;
	MR_fv(4) = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_r1 = MR_fv(4);
	MR_r2 = MR_r1;
	MR_r4 = MR_fv(1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		a01__IntroducedFrom__pred__entry__17__1_6_0_i7);
MR_def_label(a01__IntroducedFrom__pred__entry__17__1_6_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(4);
	MR_r2 = MR_r1;
	MR_r3 = MR_r1;
	MR_r4 = ((MR_Word) MR_TAG_COMMON(0,3,5));
	MR_r5 = MR_fv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_corresponding_4_0,
		a01__IntroducedFrom__pred__entry__17__1_6_0_i9);
MR_def_label(a01__IntroducedFrom__pred__entry__17__1_6_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(3);
	MR_fv(3) = MR_r1;
	MR_r1 = MR_fv(2);
	MR_r2 = MR_fv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(a01__inter_4_0,
		a01__IntroducedFrom__pred__entry__17__1_6_0_i10);
MR_def_label(a01__IntroducedFrom__pred__entry__17__1_6_0, 10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_fv(1);
	MR_r3 = MR_fv(3);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__a01_maybe_bunch_0(void)
{
	a01_module0();
	a01_module1();
	a01_module2();
	a01_module3();
	a01_module4();
	a01_module5();
	a01_module6();
	a01_module7();
	a01_module8();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__a01__init(void);
void mercury__a01__init_type_tables(void);
void mercury__a01__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__a01__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__a01__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__a01__init_threadscope_string_table(void);
#endif
const char *mercury__a01__grade_check(void);

void mercury__a01__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__a01_maybe_bunch_0();
	mercury__a01__init_debugger();
}

void mercury__a01__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__a01__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__a01__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__a01);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__a01__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__a01__init_threadscope_string_table(void)
{
}

#endif

// Ensure everything is compiled with the same grade.
const char *mercury__a01__grade_check(void)
{
    return &MR_GRADE_VAR;
}
