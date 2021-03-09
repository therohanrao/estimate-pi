//Compile with -lm for math library

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

float estimate_pi(int num)
{
    double x = 0;
    double y = 0;
    double insideCircle = 0.0;
    for(int i = 0; i < num; i++)
    {
        x = (rand() % 100) / 100.0;
        y = (rand() % 100) / 100.0;
        if (pow(x*x + y*y, .5) < 1)
            insideCircle++;
    }
    return 4*(insideCircle/(double)num);
}
    // ratio of points in circle and points in square
    // is approximately ratio of circle area to sqaure area
    // pi*r**2 / (2r)**2 ~ insideCircle / num
    // pi ~ 4*(insideCircle/num

int main(int argc, char*argv[])
{
    srand(time(NULL));
    printf("Pi is about: %f\n",estimate_pi(atoi(argv[1])));
}