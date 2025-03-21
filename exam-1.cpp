#include<iostream>

using namespace std;

int main(){

     int i,j;

     for(i =1;i<=5;i++){
        int num=41;
        for (j=1;j<=i;j++){
            cout << num << " ";
            num ++;
        }

        cout << endl;
     }
}

//output
// 41 
// 41 42 
// 41 42 43 
// 41 42 43 44 
// 41 42 43 44 45 