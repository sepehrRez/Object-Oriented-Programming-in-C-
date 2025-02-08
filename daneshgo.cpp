#include<iostream>
using namespace std;

struct tarikh
{
    string  sal;
    string mah;
    string roz;
};


struct daneshgo
{
   string code;
   char esm[30];
   float moadel;
   tarikh tavalod;
};
daneshgo daryaft(daneshgo );
int main()
{
    int n;
    cin>>n;
    struct daneshgo*etelaat;
    etelaat=new daneshgo[n];
     daneshgo vorod;

    for(int i=0;i<n;i++)
     etelaat[i]=daryaft(vorod);
int flag=0;
    for (int i = 0; i < n-1; i++)
    {
       if(etelaat[i].moadel<etelaat[i+1].moadel)
      flag=i+1;
    }
    cout<<etelaat[flag].code<<" ";
    cout<<etelaat[flag].esm<<" ";
    cout<<etelaat[flag].moadel<<" ";
    cout<<etelaat[flag].tavalod.sal<<" ";
    cout<<etelaat[flag].tavalod.mah<<" ";
    cout<<etelaat[flag].tavalod.roz;
    delete [] etelaat;
    return 0;
}

daneshgo daryaft(daneshgo fard )
{
    cin>>fard.code;
    cin>>fard.esm;
    cin>>fard.moadel;
    cin>>fard.tavalod.sal;
    cin>>fard.tavalod.mah;
    cin>>fard.tavalod.roz;
    return fard;
}
