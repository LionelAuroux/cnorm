

int test2;
char **tab;
char **const **tab2;
char **tab3[4][49][99][666];
const char* const tab4;

struct {
	int a,b[10];
	char c;
	double d,*e,f[];
} myStruct;

struct bitfield
{
	int	fl:3;
	int	eg:4;
	int	rt:1;
} bitos;

int (*myfunc)(void *ptr, ...) = 0;

int muf;
int *i;



/*  
this is a comment
#line 50 
with a line directive in it,
very annoying
*/


struct toto {int a,b;};
struct toto titi;

typedef long mylong;

enum myenum { one = 5, two = 1, three = 0 };

int f(char c, char *d)
{

  struct s;
  int z = 100;
  struct s { 
    short c, d;
    long l;
    mylong m;
  };

  struct s	a;
  
  typedef int muf;

  typedef struct _list
  {
    struct _list *pnext;
  } List;

  muf	nia = 0;
  
  while (nia++ < 5)
  {
    List	*whales;
    
	  typedef int grubu;
	  grubu	c = 15 + nia;
	  printf("%d\n", c);
	  myfunc = (int (*)(void *, ...))f;
	  whales->pnext->pnext->pnext->pnext;
  }
  
}
