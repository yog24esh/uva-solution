#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(scanf("%d",&n) != EOF ){
		int arr[n] = {0};
		int arr1[n-1] = {0};
		int map = 6;
		for(int i=1;i<n;i++) arr1[i-1]=i;
		int flag = 5;
		for(int i=0;i<n;i++) cin>>arr[i];
		int arr12[n]={0};
	
		for(int i=0;i<n-1;i++){
			if(n==1) {
				cout<<"Jolly"<<endl;
				break;
			}
			else if(abs(arr[i]-arr[i+1])<1||abs(arr[i]-arr[i+1])>=n){
				cout<<"Not jolly"<<endl;
				map =1;
				break;
			}
			else {
				arr12[i] = abs(arr[i]-arr[i+1]);
			
			}}
	sort(arr12,arr12+(n-1));
	
	for(int i=0;i<n-1;i++){
		if(arr1[i]!=arr12[i]) {
			flag = 0;
			break;
		}}
	if(flag==0&&map!=1) cout<<"Not jolly"<<endl;
	else if (flag!=1&&map!=1) cout<<"Jolly"<<endl;
	
	}
	return 0;
}
