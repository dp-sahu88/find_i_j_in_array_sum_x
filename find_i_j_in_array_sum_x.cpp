//Author:DEADPOOL
//User@DEADPOOL
//Device name:LAPTOP-MGJPSU5N
//***************************

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


pair<int,int> hasPairWithSumX( const vector <int> v ,  int S){
    vector<int> complements;
    pair <int,int> pos ={-1,-1};
    for (int element : v ){
        pos.second++;
        auto it  = find(complements.begin(),complements.end(),element);
        if (it != complements.end()){
            pos.first = it-complements.begin();
            return pos;
        }
        complements.push_back(S-element);
    }
    return pos;
}



int main(){
    vector<int> vect;
    pair <int,int> result;
    int n,x,sum;
    cout << "enter the number of element in "<<endl;
    cin >> n ;
    cout << "enter the values to the array"<<endl;
    while (n>0){
        cin>>x ;
        vect.push_back(x);
        n--;
    }
    cout <<endl<< "enter the value of sum"<<endl;
    cin >> sum;
    result =  hasPairWithSumX(vect ,sum);
    if(result.first!=-1){
        cout <<endl<<"Array["<<result.first<<"] + Array["<<result.second<<"] = " <<sum;
        cout <<endl<<vect[result.first]<<" + "<<vect[result.second]<<" = "<< sum;
    }else{
        cout << "Sum value not found";
    }
    return 0;
}













