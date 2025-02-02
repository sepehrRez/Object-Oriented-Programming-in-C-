#include<iostream>
using namespace std; 

class human
{
    public:
    float age;
    string name;
      void persondetail()
 {
     cout<<name<<" "<<age<<" ";
 }
    human(){age=0;}
};


 class Student:public human
 {  public:
     float grade;
     void persondetail();
     Student(){grade=0;}
 };
 void Student ::persondetail()
 {
     cout<<name<<" "<<age<<" "<<grade;
 }
 class classroom
 {
     int n;
     Student daneshjo[30];
     
     public:
     classroom(int n){ this->n=n;}
     void daryaft(int n);
     void max();
     void min();
     void Average();
 };


 void classroom ::max()
 {
     int flag=0;
     for(int i=0;i<n-1;i++)
     {
         if(daneshjo[flag].grade<daneshjo[i+1].grade)
             flag=i+1;
         else if((daneshjo[flag].grade==daneshjo[i+1].grade)&&(daneshjo[flag].age<daneshjo[i+1].age))
          flag=i+1;
     }
     cout<<"max ";
    daneshjo[flag].persondetail();
     cout<<endl;
 }

 void classroom ::min()
 {
     int flag=0;
     for(int i=0;i<n-1;i++)
     {
         if(daneshjo[flag].grade>daneshjo[i+1].grade)
             flag=i+1;
         else if((daneshjo[flag].grade==daneshjo[i+1].grade)&&(daneshjo[flag].age>daneshjo[i+1].age))
             flag=i+1;
     }
    cout<<"min ";
    daneshjo[flag].persondetail();
     cout<<endl;
 }

 void classroom ::Average()
 {
     
     float avv=0;
     for(int i=0;i<n;i++)
         avv+=daneshjo[i].grade;
    cout<<"average "<<(float)avv/n<<endl;
   
 }

void  classroom ::daryaft(int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>daneshjo[i].name;
        cin>>daneshjo[i].age;
        cin>>daneshjo[i].grade;
    }
}

 int main()
 {
     int n;
     cin>>n;
     if(n==0){
            cout<<"average 0"<<endl<<"max "<<endl<<"min ";
            return 0;
     }
     classroom clas1(n);
    clas1.daryaft(n);
    clas1.Average();
    clas1.max();
    clas1.min();
     return 0;
 }