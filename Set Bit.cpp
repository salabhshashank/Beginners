#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int i;
    cout<<"Enter the position where bit is to be changed:";
    cin>>i;

    int mask=1<<i;
    int ans= (n|mask)!=0;

    cout<<ans<<endl;
    cout<<"The new number after changing the bit is "<<(n|mask);

    return 0;

}
