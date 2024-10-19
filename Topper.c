#include<stdio.h>
struct student
{
    char name[50];
    int marks[5];
    float average;
};
void main()
{
    struct student s[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter the information of student %d\n",i+1);
        printf("Enter the name:");
        scanf("%s",s[i].name);
        printf("\nEnter the five marks of student:");
        int sum=0;
        for(int j=0;j<5;j++)
        {
            scanf("%d",&s[i].marks[j]);
            sum+=s[i].marks[j];
        }
        s[i].average = (float)sum/5.0;
        printf("\n");
    }

        int maxIndex=0;
        float maxAverage=s[0].average;
        for( int i=1;i<3;i++)
        {
            if(s[i].average>maxAverage)
            {
                maxAverage=s[i].average;
                maxIndex=i;
            }
        }

            printf("\nTopper name is: %s",s[maxIndex].name);
            printf("\nAverage marks of the topper is : %.2f",s[maxIndex].average);
}