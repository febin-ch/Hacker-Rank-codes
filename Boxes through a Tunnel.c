#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41
////
struct box
{
	  int length;
    int width;
    int height;
};

typedef struct box box; //use box instead of using struct box everytime athre ollu

int get_volume(box b) {
    return b.length * b.width * b.height;
}

int is_lower_than_max_height(box b) {
  return b.height < MAX_HEIGHT ? 1 : 0;  //box *boxes: boxes is a pointer that points to the box;
  //"Hey, I'm going to give you a single box (a structure containing length, width, and height), and you can use it inside the function to calculate the volume."

So:

box → is the type (thanks to typedef, it's short for struct box)

b → is the variable name inside the function (local to get_volume)
}
int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}
