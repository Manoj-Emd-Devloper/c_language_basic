//wap of bitfield with the union
#include <stdio.h>

union test {
	unsigned int x : 3;
	unsigned int y : 3;
	unsigned int z : 3;
}; 
//if the bitfield width is less than other member then we get 0 and
//if the bitfield width is greater than other member then we get garbage value and

int main()
{
	union test t;

	//union member can share same memory and access the only one value at a time
    printf("The size of test union is = %d \n", sizeof(t));
	t.x = 5;
	printf("t.x = %d, t.y = %d, t.z = %d \n", t.x, t.y, t.z);
	t.y = 4;
	printf("t.x = %d, t.y = %d, t.z = %d \n", t.x, t.y, t.z);
	t.z = 1;
	printf("t.x = %d, t.y = %d, t.z = %d \n", t.x, t.y, t.z);

	return 0;
}
