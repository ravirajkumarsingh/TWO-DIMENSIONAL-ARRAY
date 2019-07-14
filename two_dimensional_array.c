#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

#define CLASS 3
#define GRADES 4

int grade [CLASS][GRADES];

void enter_grades(void);
int get_grades(int num);
void disp_grades(int g[][GRADES]);


int main()
{

    char ch,str[100];
    for(;;)
    {
        do
        {
            printf("(E)nter the grades\n");
            printf("(R)eport the grades\n");
            printf("(Q)uit\n");
            gets(str);
            ch=toupper(*str);

        }while(ch!='E' && ch!='R' && ch!='Q');

        switch(ch)
        {
            case 'E':   enter_grades();
                        break;
            case 'R':   disp_grades(grade);
                        break;
            case 'Q':   exit(0);

        }
    }

    return 0;
}



void enter_grades()
{
    int t,i;
    for(t=0;t<CLASS;++t){
        printf("Class # %d is:\n",t+1);
        for(i=0;i<GRADES;++i)
            grade[t][i]=get_grades(i);
    }

}


int get_grades(int num)
{
    char c[80];

    printf("Enter the grades for student #%d:\n",num+1);
    gets(c);
    return(atoi(c));
}


void disp_grades(int g[][GRADES])
{
    int t,i;
    for(t=0;t<CLASS;++t){
        printf("CLASS # %d:\n",t+1);
        for(i=0;i<GRADES;++i)
            printf("Student #%d is %d\n",i+1,g[t][i]);
    }

}
