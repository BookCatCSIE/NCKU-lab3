#include <iostream>   
#include <fstream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ifstream inFile("file.in",ios::in);
	int n,i,sum=0;
	inFile >> n;
    const int nu = n;
	vector<int> cow(nu);
	for(i=0;i<nu;++i){
		inFile >> cow.at(i);
	}
	//for(i=0;i<nu;++i){
	//	cout<<cow.at(i)<<endl;
    //}
	sort(cow.begin(),cow.end());
	//for(i=0;i<nu;++i){
	//	cout<<cow.at(i)<<endl;
    //}
	//cow.size()
	for(i=3;i<nu;++i){
		sum+=cow.at(i);
	}
	cout<<sum<<endl;
	return 0;
}
