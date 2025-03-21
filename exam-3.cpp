#include<iostream>

using namespace std;

int main(){

     int i,j,s;

     for(i =1;i<=5;i++){
        for(s=i;s>1;s--){
            cout << "  ";
        }
        
        for (j=i;j<=5;j++){
            if(i % 2 == 1)
            cout << ((j % 2 == 1 ? 1 : 0)) << " ";
            else
            cout << ((j % 2 == 1 ? 0 : 1)) << " ";
            
            
        }

        cout << endl;
     }
}