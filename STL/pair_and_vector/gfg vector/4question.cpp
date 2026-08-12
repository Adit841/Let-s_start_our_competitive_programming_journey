/*
    Given two arrays where the first array represents the roll number of the students, and the second array represents the marks of the students. The task is to sort the students according to their marks and print them
*/

#include<bits/stdc++.h>
using namespace std;

bool MyCap(pair<int,int> p1, pair<int,int> p2){
    return p1.second > p2.second;
}
void a(int arr[], int ab[], int n){
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        v.push_back({arr[i],ab[i]});
    }
    sort(v.begin() , v.end(), MyCap);

    for(int i = 0; i < n; i++){
        cout << v[i].first << " " << v[i].second;
        cout << endl;
    }
}
int main(){
    int roll[] = {101,108,103,105};
    int marks[] = {70,80,40,90};
    a(roll,marks,3);
    return 0;
}