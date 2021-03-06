/* { dg-do compile } */
/* { dg-options "-O2 -fdump-tree-vrp1" } */

int
foo (unsigned int i, unsigned int j)
{
  i &= 15;
  j &= 15;
  i += 1024;
  j += 2048;
  i |= j;
  return i >= 1024 + 2048;
}

/* { dg-final { scan-tree-dump "Folding predicate i_\[^\n\r\]* to 1" "vrp1" } } */
/* { dg-final { cleanup-tree-dump "vrp1" } } */
