#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
 srand(time(0));
 int rand_1;
 int rand_2;
 int rand_3;
 char alp;
 int user_choice;
 int user_guess;
 int user_guess2;
 int user_guess3;
 cout<<"Enter the user choice:";
 cin>>user_choice;
 
 
 if((user_choice!=1)&&(user_choice!=2)&&(user_choice!=3)&&(user_choice ==4))
 {
  cout<<"Invalid input."<<endl; }
 
 else if((user_choice==1)&&(user_choice!=2)&&(user_choice!=3)&(user_choice!=4))
 {
  rand_1 = (rand() % 20)+1;
  rand_2 = (rand() % 20)+1;
  cout<<"Display the first number:"<<rand_1<<endl;
  cout<<"Display the second number:"<<rand_2<<endl;
  
  
  cout<<"Enter either H for Higher or L for Lower:";
  cin>>alp;
  
                                                             // if user enters H , user wins or loses.
  if((alp=='H')&&(alp!='L')) {
                                                            // if user enters L.user wins or loses.
  if((rand_2>rand_1)) {
  cout<<"User wins."<<endl;
  }
  
  
  else if((rand_2<rand_1)) {
  cout<<"User lost."<<endl;
  }
  }
  
  else if((alp=='L')&&(alp!='H')) {
  
  if((rand_2>rand_1)) {
  cout<<"User wins."<<endl;
  }
  
  else if((rand_2<rand_1)) {
  cout<<"User lost."<<endl;
  }
  }
  
  else {
  cout<<"User neither wins nor loses."<<endl;
 } 
 }
  
  else if((user_choice!=1)&&(user_choice==2)&&(user_choice!=3)&&(user_choice !=4))
  {
   rand_1 = (rand() %3)+1 ;
   
   cout<<"Display the first number:"<<rand_1<<endl;
   
    
   
   cout<<"Enter either P for Paper or S for Scissors or R for Rock:";
   cin>>alp;
                                                                               // Value of Paper is equal to one.
                                                                               // Value of Scissor is equal to two.
                                                                               //Value of Rock is equal to three.
   
   
   
   if((alp=='P')&&(alp!='S')&&(alp!='R')) {
  
   if((rand_1==1)) {
   cout<<"Paper beats Rock."<<endl;
   }
   
   else {
   cout<<"Wrong guess."<<endl;
   }
   }
   
                                                                          // for 1,Paper beats Rock.
                                                                          // for 2.Scissor beats paper.
                                                                          // for 3.Rock cuts the paper.
   else if((alp=='S')&&(alp!='P')&&(alp!='R')) {
   
   if((rand_1==2)) {
   cout<<"Scissor beats Paper."<<endl;
   }
   
   else { 
     cout<<"Wrong guess."<<endl;
   }
   }
   else if ((alp='R')&&(alp!='P')&&(alp!='S')) {
   
   
   if((rand_1==3)) {
   cout<<"Rock beats Scissors."<<endl;
   }
   
   else {
   cout<<"Wrong guess."<<endl;
   }
   }
   
   else {
   cout<<"Neither Rock wins Nor Scissors Nor Paper."<<endl;
   }
   }
   
    
   else if((user_choice==3)&&(user_choice!=1)&&(user_choice!=2)&&(user_choice !=4)) {
   
   rand_1 = (rand() % 9);
   rand_2 = (rand() % 9);
   rand_3 = (rand() % 9);
   
   cout<<rand_1<<endl;
   cout<<rand_2<<endl;
   cout<<rand_3<<endl;
   
   cout<<"Guess First number or second number or third number:";
   cin>>user_guess;
   
   
   cout<<"Guess First number or second number or third number:";
   cin>>user_guess2;
   
   cout<<"Guess First number or second number or third number:";
   cin>>user_guess3;
   
   
   
   if((user_guess==rand_1)&&(user_guess2==rand_2)&&(user_guess3==rand_3)) {
   
   cout<<"Three matching in exact order."<<endl; }
   
   
   else if((user_guess==rand_3)&&(user_guess2==rand_2)&&(user_guess3==rand_1)) {
   
   cout<<"Three matching but in reverse order."<<endl; }
   
   else if((user_guess==rand_1)&&(user_guess2!=rand_2)&&(user_guess3!=rand_3)) {
   
   cout<<"Anyone matching."<<endl; }
   
   
   else if((user_guess==rand_1)&&(user_guess2==rand_2)&&(user_guess3!=rand_3)) {
   
   cout<<"Two matching."<<endl; }
   
   else if((user_guess!=rand_1)&&(user_guess2!=rand_2)&&(user_guess3!=rand_3)) {
   
   cout<<"No matches at all."<<endl; }
   
   else {
   cout<<"Error."<<endl; 
   
    }
    }
    return 0;
  }
