     struct foo {int a[4];};
     
     struct foo f();
     
	int bar (int index)
     {
       return f().a[index];
     }
