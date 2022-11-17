#include <stdio.h>

struct Distanse
{
  int f;
  float i;
} fdist, sdist, dist;

int main()
{
  printf("enter first dist. in feet & inch with space :");
  scanf("%d %f", &fdist.f, &fdist.i);

  printf("enter second dist. in feet & inch with space :");
  scanf("%d %f", &sdist.f, &sdist.i);

  dist.f = fdist.f + sdist.f;
  dist.i = fdist.i + sdist.i;

  while (dist.i >= 12)
  {
    dist.i = dist.i - 12;
    dist.f++;
  }

  printf("distance : %d feet, %.1f inch\n", dist.f, dist.i);
  return 0;
}
