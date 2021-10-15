#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double x,y,r1,r2;

    while(cin>>x>>y>>r1>>r2 && (x!=0 &&y!=0&&r1!=0&&r2!=0)){
        //double diagonalRetangulo = sqrt((x*x)+(y*y));
        //double circulos = r1+sqrt(2*r1*r1) + r2+sqrt(2*r2*r2);// pega o raio + a diagonal do quadrado formado do canto do elevador até o centro do circulo
        double circulos = r1+r2;
        int x1 = x-r1;
        int x2 = y-r1;
        double diagonalRetangulo = sqrt(((x1-r2)*(x1-r2))+((x2-r2)*(x2-r2)));
        
        if(r1*2>x || r1*2>y || r2*2>x || r2*2>y){
            cout<<"N"<<endl;
        }else if(circulos<=diagonalRetangulo){
            cout<<"S"<<endl;
        }else{
            cout<<"N"<<endl;
        }
    }

}