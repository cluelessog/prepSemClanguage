#include<stdio.h>

int (*test) (int);

int update(int x)
{
return x++;
}

int main()
{
int y;
test = update;
y = test(25);
printf("val is : %d",y);

}
