#include<bits/stdc++.h>

using namespace std;

int main(){
	ifstream inFile;
	inFile.open("inputF.txt");
	vector<long long int> inf;
	long long int x;
	while(inFile >> x){
		inf.push_back(x);
	}
	cout<<inf.size()<<endl;
	x=3;
	
	long long int aux; // aux for some conversions and quick uses
	long long int B,L,D;//B=BOOK, L= LIBRARIE, D=DAYS, score=book score, nbooks = nbooks per librarie, signup = days to signup, ship = shipped per day, blist = list books
	long long int totalDays=0, scanned=0;//var to count signupdays and see if is it possible to have more libraries
	//cin>>B>>L>>D;
	B=inf[0];
	L=inf[1];	
	D=inf[2];
	long long int score[B],nBooks[L],signup[L],ship[L],numberInTotal[L]; //numberInTotalD is the maximum number os books that the library can send
	cout<<"mandascore"<<endl;
	vector< vector<long long int> > bList;
	for(long int i=0;i<B;i++,x++){//Get the score of each book
		//cin>>score[i];
		score[i]=inf[x];
	}
	cout<<"fim score"<<endl;
	for(long long int i=0;i<L;i++){ //get the data of each library
		//cin>>nBooks[i]>>signup[i]>>ship[i];
		nBooks[i]=inf[x];
		signup[i] = inf[x+1];
		ship[i] = inf[x+2];
		x+=3;
		//myfile<<D<<" "<<totalDays<<" "<<signup[i]<<"\n";
		if(D>(totalDays+signup[i])){//if it's possible to register
			//myfile<<"b";
			scanned++;//number of libraries scanned
		}   
			vector< long long int > books;
			for(int j=0;j<nBooks[i];j++,x++){
				aux=inf[x];
				books.push_back(aux);//fill the vector with the books and after push to the general vector
			}
			bList.push_back(books);

			/*//calc for number of books in total
			numberInTotal[i] = (D-signup[i])*ship[i];
			//end calc for number of books in total */
			totalDays+=signup[i];
		
		
	}
	cout<<"saiu aq"<<endl;
	//OUTPUT
	//myfile<<"acabaaq\n\n";
	ofstream myfile;
	myfile.open("outputF.txt");
	myfile<<scanned<<"\n"; // print number of libraries
	
	totalDays=0; //totaldays = 0 to get the maximum
	for(int i=0;i<scanned;i++){ //its getting in order. Its necessary to do the calculus to rank them, but its a good start
		if(nBooks[i]+signup[i]<D-totalDays){//remember if its necessary D-1
			aux=nBooks[i];//it will send all books
			
		}else{
			aux = D-(totalDays+signup[i]);// number of books to be send before the last day - remember to put * ship/day
			
		}
		totalDays+=signup[i];// day to the next signup
		myfile<<i<<" "<<aux<<"\n";//print librarie ID and number of books
		for(int j=0;j<aux;j++){//print all books to scan
			myfile<<bList[i][j];
			if(aux!=j+1){
				myfile<<" ";
			}
		}
		myfile<<"\n";

	}
	myfile.close();
	
}





