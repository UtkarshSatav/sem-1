#include <iostream>
using namespace std;

class teacher{
public:
    string name;
    string subject;
    string dept;
    int salary;
    int age;
    int teachID;

    void changedept(string newdept){
        dept = newdept;
    }
};

int main(){
    teacher t1;
    teacher t2;
    teacher t3;
    teacher t4;
    teacher t5;
    
    {
    
    t1.name = "Gandharva Dewan";
    t2.name = "Pratik Sagwaker";
    t3.name = "Amitabh Morey";
    t4.name = "Aadarsh Deshmukh";
    t5.name = "Utkarsh Satav";

    t1.subject = "Design and Media";
    t2.subject = "Philosophy";
    t3.subject = "Cyber Security";
    t4.subject = "Coding";
    t5.subject = "Counselling";

    t1.dept = "B.tech,BBA,MBA";
    t2.dept = "B.tech,BBA,MBA";
    t3.dept = "B.tech";
    t4.dept = "B.tech";
    t5.dept = "B.tech,BBA,MBA";

    t1.salary = 150000 ;
    t2.salary = 150000 ;
    t3.salary = 9999999 ;
    t4.salary = 150000;
    t5.salary = 10000000 ;

    t1.age = 19 ;
    t2.age = 23 ;
    t3.age = 18 ;
    t4.age = 18 ;
    t5.age = 18 ;

    t1.teachID = 169 ;
    t2.teachID = 269 ;
    t3.teachID = 369 ;
    t4.teachID = 469 ;
    t5.teachID = 569 ;
    
    }
    
    int a;
    cout<<"For Teachers Details, Enter the Teachers id :";
    cin>>a;

    if(a == t1.teachID){
        cout<<t1.name <<endl ;
        cout<<t1.subject <<endl ;
        cout<<t1.dept <<endl ;
        cout<<t1.salary <<endl ;
        cout<<t1.age <<endl ;
    }
    else if(a == t2.teachID){
        cout<<t2.name <<endl ;
        cout<<t2.subject <<endl ;
        cout<<t2.dept <<endl ;
        cout<<t2.salary <<endl ;
        cout<<t2.age <<endl ;
    }
    else if(a == t3.teachID){
        cout<<t3.name <<endl ;
        cout<<t3.subject <<endl ;
        cout<<t3.dept <<endl ;
        cout<<t3.salary <<endl ;
        cout<<t3.age <<endl ;
    }
    else if(a == t4.teachID){
        cout<<t4.name <<endl ;
        cout<<t4.subject <<endl ;
        cout<<t4.dept <<endl ;
        cout<<t4.salary <<endl ;
        cout<<t4.age <<endl ;
    }
    else if(a == t5.teachID){
        cout<<t5.name <<endl ;
        cout<<t5.subject <<endl ;
        cout<<t5.dept <<endl ;
        cout<<t5.salary <<endl ;
        cout<<t5.age <<endl ;
    }

}