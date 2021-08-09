//Author: Debopriya Deb Roy

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j, n, s, t;

//initializing map
    map<string, int> m1{
        {"Chal", 50}, {"Dal", 60}, {"Sobji", 100}};
       
       // getting the size of the map
        cout << m1.size() << endl;
        cout << m1.max_size() << endl;

//displaying map
    for(auto it:m1){
        cout << it.first <<" : " << it.second << endl;
    }

//inserting elements in the map
    m1.insert(make_pair("Lebu", 20));

//displaying map
    for(auto it:m1){
        cout << it.first <<" : " << it.second << endl;
    }


//simple way to insert and update the
    m1["Lebu"] = 50;
    m1["Lebu"]++;
    m1["Murgi"] = 150;
    for (auto it : m1)
    {
        cout << it.first <<" : " << it.second << endl;
    }
//eraseing an element from map is
m1.erase("Lebu");




    return 0;
} 