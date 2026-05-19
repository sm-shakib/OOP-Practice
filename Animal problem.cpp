#include<bits/stdc++.h>
using namespace std;
class animal{
public:
    void eat(){
    cout<<"Eating"<<endl;
    }
};
class bird:public animal{
public:

    void watch(){
     cout<<"Watching"<<endl;  
    }

};
class sparrow:public bird{
public:
    void chirp(){
    cout<<"Chirping"<<endl;
    }

    void sleep(){
    cout<<"Sleeping"<<endl;
    }

};
int main(){

 sparrow ob;

 ob.chirp();
 ob.sleep();
}
