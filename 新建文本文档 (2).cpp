#include <stdio.h>
int main()
{
  int a,b,year,month,day,sum=0,c=0,d=0;
  int mon[12]={0,31,28,31,30,31,30,31,31,30,31,30};
  printf("输入年月日：");
  scanf("%d/%d/%d",&year,&month,&day);
  sum+=day;
  for(a=1990;a<year;a++)
  {
   if(a%100!=0&&a%4==0||a%400==0)
        c++;
   else
        d++;    
 }
   sum+=(c*366+d*365);
  for(a=1;a<month;a++)
   { sum+=mon[a];
     if(a==2&&year%100!=0&&year%4==0||year%400==0)
     sum+=29;
    }
    b=sum%7;
    switch(b)
    {
    case 1:printf("星期一\n");break;
    case 2:printf("星期二\n");break;
    case 3:printf("星期三\n");break;
    case 4:printf("星期四\n");break;A
    case 5:printf("星期五\n");break;
    case 6:printf("星期六\n");break; 
    case 0:printf("星期天\n");break;
    }
return 0;
}SS