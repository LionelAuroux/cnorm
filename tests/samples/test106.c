enum E {A,B,C,D} F; 
struct _list { void *data; struct _list *next;};
typedef int	(*entry_point)(int, char **);
unsigned buffer[sizeof(struct s) * 512];
int concat_fopen (char *s1, char *s2, char *mode)
{
  char str[strlen (s1) + strlen (s2) + 1];
  strcpy (str, s1);
  strcat (str, s2);
  return fopen (str, mode);
}
