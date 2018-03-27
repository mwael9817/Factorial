#include <iostream>
using namespace std;
int main (){
    int x,i;
    //Here is the factorial number
    cout<<"Enter the number : ";
    cin>>x;
    //x is the factorial number #num
    if(x==0){
        cout<<"1";
        return 0;
        //the condition of factorial not to be calculated as i=-1
    }
    i=x-1;
    while(i!=0){
        x=i*x;
        i=i-1;;
    }
    cout<<x;
    //print the last value of Factorial
    return 0;
}
