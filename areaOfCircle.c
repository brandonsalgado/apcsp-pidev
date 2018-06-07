#include <stdio.h>

float areacirc(float inrad, float inrad2)
{
  for (int i = inrad; i < inrad2 + 1; i++)
  {
    float d = i * i;
    float area = d * 3.14159;
    printf("Area with radius of %d is %f\n", i, area);

  }
}

int main(int argc, float* argv[])
{

char input[6];
float inrad;
float inrad2;

  if (argc < 2) {
    printf("Please enter first radius length");
    fgets(input, 6, stdin);
    sscanf(input, "%f", &inrad);
    printf("Please enter second radius length");
    fgets(input, 6, stdin);
    sscanf(input, "%f", &inrad2);
}
  else {
    sscanf(argv[1], "%f", &inrad);
    sscanf(argv[2], "%f", &inrad2);
}

  areacirc(inrad, inrad2);

}
