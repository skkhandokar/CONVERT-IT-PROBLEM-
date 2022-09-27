#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node*left_child;
    node*right_child;

    node(int val)
    {
        this-> val=val;
        left_child=NULL;
        right_child=NULL;
    }

};


int main()
{

 int n;
    cin>>n;

    priority_queue<int,vector<int> >q;
    q.push(n);
    priority_queue<int,vector<int> >p;
    p.push(n);
    while(!q.empty())

    {
        int current=q.top() ;
        q.pop();
        int x,y;
        cin>>x>>y;

        if(x!=-1)
         {
          q.push(x);
          p.push(x);}

        if(y!=-1)
        {
         q.push(y);
         p.push(y);}


    }

    int Q;
    cin>>Q;
while(Q--){
int type;
cin>>type;
if(type==1)
{
    int key;
    cin>>key;

    p.push(key);
}
else if(type==2)
{
cout<<p.top()<<endl;

   p.pop();
}

}

}
