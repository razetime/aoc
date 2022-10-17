# vim: ts=8 sw=8 noexpandtab ft=make

# Automatically generated module dependencies for
# module `a02' in source file `a02.m'.
# Generated by Mercury compiler version 22.01-focal1
# configured for x86_64-pc-linux-gnu.

# RULE date_file_deps
# target group names:
#   dates_and_err
# source group names:
#   (unnamed)
#   long deps
#   short deps
#   type_repn self dep
Mercury/optdates/a02.optdate Mercury/trans_opt_dates/a02.trans_opt_date a02.err Mercury/c_dates/a02.c_date Mercury/java_dates/a02.java_date : \
		a02.m \
	\
		Mercury/ints/array2d.int \
		Mercury/ints/builtin.int \
		Mercury/ints/int.int \
		Mercury/ints/io.int \
		Mercury/ints/list.int \
		Mercury/ints/private_builtin.int \
		Mercury/ints/require.int \
		Mercury/ints/string.int \
	\
		Mercury/int2s/array.int2 \
		Mercury/int2s/assoc_list.int2 \
		Mercury/int2s/bitmap.int2 \
		Mercury/int2s/bool.int2 \
		Mercury/int2s/char.int2 \
		Mercury/int2s/construct.int2 \
		Mercury/int2s/deconstruct.int2 \
		Mercury/int2s/enum.int2 \
		Mercury/int2s/map.int2 \
		Mercury/int2s/maybe.int2 \
		Mercury/int2s/ops.int2 \
		Mercury/int2s/pair.int2 \
		Mercury/int2s/pretty_printer.int2 \
		Mercury/int2s/stream.int2 \
		Mercury/int2s/term.int2 \
		Mercury/int2s/time.int2 \
		Mercury/int2s/tree234.int2 \
		Mercury/int2s/type_desc.int2 \
		Mercury/int2s/univ.int2 \
	\
		Mercury/ints/a02.int

# RULE mh_and_mih_on_c
a02.mh Mercury/mihs/a02.mih : Mercury/cs/a02.c

ifeq ($(findstring java,$(GRADE)),java)

# RULE module_dep_on_java
Mercury/module_deps/a02.module_dep : Mercury/javas/jmercury/a02.java

else

# RULE module_dep_on_c
Mercury/module_deps/a02.module_dep : Mercury/cs/a02.c

endif # conditional fragment

# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   long dep int3s
#   short dep int3s
Mercury/dates/a02.date Mercury/date0s/a02.date0 : \
		a02.m \
	\
		Mercury/int3s/array2d.int3 \
		Mercury/int3s/builtin.int3 \
		Mercury/int3s/int.int3 \
		Mercury/int3s/io.int3 \
		Mercury/int3s/list.int3 \
		Mercury/int3s/private_builtin.int3 \
		Mercury/int3s/require.int3 \
		Mercury/int3s/string.int3 \
	\
		Mercury/int3s/array.int3 \
		Mercury/int3s/assoc_list.int3 \
		Mercury/int3s/bitmap.int3 \
		Mercury/int3s/bool.int3 \
		Mercury/int3s/char.int3 \
		Mercury/int3s/construct.int3 \
		Mercury/int3s/deconstruct.int3 \
		Mercury/int3s/enum.int3 \
		Mercury/int3s/map.int3 \
		Mercury/int3s/maybe.int3 \
		Mercury/int3s/ops.int3 \
		Mercury/int3s/pair.int3 \
		Mercury/int3s/pretty_printer.int3 \
		Mercury/int3s/stream.int3 \
		Mercury/int3s/term.int3 \
		Mercury/int3s/time.int3 \
		Mercury/int3s/tree234.int3 \
		Mercury/int3s/type_desc.int3 \
		Mercury/int3s/univ.int3

# RULE self_and_parent_date0_deps
# target group names:
#   date0s
# source group names:
#   (unnamed)
#   long dep int3s
#   short dep int3s
Mercury/date0s/a02.date0 : \
		a02.m \
	\
		Mercury/int3s/array2d.int3 \
		Mercury/int3s/builtin.int3 \
		Mercury/int3s/int.int3 \
		Mercury/int3s/io.int3 \
		Mercury/int3s/list.int3 \
		Mercury/int3s/private_builtin.int3 \
		Mercury/int3s/require.int3 \
		Mercury/int3s/string.int3 \
	\
		Mercury/int3s/array.int3 \
		Mercury/int3s/assoc_list.int3 \
		Mercury/int3s/bitmap.int3 \
		Mercury/int3s/bool.int3 \
		Mercury/int3s/char.int3 \
		Mercury/int3s/construct.int3 \
		Mercury/int3s/deconstruct.int3 \
		Mercury/int3s/enum.int3 \
		Mercury/int3s/map.int3 \
		Mercury/int3s/maybe.int3 \
		Mercury/int3s/ops.int3 \
		Mercury/int3s/pair.int3 \
		Mercury/int3s/pretty_printer.int3 \
		Mercury/int3s/stream.int3 \
		Mercury/int3s/term.int3 \
		Mercury/int3s/time.int3 \
		Mercury/int3s/tree234.int3 \
		Mercury/int3s/type_desc.int3 \
		Mercury/int3s/univ.int3

# RULE foreign_deps_for_mh
Mercury/os/a02.$O Mercury/os/a02.pic_o : \
		array.mh \
		bitmap.mh \
		io.mh \
		string.mh \
		time.mh

# RULE int0_on_date0
Mercury/int0s/a02.int0 : Mercury/date0s/a02.date0
	@:

# RULE int_on_date
Mercury/ints/a02.int : Mercury/dates/a02.date
	@:

# RULE int2_on_date
Mercury/int2s/a02.int2 : Mercury/dates/a02.date
	@:

# RULE int3_on_date3
Mercury/int3s/a02.int3 : Mercury/date3s/a02.date3
	@:

# RULE opt_on_opt_date
Mercury/opts/a02.opt : Mercury/optdates/a02.optdate
	@:

# RULE trans_opt_on_trans_opt_date
Mercury/trans_opts/a02.trans_opt : Mercury/trans_opt_dates/a02.trans_opt_date
	@:

# RULE subdir_shorthand_for_.c
.PHONY: a02.c
a02.c : Mercury/cs/a02.c

# RULE subdir_shorthand_for_.$O
.PHONY: a02.$O
a02.$O : Mercury/os/a02.$O

# RULE subdir_shorthand_for_.pic_o
.PHONY: a02.pic_o
a02.pic_o : Mercury/os/a02.pic_o

# RULE subdir_shorthand_for_.java
.PHONY: a02.java
a02.java : Mercury/javas/jmercury/a02.java

# RULE subdir_shorthand_for_.class
.PHONY: a02.class
a02.class : Mercury/classs/jmercury/a02.class

# RULE subdir_shorthand_for_.dll
.PHONY: a02.dll
a02.dll : a02.dll

