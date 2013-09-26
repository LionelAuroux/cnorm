int * f(char);
char * b;
int main() {
        f(*b)[4]; /* indirect on "b", call "f", and index the result
                  /* by "4" */
        }

