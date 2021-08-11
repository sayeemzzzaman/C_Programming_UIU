#include<stdio.h>

int main()
{
    int n,i=1,total;
    float a,hw,ct,mt,tf;
    scanf("%d",&n);

    while(i<=n)
    {
        scanf("%f%f%f%f%f",&a,&hw,&ct,&mt,&tf);
        total = a+hw+ct+mt*30/50+tf;
        total = total/1.8;
        if(total>=90 && total<=100)printf("Student %d : A\n",i);
        else if(total>=86 && total<=89)printf("Student %d : A-\n",i);
        else if(total>=82 && total<=85)printf("Student %d : B+\n",i);
        else if(total>=78 && total<=81)printf("Student %d : B\n",i);
        else if(total>=74 && total<=77)printf("Student %d : B-\n",i);
        else if(total>=70 && total<=73)printf("Student %d : C+\n",i);
        else if(total>=66 && total<=69)printf("Student %d : C\n",i);
        else if(total>=62 && total<=65)printf("Student %d : C-\n",i);
        else if(total>=58 && total<=61)printf("Student %d : D+\n",i);
        else if(total>=55 && total<=57)printf("Student %d : D\n",i);
        else if(total<55)printf("Student %d : F\n",i);
        i++;
    }
}




/*#include<stdio.h>

int main()
{
    int n,i=1,total;
    float a,hw,ct,mt,tf;
    scanf("%d",&n);

    while(i<=n)
    {
        scanf("%f%f%f%f%f",&a,&hw,&ct,&mt,&tf);
        total = a+hw+ct+mt*30/50+tf;
        total = total/1.8;
        if(total>=90 && total<=100)printf("Student %d : A\n",i);
        else if(total>=86 && total<=89)printf("Student %d : A-\n",i);
        else if(total>=82 && total<=85)printf("Student %d : B+\n",i);
        else if(total>=78 && total<=81)printf("Student %d : B\n",i);
        else if(total>=74 && total<=77)printf("Student %d : B-\n",i);
        else if(total>=70 && total<=73)printf("Student %d : C+\n",i);
        else if(total>=66 && total<=69)printf("Student %d : C\n",i);
        else if(total>=62 && total<=65)printf("Student %d : C-\n",i);
        else if(total>=58 && total<=61)printf("Student %d : D+\n",i);
        else if(total>=55 && total<=57)printf("Student %d : D\n",i);
        else if(total<55)printf("Student %d : F\n",i);
        i++;
    }
}
*/