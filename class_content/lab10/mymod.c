#include "mymod.h"

#include "myadd.h"

int mod(int x, int y)
{
	return (add(x,y)%2);
}
