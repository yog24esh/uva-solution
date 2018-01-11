#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	vector<int> vect;
	while(str != "#" ){
		for(char c : sample){
			vect.push_back((int)c);
		}
		if(next_permutation(vect,vect+vect.size()) ==0){
			cout<<"No Successor"<<endl;
			return;
		}
		else{
			for(int i=0;i<vect.size();i++) cout<<char(vect[i]);
			cout<<endl;
		}
	}
	return 0;
}
