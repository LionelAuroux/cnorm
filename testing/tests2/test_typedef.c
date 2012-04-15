typedef int block;

struct { int i, x; } ps;
struct { block t; } s;

struct { struct { block t;}ss;} s2;
union {  block t;} u;
int f(block);
int (*pf)(block);

void echo(const char *s, ...)
{
  block x;
  int a = 42;
  a += 1;
  while (3)
  {
    block t;
    int z = (int) 7;
  }
}

int main()
{
  block x;
  
  while (43)
    {
      if (1)
	{
	  echo("mumuf\n");
	}
      else
	{
	  echo("momof\n");
	}
      int i;
      for (i = 0; i < 42; ++i)
	{
	  echo("glouglou\n");
	}
      do 
	{
	  echo("huhu");
	}
      while (42);
      int truc = 12;
      
      switch (truc)
	{
	case 1:
	case 2:
	default:
	  echo("");
	}
      
      typedef double prout;

      prout f = 4.5;
      double d = 2.3;
      f *= (prout) d - (prout) 4.1;
      
    }
  typedef int prout;
  int f2( int (*tutu)(prout, block));
}




