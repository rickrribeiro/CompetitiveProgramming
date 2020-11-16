#include <bits/stdc++.h>

using namespace std;

int main(){

int array[11][11] = {0};
int n,d,l,r,c;
int valid = 0;
cin>>n;

while (n-->0){

cin>>d>>l>>r>>c;
if (valid==1){continue;}
if(d==0){
if(c+l-1 > 10 || c <= 0){
valid =1;
// cout<<"in1";
continue;
}
for(int x = c;x < c+l; x++ ){
    if ( array[r][x] == 1 ){
        valid=1;
        // cout<<"in2";
        break;
    }
    else{
        array[r][x] = 1;
    }

}

}

else{
if(r+l-1 > 10 || r <= 0){
    // cout<<"in3";
valid =1;
continue;
}
for(int x = r;x < r+l; x++ ){
    if ( array[x][c] == 1 ){
        valid=1;
        // cout<<"in4";
        break;
    }
    else{
        array[r][x] = 1;
    }

}



}


}

if (valid==0){
    cout<<"Y"<<endl;

}
else{

    cout<<"N"<<endl;
}
return 0;
}