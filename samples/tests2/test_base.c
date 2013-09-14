
/*

  quelques variables globales

*/

int			a;
short			b;
long			c;
unsigned		d;
signed			e;
unsigned long long	f;

/*
  quelques variables aux types particuliers
*/

void			*pointeur;
int			**double_pointeur;
const char		*chaine_nonmodifiable;
const char		*const pointeur_nonmodifiable_sur_chaine_nonmodifiable;
char			*tableau_de_chaine[42];

/*
  
  type enum

*/

enum			my_enum
  {
    FIRST,
    SECOND,
    THIRD,
    FOURTH,
    FIFTH
  };

/*
  
  type struct

*/

struct			my_struct
{
  int unsigned		ordre_pas_important;
  double		un_double;
};

/*
  
  quelques pointeur de fonction

*/

float					(*simple_ptr_func)(char t, char a);
char					*(*my_ptr_func1)();
struct {char a; int b; double c;}	**(*my_ptr_func2)(float, unsigned int, char[], ...);

/*

  quelques typedefs

*/



/*

  quelques fonctions

*/
