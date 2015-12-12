#ifndef MRUBY_REDIS_H
#define MRUBY_REDIS_H

#include <mruby.h>

#ifdef __cplusplus
extern "C" {
#endif

#define E_REDIS_ERROR (mrb_class_get_under(mrb, mrb_class_get(mrb, "Redis"), "ConnectionError"))
#define E_REDIS_REPLY_ERROR (mrb_class_get_under(mrb, mrb_class_get(mrb, "Redis"), "ReplyError"))
#ifndef E_EOF_ERROR
#define E_EOF_ERROR (mrb_class_get(mrb, "EOFError"))
#endif
#define E_REDIS_ERR_PROTOCOL (mrb_class_get_under(mrb, mrb_class_get(mrb, "Redis"), "ProtocolError"))
#define E_REDIS_ERR_OOM (mrb_class_get_under(mrb, mrb_class_get(mrb, "Redis"), "OOMError"))

#ifdef __cplusplus
}
#endif

#endif

