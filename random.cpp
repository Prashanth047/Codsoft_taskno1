#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    cout<<"NUMBER GUESSING GAME\n\n";
    cout<<"you will have to guess the number generated!!!! :)\nstart with a number \n";
    srand(time(0));
    int n,k;
    n=rand()%100;
    while(1)
    {
        cout<<"guess:";
        cin>>k;
         if(k==n)
            {
                 cout<<"wow u have won the game\n";
                 break;
            }
         else if(k>n)
         {
             cout<<k<<"is "<<k/n<<"times larger\n";

         }
         else
            cout<<k<<"is "<<n/k<<"times smaller\n";
    }
    cout<<"game over!!!!!!!!";
}
