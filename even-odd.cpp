#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
	srand(time(NULL));
	int Even_score , Odd_score = 0;
	int user_num , computer_num = 0;
	
	cout<<"We welcome you to the game of Even and Odds:"<<endl;
	cout<<"The computer will play as Even and you will play as Odds:"<<endl;
	
	while (1) {
		cout<<"Enter a number which belongs in the range from 1 to 10:";
		cin>>user_num;
		if ((user_num <1) || (user_num > 10)) {
		continue;
		}
		
		if((user_num >=1 && user_num <=10) && (user_num %2 != 0)){
		    computer_num = (rand () % 5 ) * 2 ;
			
			cout<<"You chose : " << user_num << "as the odd number." <<endl;
			cout<<"Computer chose:" << computer_num << "as the even number." <<endl;
			
			if ((user_num + computer_num % 2) == 0 ) {
				cout<<"Even wins this round."<<endl;
				Even_score ++;
			}
			else  {
			cout<<"Odd wins this round."<<endl;
			Odd_score ++; 
			}
	}
}
       cout<<"Your score is :";
       cout<<"Even score is:"<<Even_score<<endl;
       cout<<"Odd score is:"<<Odd_score;
       return 0;
}
