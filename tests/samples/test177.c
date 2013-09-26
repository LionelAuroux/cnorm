typedef int f;

f a,b,c,d;
f e[4]; // tableau

f *(g[4]) = {&a, &b, &c, &d}; // tableau de 4 pointeur
f (*h)[4] = &e; // pointeur de tableau

f (**i[4]) = {&g[0], &g[1], &g[2], &g[3]}; // tableau de 4 bipointeur
f (**j)[4] = &h; // bi pointeur de tableau

void toto(int* (**tutu[8][16])(int (*main)(int, const char* const***), int))
{
  ;;;
}

