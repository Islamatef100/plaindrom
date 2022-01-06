#include<iostream>
using namespace std;
class Palindrome
{
private:
  //  string s;
    int c;
    char arr[20];
    int top=-1;
public:
    void push(string rr)
    {
       if(top==19)
           cout<<"stack is full\n";
        else
        {
            //s=rr;
            for(int i=0;i<rr.size();i++ )
            {
               arr[i]=rr[i];
            }
            top=rr.size()-1;
            c=rr.size();
        }
    }
    void pop()
    {
        if(top==-1)
            cout<<"stack is empty\n";
        else
            --top;
    }
    char print()
    {
        if(top==-1)
            cout<<"stack is empty\n";
            return arr[top];
        
    }
    bool check( )
    {
        for(int i=0;i<c/2;i++)
        {
            if(arr[i]!=print())
            {
                return 0;
            }
            else
            {
                pop();
                
            }
        }
        return 1;
    }
    
};
int main( )
{
    string s;
    cout<<"enter the word\n";
    cin>>s;
    Palindrome p1;
    p1.push(s);
    if(p1.check())
        cout<<"yes\n";
    else
        cout<<"no\n";
}
