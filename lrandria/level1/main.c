// Decompiled by Hex-Rays

// run() function not used in main!!!
int run()
{
  fwrite("Good... Wait what?\n", 1u, 0x13u, stdout);
  return system("/bin/sh");
}

//----- (08048480) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  char s[64]; // [esp+10h] [ebp-40h] BYREF

  return (int)gets(s);
}