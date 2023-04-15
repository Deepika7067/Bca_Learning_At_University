//Input marks of 10 students in an array and then find the student with maximum marks

int main()
{ int i;
  int marks[]={50,60,40,59,70,80,30,20,77,43};
  for (i=1;i<10;i++)
  {
    if(marks[0]<marks[i])
    { marks[0]=marks[i];
    }
  }
 printf("Maximum marks is %d",marks[0]);
    
  return 0;
}
