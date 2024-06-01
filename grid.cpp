#include<iostream>
using namespace std;

int main() {

int index, index2;
int diff;
int choice;
cout<<"Enter your first index:";
cin>>index;

cout<<"Enter your second index:";
cin>>index2;


if (((index >=1 )&&(index<=9)  ||  (index >=19 )&&(index<=27) || (index >=37)&&(index<=45) || (index >=55 )&&(index<=63) || (index >=73)&&(index<=81)) &&  ((index2 >=1 )&&(index2<=9)  ||  (index2>=19 )&&(index2<=27) || (index2 >=37)&&(index2<=45) || (index2>=55 )&&(index2<=63) || (index2>=73)&&(index2<=81))) {

if((index>=index2)) {
diff= index-index2;
diff= diff%3; }


else {
diff= index2-index;                                                 // if both indexes are matching , boxes have same colour
diff= diff%3; }

                                                                    // if both indexes are not matching,boxes have diff col.

if(diff==0) {
cout<<"Same colour."<<endl; }

else {
 cout<<"Different colour."<<endl; }
}





else if ( !((index >=1 )&&(index<=9)  ||  (index >=19 )&&(index<=27) || (index >=37)&&(index<=45) || (index >=55 )&&(index<=63) || (index >=73)&&(index<=81)) && !((index2 >=1 )&&(index2<=9)  ||  (index2>=19 )&&(index2<=27) || (index2 >=37)&&(index2<=45) || (index2>=55 )&&(index2<=63) || (index2>=73)&&(index2<=81))) {


if((index>=index2)) {
diff=index-index2;                                          // if both indexes are matching , boxes have same colour.
diff=diff%3; }

else  {                                                        // if both indexes are not matching,boxes have diff col.
diff=index2-index;
diff=diff%3; }


if(diff==0) {
cout<<"Same colour."<<endl;
}

else {
cout<<"Different colour."<<endl; 

}
}






///////// same as above this is for star



else if ( ((index >=1 )&&(index<=9)  ||  (index >=19 )&&(index<=27) || (index >=37)&&(index<=45) || (index >=55 )&&(index<=63) || (index >=73)&&(index<=81)) && !((index2 >=1 )&&(index2<=9)  ||  (index2>=19 )&&(index2<=27) || (index2 >=37)&&(index2<=45) || (index2>=55 )&&(index2<=63) || (index2>=73)&&(index2<=81))) {



if((index>=index2)) {


index = index%3;
index2 = index2%3;                                           // if both indexes are matching , boxes have same colour.
diff=index - index2;
}


else {
                                                             // if both indexes are not matching,boxes have diff col.
index = index%3;
index2 = index2%3;                                           
diff = index2 - index; }




if((diff==0)) {
cout<<"Different  colour."<<endl; }



else {

cout<<"Same colour."<<endl; }
}




if (((index >=1)&&(index <=74) || (index>= 4)&&(index <=76) || (index>=7)&&(index <=79)|| ((index2 >=1) && (index2 <=74) || (index>=4)&&(index<=76) || (index>=7)&&(index<=79))) && ((index >=12)&&(index <=75) || (index>=15)&&(index <=69) || (index>=18)&&(index<=72) && (index2 >=12)&&(index2 <=75) || (index2>=15)&&(index2 <=69)|| (index2>=18)&&(index2<=72))) {
 
 if((index>=index2)) {
 index -index2; 
 diff=diff %3;                                             // if both indexes are matching , boxes have same colour.
 }
 
 
 else {                            
 diff=index2 - index;                                         // if both indexes are not matching,boxes have diff col.
 diff=diff %3; }
 
 
 if((diff==0)) {
 
 cout<<"Same colour."<<endl; }
 
  
 else  {
 cout<<"No proper colour."<<endl; }
 }
 
 

cout<<"Enter your choice:"<<endl;
cin>>choice;
    
 switch(choice)
    {
        case 1  :
        case 4  :
        case 7  :
        case 12 :
        case 15 :
        case 18 :
        case 19 :
        case 22 :
        case 25 :
        case 30 :                                             // if both cases are matching, boxes are grey.
        case 33 :
        case 36 :
        case 37 :
        case 40 :
        case 43 :
        case 48 :
        case 51 :
        case 54 :
        case 55 :
        case 58 :
        case 61 :
        case 66 :
        case 69 :
        case 72 :      
        case 73 :
        case 76 :
        case 79 :
        switch (choice)
        {
            case 1  :
            case 4  :
            case 7  :
            case 12 :
            case 15 :
            case 18 :
            case 19 :
            case 22 :
            case 25 :
            case 30 :
            case 33 :
            case 36 :
            case 37 :
            case 40 :
            case 43 :
            case 48 :
            case 51 :
            case 54 :
            case 55 :
            case 58 :
            case 61 :
            case 66 :
            case 69 :
            case 72 :      
            case 73 :
            case 76 :
            case 79 :
            cout<<"Both the boxes have grey colour."<<endl;
        }
    }   
    
    switch(choice)
    {
        case 2  :
        case 5  :
        case 8  :
        case 10 :
        case 13 :
        case 16 :
        case 20 :
        case 23 :
        case 26 :
        case 28 :
        case 31 :
        case 34 :
        case 38 :
        case 41 :
        case 44 :
        case 46 :
        case 49 :
        case 52 :
        case 56 :
        case 59 :
        case 62 :
        case 64 :
        case 67 :
        case 70 :
        case 74 :
        case 77 :     
        case 80 :
        
        switch (choice)
        {
            
        case 2  :
        case 5  :
        case 8  :
        case 10 :
        case 13 :
        case 16 :
        case 20 :                                              // if both cases are same,boxes are blue.
        case 23 :
        case 26 :
        case 28 :
        case 31 :
        case 34 :
        case 38 :
        case 41 :
        case 44 :
        case 46 :
        case 49 :
        case 52 :
        case 56 :
        case 59 :
        case 62 :
        case 64 :
        case 67 :
        case 70 :
        case 74 :
        case 77 :     
        case 80 :
        cout<<"Both the boxes have blue colour."<<endl;
        }
        
    }
        
        
        
        
        switch(choice)
    {
        case  3  :
        case  6  :
        case  9  :
        case  11 :
        case  14 :
        case  17 :
        case  21 :
        case  24 :
        case  27 :
        case  29 :
        case  32 :
        case  35 :                                // using nested switch,check if both cases are same .
        case  39 :
        case  42 :                               // if same, both boxes are of red color.
        case  47 :
        case  50 :
        case  53 :
        case  57 :
        case  60 :
        case  63 :
        case  65 :
        case  68 :
        case  71 :
        case  75 :      
        case  78 :
        case  81 :
        
        switch (choice)
        {
         case 3  :
         case 6  :
        case  9  :
        case  11 :
        case  14 :
        case  17 :
        case  21 :
        case  24 :
        case  27 :
        case  29 :
        case  32 :
        case  35 :
        case  39 :
        case  42 :
        case  47 :
        case  50 :
        case  53 :
        case  57 :
        case  60 :
        case  63 :
        case  65 :
        case  68 :
        case  71 :
        case  75 :      
        case  78 :
        case  81 :
          cout<<"Both the boxes have red color."<<endl;
        }
    }
        return 0;
}



 
 
 
 
