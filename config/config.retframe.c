/* Find out if __builtin_apply()'s retframe points directly at `char'
   and `short' return values, or if it points at an `int'-casted
   version of them. */

/* This program exit's with status 0 if it retframe points directly at
   them. */

char
foo ()
{
  return 0x1;
}

char
bar ()
{
  void *retframe;
  void *argframe;
  argframe = __
  retframe = __builtin_apply (foo, argframe, 96);
  __builtin_return (retframe);
}

main ()
{
  /* xxx Not finished... */
}
