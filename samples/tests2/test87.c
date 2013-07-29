enum {e0, e1};

int x[] =
{
  [e0] = 0
};

int f ()
{
  switch (1)
    {
    case e0:
    case e1:
      break;
    }
}
