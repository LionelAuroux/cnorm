     int foo asm ("myfoo") = 2;

     extern func () asm ("FUNC");
     
//int func (x, y) {
       //int x, y;
	int func (int x, int y){ // no K&R parameter
        return x+y;
     }


