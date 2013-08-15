typedef int T1 ;
typedef int T2 ;
typedef int T3;
int main() {
        const T1 T1_; /* redeclares T1 to be an int */
        const T2 (T2_); /* redeclares T2 to be an int */
        const T3 t; /* syntax error : missing declarator */
        }

