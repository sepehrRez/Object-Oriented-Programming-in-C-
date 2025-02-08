#include<iostream>
#include<string.h>
using namespace std;
struct bimar
{
    char jens[4];
    string esm;
    float vazn;
};
void daryaft(bimar*);

int main()
{

    int n;
    cin>>n;
    bimar *etelaat=new bimar[n];

    for(int i=0;i<n;i++)
        daryaft(&etelaat[i]);

    int flagpesar=0,flagdokhtar=0;
    float sumpesar=0,sumdokhtar=0;

    for(int i=0;i<n;i++)
    {
        if(!strcmp(etelaat[i].jens,"boy"))
        {
            flagpesar++;
             sumpesar+=etelaat[i].vazn;
        }
        else
        {
            flagdokhtar++;
             sumdokhtar+=etelaat[i].vazn;
        }
    }

    float avgp=0,avgg=0;

    if(flagpesar!=0)
    avgp=(float)sumpesar/flagpesar;
    if(flagdokhtar!=0)
    avgg=(float)sumdokhtar/flagdokhtar;
    
     cout<<"boy "<<flagpesar<<" "<<avgp<<endl;
     cout<<"girl "<<flagdokhtar<<" "<<avgg;
    
   
    delete [] etelaat;
    return 0;
}
void daryaft(bimar* etelaat)
{
    cin>>etelaat->jens;
    cin>>etelaat->esm;
    cin>>etelaat->vazn;
}

