#include <stdio.h>
#include <ruby.h>
#include <sqlite3.h>

static VALUE initialize(VALUE file_path, VALUE self) {
  sqlitedRubyPtr ctx;
  rb_iv_set(self, "@file_path", file_path);
  return self;
}