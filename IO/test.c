#include "./lib_/add.h"
#include "./lib_/sub.h"

int main()
{
	int x = 10;
	int y = 20;

	int ret1 = my_add(x, y);
	int ret2 = my_sub(x, y);

	printf("x+y=%d\n", ret1);
	printf("x-y=%d\n", ret2);
	return 0;
}
