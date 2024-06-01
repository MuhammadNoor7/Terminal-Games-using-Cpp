#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
 srand(time(0));
 char op;
 int max;
 int range;
 char neg_allow;
 int rand_1;
 int rand_2;
 int user_ans;
 int exercise;
 
 cout<<"For which operation exercise should be generated?"<<endl;
 cin>>op;

 cout<<"Enter maximum value:";
 cin>>max;

 
 //if((max<1))
 //return 1;                                      
 

 
 

 

 
 
  cout<<"If you want negative numbers to be allowed:";
  cin>>neg_allow;
  if((neg_allow !='y')&&(neg_allow != 'n') && (neg_allow !='Y') && (neg_allow !='N')) {
  cout<<"Invalid Input."<<endl;
  
  }
  
  else if ((neg_allow =='y')&&(neg_allow !='n')) {
 
 
  rand_1 =  rand() % (2* max +1)-(max);                                   // random assigns random values.
  rand_2 =  rand() % (2* max +1)-(max);
  cout<<"Range of random numbers is:"<<rand_1<<rand_2<<endl; 
  }
 
 
 else if ((neg_allow == 'n')&&(neg_allow !='y')) {
  
  rand_1 = (rand() % max) +1 ;                                            // random assigs random values.
  rand_2 = (rand() % max) +1 ;
  
  cout<<"Range of random numbers is:"<<rand_1<<rand_2<<endl; }

  
  
  
  if ((op == '+')) {
  exercise = rand_1+rand_2;
  cout<<"Exercise:"<<rand_1<<" "<<op<<" "<<rand_2<<" = "<<exercise<<endl;
  }
  
  
                     
  
  else if((op == '-')) {
  
  if((rand_2>rand_1)) {
  exercise = rand_2 - rand_1;
 cout<<"Exercise:"<<rand_2<<" "<<op<<" "<<rand_1<<" = "<<exercise<<endl;
 }
  
   
   
  else {
  cout<<"Error."<<endl;
  }
  }
  
  
  
  else if((op == '*')) {
  
 exercise = rand_1 * rand_2;
 cout<<"Exercise:"<<rand_1<<" "<<op<<" "<<rand_2<<" = "<<exercise<<endl;
 }
  
  
  else if((op == '/')) {
  
  if((rand_2 != 0)) {                                                    // division by 0 is not possible.
  
  exercise = rand_1 / rand_2;
   cout<<"Exercise:"<<rand_1<<" "<<op<<" "<<rand_2<<" = "<<exercise<<endl;
  }
  
  else  {
  cout<<"Program terminated."<<endl;
  }
 }
  
  // Display Generated Exercise and ask for the user's answers
  
  cout<<"Let user guess the answer:"<<endl;
  cin>>user_ans;
  
  // Check the users answer and give feedback
  
  

  if(user_ans == exercise) {
  cout<<"Congratulations! Your answer is correct."<<endl; }
  
  else  {
  cout<<"Sorry! Your answer is wrong."<<endl; }
  
  return 0;
}
  
 
  
  
  
  
  
          
 
  
  
 

 
 
 

 
