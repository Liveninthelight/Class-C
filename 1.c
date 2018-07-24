#include<stdio.h>
#include<cs50.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

 long long factorialize(int num) {

  long long r=num;
if (r==0){
  r=1;
}
 for (int i=1; i<num; i++){

     r=r * i;


  }
   return r;
}

int main (void)
{
  int t = get_int("Enter a number ");
  long long a = factorialize(t);
  printf("Factor of %i is %lli\n",t,a);

}




