static __inline__ foo() {
  line 1;
  line 2;

  return;
}

__section("foo/bar")
static bar() {
  line 1;
  line 2;
  line 3;
  line 4;

  line 5;
  line 6;
  line 11;
  line 12;

#ifdef some_macro
  line 7;
  line 8;
  line 13;
#else
  line 9;
  line 10;
  line 14;
#endif
  line 15;
  return baz;
}

