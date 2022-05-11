#include<bits/stdc++.h>

using namespace std;
//int dist(int x,int y){
double dist(long int x1, long int x2, long int y1,long int y2){   
    return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}

int main(){

    long int r1,x1,y1,r2,x2,y2;
    while(cin>>r1>>x1>>y1>>r2>>x2>>y2){
        if(r2>=r1){
            cout<<"MORTO"<<endl;
        }else{
            // if(dist(x1,x2)<r1-r2 && dist(y1,y2)<r1-r2){
            if(dist(x1,x2,y1,y2)<=r1-r2){
                cout<<"RICO"<<endl;
            }else{
                cout<<"MORTO"<<endl;
            }
        }
    }
}