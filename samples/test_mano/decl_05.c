int test()
{
	for(; a < 20; ++a){}
}

int TAB[10],i,*ptr;

struct {int toutou; double x;} **x, t;

enum PLOP {A,B,C = 3 * sizeof(int)};

int	*p, u;

long	c = 32;

double	f = 4.3f;
double	f2 = 4.3;

void	fwd_decl(typedef double F; int size; char ary[size], int size, F z)
{
	int z;
	F plopl;
}

int	f1()
{
  typedef int	X;
  
  X	a;
  if (a == 42)
    {
      printf("%d\n", a);
    }
	for (int  i = 0; i < 100; ++i){}
    
	while (100 <= a){}
	do {a+=3;} while(32);
	pif:
		switch (15)
		{
			case 5...4:a++;
			case 8:
			default:
				{
					typedef int HHH;
					HHH plop;
				}
		}

  for (int i = 0; i < 20; ++i, ++u)
    {
    
      typedef int	Y;
      {
	Y	a;
      }
      
    }
}


typedef double D;

int size_d = sizeof(D);

int	f3(D chausette)
{
	int pupu;
  typedef int	U;
  for (U	b; b < 10; ++b)
    {
      typedef int GLA;
      {
	GLA z;
      }
    }
}

