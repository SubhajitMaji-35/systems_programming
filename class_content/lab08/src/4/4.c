#include <stdio.h>

// Define structures Rectangle and Point
//TODO: Complete the code

struct Point {
	float x;
	float y;
};

typedef struct Point Point;

struct Rectangle {
	float height;
	float width;
	Point cbl;
};

typedef struct Rectangle Rectangle;

Point FindCenter(const Rectangle r){
	//TODO: Complete the code
		
	Point center;
	
	center.x = r.cbl.x + r.width/2;
	center.y = r.cbl.y + r.height/2;
	
	return center;
}


int main()
{
	Point corner_bl, center;
	float height, width;

	scanf("%f %f", &corner_bl.x, &corner_bl.y);
	scanf("%f %f", &height, &width);
	
	//TODO: Complete the code
	
	struct Rectangle r = {height, width, corner_bl};

	center = FindCenter(r);

	printf("%.4f %.4f", center.x, center.y);

	//Do not add/modify anything below this line
	return 0;
}

