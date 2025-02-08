#include<iostream>
using namespace std;
struct baze
{
    int shoro;
    int payan;
};
void daryaft(baze *);
void display(baze );
int main()
{
    int n;
    cin>>n;
    baze * mahdode=new baze[n];
    for(int i=0;i<n;i++)
        daryaft(&mahdode[i]);

    for(int i=0;i<n-1;i++)
    {
      int temp=0;
        if((mahdode[i].payan-mahdode[i].shoro)>(mahdode[i+1].payan-mahdode[i+1].shoro))
            {
            temp=mahdode[i+1].shoro;
           mahdode[i+1].shoro=mahdode[i].shoro;
            mahdode[i].shoro=temp;

            temp=mahdode[i+1].payan;
            mahdode[i+1].payan=mahdode[i].payan;
            mahdode[i].payan=temp;
           }
    }
    for(int i=0;i<n;i++)
        display(mahdode[i]);


    delete [] mahdode;
    return 0;
}
void daryaft(baze *mahdode)
{
    cin>>mahdode->shoro;
    cin>>mahdode->payan;
}

void display(baze mahdode)
{
    cout<<"["<<mahdode.shoro<<","<<mahdode.payan<<"]";
}
