#include <stdio.h>

 typedef char lolita_t;
void toto()
{
  // typedef char lolita_t;

}

struct def {double d; char *str;};

struct a {int zz; int yy; struct def bla;} 
  tab[] = {
    {.zz=42, yy:37, .bla.d=4.2, .bla.str="bum"},
    [42 / sizeof(int)] = {yy:1000, .bla.d=8.1, .zz=666, .bla.str="bam"},
   // {}
  };

void titi()
{
 int pouet;

 for (struct {int i; double d;} t = {.i = 0, .d = 4.0}; t.i < 20; ++t.i, ++t.d)
   {
     printf("i:%d d:%f\n", t.i, t.d);
   }
}

void tata()
{
  int	nia;
 lolita_t lol = nia + 42;
}

int main()
{
  titi();
}
