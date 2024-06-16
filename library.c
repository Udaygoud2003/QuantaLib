#include<stdio.h>
#include<string.h>
void main()
{
    int br,year,ch;
    char nam[10];
    printf("Enter your name : ");
    scanf("%s",&nam);
    printf("\n1.1st Year\n2.2nd Year\n3.3rd year\n4.4th Year\nEnter your year:");
    scanf("%d",&year);
    if(year==1)
    {
    printf("\n1.CSE\n2.MECH\n3.ECE\n4.CIVIL\nEnter your branch: ");
    scanf("%d",&br);
    if(br==1)
    {
      printf("\nThe available Books are:\n1.C-programming\n2.python-programming\n3.java-programming\n Enter your choice:");
      scanf("%d",&ch);
      if(ch==1)
      {
          printf("\n\ncollect The 'C-programming' Book ,(And Return* within 3 days)");
      }
      else if(ch==2)
      {
          printf("\n\ncollect The 'python-programming' Book ,(And Return* within 3 days)");
      }
      else if(ch==3)
      {
          printf("\n\ncollect The 'java-programming' Book ,(And Return* within 3 days)");
      }
      else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else if(br==2)
    {
     printf("\nThe available Books are:\n1.Engineering-Mechanics\n2.Mechatronics\n3.Engineering mathematics\n Enter your choice:");
      scanf("%d",&ch);
      if(ch==1)
      {
          printf("\n\ncollect The 'Engineering-Mechanics' Book ,(And Return* within 3 days)");
      }
      else if(ch==2)
      {
          printf("\n\ncollect The 'Mechatronics' Book ,(And Return* within 3 days)");
      }
      else if(ch==3)
      {
          printf("\n\ncollect The 'Engineering mathematics' Book ,(And Return* within 3 days)");
      }
      else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else if(br==3)
    {
     printf("\nThe available Books are:\n1.Applied-Physics\n2.Basic-Electronics\n3.Mathematics-1\n Enter your choice:");
      scanf("%d",&ch);
      if(ch==1)
      {
          printf("\n\ncollect The 'Applied-Physics' Book ,(And Return* within 3 days)");
      }
      else if(ch==2)
      {
          printf("\n\ncollect The 'Basic-Electronics' Book ,(And Return* within 3 days)");
      }
      else if(ch==3)
      {
          printf("\n\ncollect The 'Mathematics-1' Book ,(And Return* within 3 days)");
      }
      else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else if(br==4)
    {
     printf("\nThe available Books are:\n1.Basic-Engineering\n2.higher-Surveying\n3.R.C.C-Designs\n Enter your choice:");
      scanf("%d",&ch);
      if(ch==1)
      {
          printf("\n\ncollect The 'Basic-Engineering' Book ,(And Return* within 3 days)");
      }
      else if(ch==2)
      {
          printf("\n\ncollect The 'higher-Surveying' Book ,(And Return* within 3 days)");
      }
      else if(ch==3)
      {
          printf("\n\ncollect The 'R.C.C-Designs' Book ,(And Return* within 3 days)");
      }
      else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else if(year==2)
    {
     printf("\n1.CSE\n2.MECH\n3.ECE\n4.CIVIL\nEnter your branch: ");
    scanf("%d",&br);
    if(br==1)
    {
      printf("\nThe available Books are:\n1.C++ programming\n2.Digital-systems\n3.Data structures\n Enter your choice:");
      scanf("%d",&ch);
      if(ch==1)
      {
          printf("\n\ncollect The 'C++ programming' Book ,(And Return* within 3 days)");
      }
      else if(ch==2)
      {
          printf("\n\ncollect The 'Digital-systems' Book ,(And Return* within 3 days)");
      }
      else if(ch==3)
      {
          printf("\n\ncollect The 'Data structures' Book ,(And Return* within 3 days)");
      }
      else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else if(br==2)
    {
     printf("\nThe available Books are:\n1. Static \n2.Dynamic\n3.kinematics\n Enter your choice:");
      scanf("%d",&ch);
      if(ch==1)
      {
          printf("\n\ncollect The 'Static ' Book ,(And Return* within 3 days)");
      }
      else if(ch==2)
      {
          printf("\n\ncollect The 'dynamic' Book ,(And Return* within 3 days)");
      }
      else if(ch==3)
      {
          printf("\n\ncollect The 'Kinematics' Book ,(And Return* within 3 days)");
      }  
      else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else if(br==3)
    {
     printf("\nThe available Books are:\n1.Digital Communications\n2.Electric-Circuits\n3.C and Matlab\n Enter your choice:");
      scanf("%d",&ch);
      if(ch==1)
      {
          printf("\n\ncollect The 'Digital Communications' Book ,(And Return* within 3 days)");
      }
      else if(ch==2)
      {
          printf("\n\ncollect The 'Electric-Circuits' Book ,(And Return* within 3 days)");
      }
      else if(ch==3)
      {
          printf("\n\ncollect The 'C and Matlab' Book ,(And Return* within 3 days)");
      }
      else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else if(br==4)
    {
     printf("\nThe available Books are:\n1.Surveying&Levelling\n2.Building Materials\n3.Pubilc Administration\n Enter your choice:");
      scanf("%d",&ch);
      if(ch==1)
      {
          printf("\n\ncollect The 'Surveying&Levelling' Book ,(And Return* within 3 days)");
      }
      else if(ch==2)
      {
          printf("\n\ncollect The 'Building Materials' Book ,(And Return* within 3 days)");
      }
      else if(ch==3)
      {
          printf("\n\ncollect The 'Pubilc Administration' Book ,(And Return* within 3 days)");
      }
      else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else if(year==3)
    {
     printf("\n1.CSE\n2.MECH\n3.ECE\n4.CIVIL\nEnter your branch: ");
    scanf("%d",&br);
    if(br==1)
    {
      printf("\nThe available Books are:\n1.Computer Awarness\n2.Data Mining\n3.Theory of Computations\n Enter your choice:");
      scanf("%d",&ch);
      if(ch==1)
      {
          printf("\n\ncollect The 'Computer Awarness' Book ,(And Return* within 3 days)");
      }
      else if(ch==2)
      {
          printf("\n\ncollect The 'Data Mining' Book ,(And Return* within 3 days)");
      }
      else if(ch==3)
      {
          printf("\n\ncollect The 'Theory of Computations' Book ,(And Return* within 3 days)");
      }
      else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else if(br==2)
    {
     printf("\nThe available Books are:\n1. Machine elements\n2.Mechanic Of matrials\n3.Mechanical Engineering\n Enter your choice:");
      scanf("%d",&ch);
      if(ch==1)
      {
          printf("\n\ncollect The 'Machine elements ' Book ,(And Return* within 3 days)");
      }
      else if(ch==2)
      {
          printf("\n\ncollect The 'Mechanic Of matrials' Book ,(And Return* within 3 days)");
      }
      else if(ch==3)
      {
          printf("\n\ncollect The 'Mechanical Engineering' Book ,(And Return* within 3 days)");
      }
      else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else if(br==3)
    {
     printf("\nThe available Books are:\n1.Antenna Theory\n2.Digital-Circuits\n3.Signals & Systems\n Enter your choice:");
      scanf("%d",&ch);
      if(ch==1)
      {
          printf("\n\ncollect The 'Antenna Theory' Book ,(And Return* within 3 days)");
      }
      else if(ch==2)
      {
          printf("\n\ncollect The 'Digital-Circuits' Book ,(And Return* within 3 days)");
      }
      else if(ch==3)
      {
          printf("\n\ncollect The 'Signals & Systems' Book ,(And Return* within 3 days)");
      }
      else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else if(br==4)
    {
     printf("\nThe available Books are:\n1.Basic Soil Mechanics\n2.Contracts & Estimates\n3.Structrual Analysis\n Enter your choice:");
      scanf("%d",&ch);
      if(ch==1)
      {
          printf("\n\ncollect The 'Basic Soil Mechanics' Book ,(And Return* within 3 days)");
      }
      else if(ch==2)
      {
          printf("\n\ncollect The 'Contracts & Estimates' Book ,(And Return* within 3 days)");
      }
      else if(ch==3)
      {
          printf("\n\ncollect The 'Structrual Analysis' Book ,(And Return* within 3 days)");
      }
      else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else if(year==4)
    {
     printf("\n1.CSE\n2.MECH\n3.ECE\n4.CIVIL\nEnter your branch: ");
    scanf("%d",&br);
    if(br==1)
    {
      printf("\nThe available Books are:\n1.Communicative English\n2.Computer science Essentials\n3.Calculus & Matrix Algebra\n Enter your choice:");
      scanf("%d",&ch);
      if(ch==1)
      {
          printf("\n\ncollect The 'Communicative English' Book ,(And Return* within 3 days)");
      }
      else if(ch==2)
      {
          printf("\n\ncollect The 'Computer science Essentials' Book ,(And Return* within 3 days)");
      }
      else if(ch==3)
      {
          printf("\n\ncollect The 'Calculus & Matrix Algebra' Book ,(And Return* within 3 days)");
      }
      else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else if(br==2)
    {
     printf("\nThe available Books are:\n1. Theory of Mechanics\n2.Industrial Robotics\n3.Automobile Engineering\n Enter your choice:");
      scanf("%d",&ch);
      if(ch==1)
      {
          printf("\n\ncollect The ' Theory of Mechanics' Book ,(And Return* within 3 days)");
      }
      else if(ch==2)
      {
          printf("\n\ncollect The 'Industrial Robotics' Book ,(And Return* within 3 days)");
      }
      else if(ch==3)
      {
          printf("\n\ncollect The 'Automobile Engineering' Book ,(And Return* within 3 days)");
      }
      else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else if(br==3)
    {
     printf("\nThe available Books are:\n1.Digital Designing\n2.Communicative English\n3.Fundamentals of Digital Circuits\n Enter your choice:");
      scanf("%d",&ch);
      if(ch==1)
      {
          printf("\n\ncollect The 'Digital Designing' Book ,(And Return* within 3 days)");
      }
      else if(ch==2)
      {
          printf("\n\ncollect The 'Communicative English' Book ,(And Return* within 3 days)");
      }
      else if(ch==3)
      {
          printf("\n\ncollect The 'Fundamentals of Digital Circuits' Book ,(And Return* within 3 days)");
      }
      else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else if(br==4)
    {
     printf("\nThe available Books are:\n1.Environmental Engineering II\n2.Water Resources Engineering\n3.analysis of Structure\n Enter your choice:");
      scanf("%d",&ch);
      if(ch==1)
      {
          printf("\n\ncollect The 'Environmental Engineering II' Book ,(And Return* within 3 days)");
      }
      else if(ch==2)
      {
          printf("\n\ncollect The 'Water Resources Engineering' Book ,(And Return* within 3 days)");
      }
      else if(ch==3)
      {
          printf("\n\ncollect The 'analysis of Structure' Book ,(And Return* within 3 days)");
      }
      else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else
      {
          printf("\n\nInvalid Choice");
      }
    }
    else
    {
        printf("\nInvalid Choice");
    }
   
}
