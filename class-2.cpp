#include<iostream>
using namespace std; 
//void spiliter(string );
class word
{
    public:
    string in ,out;  //out==targome shodeye in
};

class dictionory
{
    word logat[110];
    string comper;
    int flag;
public:

    string translator(string comp)
    {
        comper=comp;
        int i=0;
        while (i<flag+1)
        {
           if(comper==logat[i].in)
           {
               return logat[i].out;
               break;
           }
         i++;
        }
    }
    void getdata(int n)
    {
        flag=n;
        string in,out;
        for(int i=0;i<n;i++)
        {
            cin>>in;
            cin>>out;
            logat[i].in=in;
            logat[i].out=out;
        }
    }
};


int main()
{
    int n,i=0;
    cin>>n;
    if(n>0){
   dictionory data;
    data.getdata(n);
    string vorod;
    cin.ignore();
    getline(cin,vorod);

   string word= "";
    for(auto x : vorod)
    {
        
        if(x== ' ')
        {
         cout<<data.translator(word)<<" ";
        word = "";
        }

        else
            word=word+x;
        
    }
     cout<<data.translator(word); 
    }
    return 0;
}

/*void  spiliter(string vorod)
{
    string word= "";
    for(auto x : vorod)
    {
        
        if(x== ' ')
        {
         cout<<data.translator(word)<<" ";
        word = "";
        }

        else
            word=word+x;
        
    }
     cout<<data.translator(word);
}*/