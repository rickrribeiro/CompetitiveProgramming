#include <bits/stdc++.h>

using namespace std;

int main(){
    //0 - esq 1 dir
    int  Gesq = 0, Gdir = 0, Pesq = 0, Pdir = 0;
    bool saqueesq = true,vezesquerda=true,partidaconc = false;
    string game = "";

    cin>>game;
    for (int x = 0; x < game.length();x++){
        char c = game[x];
        if(c == 'S'){
            if(saqueesq == true){
                Pesq += 1;
            }
            else{
                Pdir += 1;
            }            
        }
        else if (c == 'R'){
            if(saqueesq == true){
                Pdir += 1;
            }
            else{
                Pesq += 1;
            }   
            saqueesq = !saqueesq;

        }
        else{
            if(x == game.length() -1 ){
                if (Gesq > Gdir){
                    cout<<Gesq<<" (winner) - "<<Gdir<<endl;
                }
                else{
                    cout<<Gesq<<" - "<<Gdir<<" (winner)"<<endl;
                }
                
            }
            else{
                if (saqueesq){
                        cout<<Gesq<<" ("<<Pesq<<"*)"<<" - "<<Gdir<<" ("<<Pdir<<")"<<endl;
                }
                else{
                    cout<<Gesq<<" ("<<Pesq<<")"<<" - "<<Gdir<<" ("<<Pdir<<"*)"<<endl;
                }
            }

        }

        //check games
        //10 p
        if (Pesq == 10){
            Gesq+=1;
            saqueesq = true;
            Pesq = Pdir = 0;
        }
        else if(Pdir == 10){
            Gdir += 1;
            saqueesq=false;
            Pesq = Pdir = 0;
        }
        //5 +- 2
        if((Pesq >= 5) && (Pesq-Pdir >= 2 )){
            Gesq+=1;
            saqueesq = true;
            Pesq = Pdir = 0;
        }
        else if((Pdir >= 5) && (Pdir-Pesq >= 2 )){
            Gdir += 1;
            saqueesq=false;
            Pesq = Pdir = 0;
        }

        if( Gdir == 2 || Gesq ==2){
            partidaconc=true;
            Pesq = Pdir = 0;
        }

    }


    return 0;
}