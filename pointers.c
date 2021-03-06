#include <stdio.h>
#include <string.h>

//Without typdef foo will alwawys have to be called as struct foo.
typedef struct foo{
	int i;
	float f;
	char a[80];
} foo_t;

//SWAPS POINTERS 
void swap_wrong(int x, int y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

//Instead of integers initialize pointers for integers.
void swap_right(int* x, int* y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
	printf("%d, %d\n", *x,*y);
}
//never pass structure by a value pass by address (or struct foo *f)
void populate_foo(foo_t *f){
	
	f->i = 50011;
	f->f = 6.02e23;
	strcpy(f->a, "changed!");
}
int main(int argvc, char *argv[])
{
	int x, y;
	
	x = 0;
	y = 1;
	//C passes values at the location it does not pass the location of the variable
	swap_right(&x, &y);
	printf("%d, %d\n", x,y);
	
	
	foo_t f;
	f.i = 10;
	f.f = 3.1415;
	strcpy(f.a, "string");
	
	printf("%d %f %s\n", f.i, f.f,f.a);
	
	populate_foo(&f);
	printf("%d %f %s\n", f.i, f.f,f.a);
	//this gives the size
	//strncpy(f.a,80, "string");
	
	
	
	return 0;
}