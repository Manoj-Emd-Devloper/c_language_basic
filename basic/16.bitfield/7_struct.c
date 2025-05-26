//wap of bitfield with the union
#include <stdio.h>

struct test {
	unsigned int x : 3;
	unsigned int y : 3;
	unsigned int z : 2;
};

int main()
{
	struct test t;

	//stucture
    printf("The size of test union is = %d \n", sizeof(t));
	t.z = 1;
	t.x = 5;
	t.y = 4;
	printf("t.x = %d, t.y = %d, t.z = %d \n", t.x, t.y, t.z);

	return 0;
}
