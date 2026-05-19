
#include<bits/stdc++.h>
using namespace std;
class person{
string name;
int age;
public:
    person(string name1,int age1){
    name=name1;
    age=age1;
    }
    void displayperson(){
    cout<<"Name is: "<<name<<endl<<"Age is: "<<age<<endl;
    }
};
class employee{
int employeeid;
string department;
public:
    employee(int e,string dep){
    employeeid=e;
    department=dep;
    }
    void displayemployeeinfo(){
    cout<<"Employee id is: "<<employeeid<<endl<<"Department is: "<<department<<endl;
    }
};
class manager:public person,public employee{
int teamsize;
public:
    manager(string name1,int age1,int em,string dep,int tm ):person(name1,age1),employee(em,dep){
    teamsize=tm;
    }
    void displaymanagerinfo(){
    displayperson();
    displayemployeeinfo();
    cout<<"Teamsize is: "<<teamsize<<endl;
    }

};
int main(){

 manager ob("Fardin",22,203934,"Finance",6);
 ob.displaymanagerinfo();

}
