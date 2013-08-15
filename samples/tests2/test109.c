int now() {
     union foo { int i; double d; };
     int x;
     double y;
     void hack (union foo);
     union foo u;
}        

