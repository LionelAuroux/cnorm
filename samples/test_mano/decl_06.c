
int * (*a)(int,int), b, f(int, int);

struct aa {int; int;} *bb[20], c;

int	f1()
{
  typedef int	X;
  int b;
  
  if (42)
    {
      X a;
    }
  while (42)
    {
      X a;
      typedef double DD;
      {
	DD x;
      }
    }
  do 
    {
      X a;
    }
  while(42);
  switch (42)
    {
    case 42:
      b = 13;
    case 12:
      {
	typedef int GG;
	GG x;
      }
    }
}

__extension__ struct toto
{
  int	a;
  char	c;
} __attribute__((packed)) t __attribute__ ((aligned (8)));

int	main()
{
  typedef int X;
  int	a = sizeof(X);
  int	b = sizeof (int *);
}
