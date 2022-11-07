/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP which will accept obtained marks in theory and practical, the...
     average marks will have the weightage of 60% in theory + 40% in practical.
     Show result as Pass or Fail based on the following conditions:
     - if avg >= 50 --> Pass
       else --> Fail
    also show the grades based on the following conditions:
     - if avg >= 80 -> A
     - if avg >= 60 -> B
     - if avg >= 50 -> C
     - if avg < 50  -> F

Compiler: MSVC
*/

#include <stdio.h>

int main(void)
{
    float th_mk, pr_mk, totl_mk, th_wt, pr_wt;
    int is_th_fail = 0, is_pr_fail = 0;
    char grade = 'A';

    printf("\n|-> Grade Evaluator <-|\n");

    printf("\nTheory marks weightage: ");
    scanf("%f", &th_wt);  // input = 0.60
    printf("\nPractical marks weightage: ");
    scanf("%f", &pr_wt);  // input = 0.40
    printf("\nMarks in Theoretical Exam: ");
    scanf("%f", &th_mk);
    printf("\nMarks in Practical Exam: ");
    scanf("%f", &pr_mk);

    totl_mk = (th_mk * th_wt) + (pr_mk * pr_wt);
    
    if (th_mk < 50)
    {
        is_th_fail = 1;
    }
    if (pr_mk < 50)
    {
        is_pr_fail = 1;
    }

    printf("\n==================================\n");
    printf("\nTOTAL MARKS: %.2f", totl_mk);
    printf("\nGRADE: ");

    if (totl_mk >= 80)
    {
        printf("A");
    }
    else if (totl_mk >= 60)
    {
        printf("B");
    }
    else if (totl_mk >= 50)
    {
        printf("C");
    }
    else if (totl_mk < 50)
    {
        printf("F");
    }

    printf("\nRESULT: ");

    if (is_th_fail && is_pr_fail)
    {
        printf("Fail\n");
        printf("REMARKS: ");
        printf("Need to improve in both theoretical and practical exams.");
    }
    else if (is_th_fail)
    {
        printf("Fail\n");
        printf("REMARKS: ");
        printf("Need to improve in theory exams.");
    }
    else if (is_pr_fail)
    {
        printf("Fail\n");
        printf("REMARKS: ");
        printf("Need to improve in practical exams.");
    }
    else
    {
        printf("Pass\n");
        printf("REMARKS: ");
        printf("Passed in both Theoretical and Practical exams.");
    }

    printf("\n");

    return 0;
}