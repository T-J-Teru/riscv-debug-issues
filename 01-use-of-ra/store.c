/* Check that GDB can correctly update a value, living in a register,
   in the target.  This pretty much relies on the compiler taking heed
   of requests for values to be stored in registers.  */

/* NOTE: carlton/2002-12-05: These functions were all static, but for
   whatever reason that caused GCC 3.1 to optimize away some of the
   function calls within main even when no optimization flags were
   passed.  */

float
add_float (register float u, register float v)
{
  return u + v;
}

float
wack_float (register float u, register float v)
{
  register float l = u, r = v;
  l = add_float (l, r);
  return l + r;
}

int
main ()
{
  wack_float (-1, -2);

  return 0;
}
