#include<iostream>

using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;
    int x = b+c*2;
    int y = a+c;
    int z = a*2+b;
    if(x<=y && x<=z){
        cout<<x*2<<endl;
    }else if(y<=x && y<=z){
        cout<<y*2<<endl;
    }else{
        cout<<z*2<<endl;
    }
}