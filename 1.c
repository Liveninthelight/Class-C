#include<stdio.h>
#include<cs50.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

 long long factorialize(long long num) {

  long long r=num;
if (r==0){
  num=1;
}
 for (int i=1; i<r; i++){

     num=num * i;


  }
   return num;
}

int main (void)
{
  int t = get_int("Enter a number ");
  long long a = factorialize(t);
  printf("Factor of %i is %lli\n",t,a);

}




