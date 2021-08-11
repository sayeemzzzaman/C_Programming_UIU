#include <stdio.h>
#include <stdlib.h>



main() {



  int x;
  char ch;
  char ce;

  printf("Enter your number:\n");
  scanf("%d",&x);
  if (x<=100&& x>=80){
      ch='A';
      ce='+';
      printf("Your grade is %c%c",ch,ce);
  }

  else if (x<=79&&x>=70){
      ch='A';
      printf ("Your grade is %c",ch);
  }

  else if (x<=69&&x>=60) {
      ch='A';
      ce='-';
      printf("Your grade is %c%c",ch,ce);

  }

  else if (x<=59&&x>=50)  {
      ch='B';
      printf ("Your grade is %c",ch);
  }

  else if (x<=49&&x>=40) {
      ch='C';
      printf("Your grade is %c",ch);
  }

  else if (x<=39&&x>=33) {
      ch='D';
      printf ("Your grade is %c",ch);
  }

  else if (x<33&&x>=0) {
      ch='F';
      printf ("Your grade is %c",ch);
  }


    else {
        printf ("Wrong Input");
    }


    return 0;
}
