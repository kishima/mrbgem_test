#include "mruby.h"
#include "mrb_mrbgem_test.h"

#define DONE mrb_gc_arena_restore(mrb, 0);

static mrb_value mrb_mrbgem_test_init(mrb_state *mrb, mrb_value self)
{
  return self;
}

static mrb_value mrb_mrbgem_test_hello(mrb_state *mrb, mrb_value self)
{
  return mrb_str_new_cstr(mrb, "hello");
}

void mrb_mrbgem_test_gem_init(mrb_state *mrb)
{
  struct RClass *mrbgem_test;
  mrbgem_test = mrb_define_class(mrb, "Mrbgem_test", mrb->object_class);
  mrb_define_method(mrb, mrbgem_test, "initialize", mrb_mrbgem_test_init, MRB_ARGS_NONE());
  mrb_define_method(mrb, mrbgem_test, "hello", mrb_mrbgem_test_hello, MRB_ARGS_NONE());
  DONE;
}

void mrb_mrbgem_test_gem_final(mrb_state *mrb)
{
}

