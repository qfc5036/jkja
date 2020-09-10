// Author: Cui Qiaoxu qfc5036@psu.edu
// Collaborator: John O'Toole Jbo5232@psu.edu
// Collaborator: Ching-Ju Chen cxc6001@psu.edu

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
int main(void) {
  char * grade = readline("Enter your CMPSC 131 grade: ");
  double grades = atof(grade);
  if (grades>=93.0){
    puts ("Your letter grade for CMPSC 131 is A.");
  }
  else if (grades>=90.0){
    puts ("Your letter grade for CMPSC 131 is A-.");
  }
  else if (grades>=87.0){
    puts ("Your letter grade for CMPSC 131 is B+.");
  }
  else if (grades>=83.0){
    puts ("Your letter grade for CMPSC 131 is B.");
  }
  else if (grades>=80.0){
    puts ("Your letter grade for CMPSC 131 is B-.");
  }
  else if (grades>=77.0){
    puts ("Your letter grade for CMPSC 131 is C+.");
  }
  else if (grades>=70.0){
    puts ("Your letter grade for CMPSC 131 is C.");
  }  
  else if (grades>=60.0){
    puts ("Your letter grade for CMPSC 131 is D.");
  }
  else {
    puts ("Your letter grade for CMPSC 131 is F.");
  }
  return 0;
}