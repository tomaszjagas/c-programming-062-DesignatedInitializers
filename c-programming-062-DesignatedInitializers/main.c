#include <stdio.h>

struct point {
	int x, y;
};

//struct point {
//	int x, y, z;
//};

int main() {
	int numbers[100] = { 1,2,3,[3 ... 9] = 10,[10] = 90,15,[70] = 50,[42] = 400 };
	int numbers1[] = { 1,2,3,[10] = 80,15,[70] = 50,[42] = 400 };

	for (int i = 0; i < 20; i++) {
		printf("%d ", numbers[i]);
	}

	printf("\n%d", numbers[70]);
	printf("\n%d\n", numbers[42]);

	int n = sizeof(numbers1) / sizeof(numbers1[0]);
	printf("\n%d\n", n);

	struct point pts[5] = { [2] .y = 5,[2].x = 6,[0].x = 2 };

	for (int j = 0; j < 5; j++) {
		printf("%d %d\n", pts[j].x, pts[j].y);
	}

	//struct point p = { .y = 2,.x = 3 };
	//struct point p = { y: 2,x: 3 };
	//struct point p = { 2,3 };

	//struct point p1 = { .y = 0,.z = 1,.x = 2 };
	//struct point p2 = { .x = 20 };

	//printf("x = %d, y = %d, z = %d\n", p1.x, p1.y, p1.z);
	//printf("x = %d", p2.x);

	return 0;
}