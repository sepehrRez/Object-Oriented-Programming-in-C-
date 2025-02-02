#include<iostream>
using namespace std;

class player{
    public:
int nomre;
string name;

};

class team
{
    string teamname;
    player bazikonan[5];
    
    public:
    void get();
    void founder()
    {
        cout<<teamname<<"\n"<<bazikonan[flag].name<<" "<<bazikonan[flag].nomre;
    }
    int avvreg=0;
    int flag=0;
};

void team::get()
{
    //cout<<"enter team name\n";
 cin>>teamname;
 int test=0;
 for(int i=0;i<5;i++)
 {
     //cout<<"enter name bazikon\n";
   cin>>bazikonan[i].name;
  // cout<<"enter nomre\n";
   cin>>bazikonan[i].nomre;
   avvreg+=bazikonan[i].nomre;
    if(test<bazikonan[i].nomre)
    {
        test=bazikonan[i].nomre;
        flag=i;
    }

 }
}

int main()
{
    team clubs[2];
    clubs[0].get();
    cin.ignore();
    clubs[1].get();
    if(clubs[0].avvreg>clubs[1].avvreg)
        clubs[0].founder();
    else
        clubs[1].founder();
    return 0;
}