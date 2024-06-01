#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
     srand(time(0));
    int l = 0;
    int  rows ;
     int columns ;
     
    cout<<"Enter the number of rows:";
    cin>>rows;
    
    cout<<"Enter the number of columns:";
    cin>>columns;
    
    int r = rows-1;  // Initial values for left and right boundaries
    int t = 0;
    int b = columns-1 ;  // Initial values for top and bottom boundaries
    int arr[rows][columns];
    
    // Initialize the array with random values
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            arr[i][j] = rand() % 10;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }  
            // Effort for making Traverse Spiral Pattern
    while ((l <= r) && (t <= b)) {
        // Traverse top row
        
        for (int i = l; i <= b; ++i) {
            cout << arr[t][i] <<" ";
        }
        t++;

        // Effort for making  Traverse Right Column
        for (int i = t; i <= r; ++i) {
            cout << arr[i][b] <<" ";
        }
        b--;

    // Effort for making Traverse Bottom Row (if applicable)
        if (t <= r) {
            for (int i = b; i >= l; --i) {
                cout << arr[r][i] <<" ";
            }
            r--;
        }
//  Effort for making Traverse Left Column (if applicable)
        if (l<= b) {
            for (int i = r; i >= t; --i) {
                cout << arr[i][l] <<" ";
            }
            l++;
        }
        
    }

    return 0;
}
