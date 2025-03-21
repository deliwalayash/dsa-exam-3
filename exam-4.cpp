#include<iostream>

using namespace std;

int main(){

     int i,j,s;

     for(i =5;i>=1;i--){
        for(s=i;s>1;s--){
            cout << "  ";
        }
        
        for (j=i;j<=5;j++){
            cout << j << " ";
        }
        for (j=i;j<=4;j++){
            cout << j << " ";
        }

        cout << endl;
     }
}

