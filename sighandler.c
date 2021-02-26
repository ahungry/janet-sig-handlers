#include <janet.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void
int_handler (int x)
{
  printf ("Goodbye");

  exit (EXIT_SUCCESS);
}

static Janet set_int_handler (int32_t argc, Janet *argv)
{
  janet_fixarity (argc, 0);

  signal (SIGINT, int_handler);

  return janet_wrap_nil ();
}

static const JanetReg cfuns[] = {
  {"set-int-handler", set_int_handler, "(sighandler/set-int-handler)\n\nDoes nothing for now."},
  {NULL, NULL, NULL}
};

JANET_MODULE_ENTRY(JanetTable *env) {
  janet_cfuns (env, "sighandler", cfuns);
}
