
enum { A = 43, B = 3, C, D, E = sizeof(4) / 12 }a;

int a,b,c;
extern const double *x[2],**y,z;
struct {
	double x1, y2;
} k;
struct {int a; double b;} p, d;
union tutu
{
  int b;
  struct
  {
    struct {int a; double b;} p, **q;
    double x, z,y;
  } zzz;
};


struct bitfield
{
unsigned int z : 6;
unsigned int d : 9;
unsigned int g : 11;
};

typedef   struct
  {
    int p, *z, **y, *w, v, c[42];
  } zzz;

