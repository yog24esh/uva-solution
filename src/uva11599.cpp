#include<bits/stdc++.h>
using namespace std;

int main(){
	int noPeople,noHotel,noWeeks,pricePerperson,cost,budget;
	while(scanf("%d%d%d%d",&noPeople,&budget,&noHotel,&noWeeks)!= EOF){
	
	
	vector<float> arr;
	

	for(int i=0;i<noHotel;i++){
		cin>>pricePerperson;
		for(int j=0;j<noWeeks;j++){
			int noBed ; 
			cin>>noBed;
			if(noBed>=noPeople) {
				cost = noPeople * pricePerperson;
				arr.push_back(cost);
			}
		}
	}
	sort(arr.begin(),arr.end());
	if(arr[0]>budget) cout<<"stay home"<<endl;
	else cout<<arr[0]<<endl;
	return 0;
}}
