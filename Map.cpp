//Author: Debopriya Deb Roy | File : c++ file

#include<bits/stdc++.h>
using namespace std;


int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int i,j,k,l,m,n;
//declare variables for map
map<string,int> map1{
    {"Deb", 65},
    {"Arittra", 83},
    {"Maisha", 58},
};
//adding element to map
map1["tasfia"] = 94;
map1["tasfia"] += 94;

//delete element to map
map1.erase("Maisha");

//additional function to count particular key 
cout << map1.count("Maisha");
cout << map1.count("Tashfia");

//printing map
for(auto i=map1.begin(); i!=map1.end();i++){
    cout << i->first << ":" << i->second << "\t";
}
//finding a key in map1
auto it = map1.find("tasfia");
if(it!=map1.end()){
    cout << "Found" << it->first << ":" << it->second << endl;
}

//clear all elements: map1.clear();

return 0;
}