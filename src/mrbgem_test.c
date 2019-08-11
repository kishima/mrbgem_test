#include "mruby.h"
#include "mruby/data.h"
#include "mrbgem_test.h"

#define DONE mrb_gc_arena_restore(mrb, 0);

mrb_value mrb_mrbgem_test_init(mrb_state *mrb, mrb_value self)
{
  return self;
}


void mrb_mruby_mrbgem_test_gem_init(mrb_state *mrb)
{
  struct RClass *mrbgem_test;
  mrbgem_test = mrb_define_class(mrb, "Mrbgem_test", mrb->object_class);
  mrb_define_method(mrb, mrbgem_test, "initialize", mrb_mrbgem_test_init, MRB_ARGS_REQ(1));
  DONE;
}

void mrb_mruby_mrbgem_test_gem_final(mrb_state *mrb)
{
}

