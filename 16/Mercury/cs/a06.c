/*
** Automatically generated from `a06.m'
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
INIT mercury__a06__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 28 "Mercury/cs/a06.c"
#include "a06.mh"

#line 31 "Mercury/cs/a06.c"
#line 32 "Mercury/cs/a06.c"
#include "array.mh"

#line 35 "Mercury/cs/a06.c"
#line 36 "Mercury/cs/a06.c"
#include "bitmap.mh"

#line 39 "Mercury/cs/a06.c"
#line 40 "Mercury/cs/a06.c"
#include "io.mh"

#line 43 "Mercury/cs/a06.c"
#line 44 "Mercury/cs/a06.c"
#include "string.mh"

#line 47 "Mercury/cs/a06.c"
#line 48 "Mercury/cs/a06.c"
#include "time.mh"

#line 51 "Mercury/cs/a06.c"
#line 52 "Mercury/cs/a06.c"
#ifndef A06_DECL_GUARD
#define A06_DECL_GUARD

#line 56 "Mercury/cs/a06.c"
#line 57 "Mercury/cs/a06.c"

#endif
#line 60 "Mercury/cs/a06.c"

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
	MR_Word * f3;
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
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];
MR_decl_label1(a06__IntroducedFrom__pred__maxf__15__1_4_0, 2)
MR_decl_label10(main_2_0, 2,5,4,8,9,11,12,13,15,16)
MR_decl_label5(a06__maxf_3_0, 2,3,5,6,7)
MR_def_extern_entry(main_2_0)
MR_decl_static(a06__maxf_3_0)
MR_decl_static(a06__IntroducedFrom__pred__maxf__15__1_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bag__type_ctor_info_bag_1;
static const struct mercury_type_0 mercury_common_0[3] =
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
{
{
MR_CTOR1_ADDR(bag, bag),
MR_CHAR_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_1 mercury_common_1[2] =
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2;
static const struct mercury_type_2 mercury_common_2[2] =
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
};

MR_decl_entry(string__to_char_list_2_0);
static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(string__to_char_list_2_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(string__to_char_list_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_4;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_3,
((MR_Word *) (MR_Integer) 0)
},
3,
{
MR_INT_CTOR_ADDR,
MR_COMMON(0,1),
MR_CHAR_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_4,
((MR_Word *) (MR_Integer) 0)
},
3,
{
MR_INT_CTOR_ADDR,
MR_COMMON(0,1),
MR_CHAR_CTOR_ADDR
}
},
};

static const struct mercury_type_5 mercury_common_5[2] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(a06__maxf_3_0),
1,
-1
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(a06__maxf_3_0),
1,
1
},
};

static const MR_UserClosureId
mercury_data__closure_layout__a06__maxf_3_0_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__a06__maxf_3_0_1,
((MR_Word *) (MR_Integer) 0)
},
4,
{
MR_INT_CTOR_ADDR,
MR_COMMON(0,2),
MR_CHAR_CTOR_ADDR,
MR_COMMON(1,1)
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__a06__maxf_3_0_1 = {
{
MR_PREDICATE,
"a06",
"a06",
"lambda_a06_m_15",
4,
0
},
"a06",
"a06.m",
15,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_4 = {
{
MR_PREDICATE,
"a06",
"a06",
"maxf",
3,
0
},
"a06",
"a06.m",
30,
"27"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3 = {
{
MR_PREDICATE,
"a06",
"a06",
"maxf",
3,
0
},
"a06",
"a06.m",
27,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2 = {
{
MR_PREDICATE,
"string",
"string",
"to_char_list",
2,
0
},
"a06",
"a06.m",
25,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1 = {
{
MR_PREDICATE,
"string",
"string",
"to_char_list",
2,
0
},
"a06",
"a06.m",
25,
"14"
};


MR_decl_entry(io__read_named_file_as_lines_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_error_0;
MR_decl_entry(io__print_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(alib__transpose_2_0);
MR_decl_entry(string__from_char_list_2_0);
MR_decl_entry(io__print_line_3_0);

MR_BEGIN_MODULE(a06_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,2,5,4,8,9,11,12,13,15,16)
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
	MR_r1 = ((MR_Word) MR_string_const("inp/06", 6));
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
	MR_r3 = ((MR_Word) MR_TAG_COMMON(0,3,0));
	MR_r1 = ((MR_Word) MR_STRING_CTOR_ADDR);
	MR_r2 = ((MR_Word) MR_TAG_COMMON(0,0,0));
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(list__map_3_0,
		main_2_0_i8);
MR_def_label(main_2_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 0);
	MR_r3 = ((MR_Word) MR_TAG_COMMON(0,3,1));
	MR_r1 = ((MR_Word) MR_STRING_CTOR_ADDR);
	MR_r2 = ((MR_Word) MR_TAG_COMMON(0,0,0));
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(list__map_3_0,
		main_2_0_i8);
MR_def_label(main_2_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = ((MR_Word) MR_CHAR_CTOR_ADDR);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(alib__transpose_2_0,
		main_2_0_i9);
MR_def_label(main_2_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = ((MR_Word) MR_TAG_COMMON(0,5,0));
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__map_3_0,
		main_2_0_i11);
MR_def_label(main_2_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		main_2_0_i12);
MR_def_label(main_2_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__print_line_3_0,
		main_2_0_i13);
MR_def_label(main_2_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = ((MR_Word) MR_TAG_COMMON(0,5,1));
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__map_3_0,
		main_2_0_i15);
MR_def_label(main_2_0, 15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		main_2_0_i16);
MR_def_label(main_2_0, 16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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

MR_decl_entry(bag__from_list_2_0);
MR_decl_entry(bag__to_list_without_duplicates_2_0);
MR_decl_entry(list__sort_2_0);
MR_decl_entry(fn__list__det_head_1_0);

MR_BEGIN_MODULE(a06_module1)
	MR_init_entry1(a06__maxf_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__a06__maxf_3_0);
	MR_init_label5(a06__maxf_3_0,2,3,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maxf'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(a06__maxf_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = ((MR_Word) MR_succip);
	MR_sv(3) = MR_r1;
	MR_sv(2) = ((MR_Word) MR_CHAR_CTOR_ADDR);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bag__from_list_2_0,
		a06__maxf_3_0_i2);
MR_def_label(a06__maxf_3_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(bag__to_list_without_duplicates_2_0,
		a06__maxf_3_0_i3);
MR_def_label(a06__maxf_3_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Word) MR_COMMON(6,0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Word) MR_ENTRY_AP(a06__IntroducedFrom__pred__maxf__15__1_4_0));
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_sv(3) = ((MR_Word) MR_TAG_COMMON(0,1,0));
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		a06__maxf_3_0_i5);
MR_def_label(a06__maxf_3_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		a06__maxf_3_0_i6);
MR_def_label(a06__maxf_3_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__det_head_1_0,
		a06__maxf_3_0_i7);
MR_def_label(a06__maxf_3_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bag__count_value_3_0);

MR_BEGIN_MODULE(a06_module2)
	MR_init_entry1(a06__IntroducedFrom__pred__maxf__15__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__a06__IntroducedFrom__pred__maxf__15__1_4_0);
	MR_init_label1(a06__IntroducedFrom__pred__maxf__15__1_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__maxf__15__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(a06__IntroducedFrom__pred__maxf__15__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = ((MR_Word) MR_succip);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = ((MR_Word) MR_CHAR_CTOR_ADDR);
	MR_np_call_localret_ent(bag__count_value_3_0,
		a06__IntroducedFrom__pred__maxf__15__1_4_0_i2);
MR_def_label(a06__IntroducedFrom__pred__maxf__15__1_4_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_sv(1)) * (MR_Unsigned) ((MR_Integer) MR_r1));
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__a06_maybe_bunch_0(void)
{
	a06_module0();
	a06_module1();
	a06_module2();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__a06__init(void);
void mercury__a06__init_type_tables(void);
void mercury__a06__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__a06__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__a06__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__a06__init_threadscope_string_table(void);
#endif
const char *mercury__a06__grade_check(void);

void mercury__a06__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__a06_maybe_bunch_0();
	mercury__a06__init_debugger();
}

void mercury__a06__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__a06__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__a06__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__a06);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__a06__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__a06__init_threadscope_string_table(void)
{
}

#endif

// Ensure everything is compiled with the same grade.
const char *mercury__a06__grade_check(void)
{
    return &MR_GRADE_VAR;
}
