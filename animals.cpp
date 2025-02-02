#include<iostream>
using namespace std;

class animal
{
    protected:
 int power,weight;
 public:
    int animalpower(){return 1;}; 
    void get(){cin>>weight;}
};

class lion:private animal
{
   public:
     int animalpower()
     {
         return power*weight;
     }
     void get()
     {
         cin>>power;
        cin>>weight;
     }
};

class tiger :private animal
{
public:
    int animalpower()
    {
        return power+weight;
    }
    void get()
    {
     cin>>power;
     cin>>weight;
    }
};

int main()
{
    int n;
    cin>>n;
    lion shir[n];
    tiger babr[n];
    animal heivon[n];
    string temp[n];
   int flag1=0,flag2=0,flag3=0,flag4=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp[i];
        if(temp[i]=="lion")
        {
            shir[flag1].get();
             flag1++;
        }
        else
        {
            babr[flag2].get();
            flag2++;
        }
    }
   
   for(int i=0;i<n;i++)
   {
       if(temp[i]=="lion")
       {
            cout<<"lion "<<shir[flag3].animalpower()<<endl;
            flag3++;
       }

       else
       {
           cout<<"tiger "<<babr[flag4].animalpower()<<endl;
           flag4++;
       }
   }
    return 0;
}