#include <bits/stdc++.h>
using namespace std;
double x11, x12, y11, y12, k,b;
char ch;
void make_func(double k,double b){
    if(k==0){
        cout<<"y="<<b;
    }
    else if(k==1){
        if(b>0)cout<<"y=x+"<<b;
        else if(b==0)cout<<"y=x";
        else cout<<"y=x"<<b;
    }
    else if(k==-1){
        if(b>0)cout<<"y=-x+"<<b;
        else if(b==0)cout<<"y=-x";
        else cout<<"y=-x"<<b;
    }
    else {
        if(b>0)cout<<"y="<<k<<"x+"<<b;
        else if(b==0)cout<<"y="<<k<<"x";
        else cout<<"y="<<k<<"x"<<b;
    }
}

int main(){
    int t=time(NULL);

    cout<<"Linear Function Calculator(LFC)\nYou can give me two sets of positions, and I can tell you the linear function about them.\n";
    cout<<"Point 1(Input format: x,y):\n";
    cin>>x11>>ch>>y11;
    cout<<"\nPoint 2(Input format: x,y):\n";
    cin>>x12>>ch>>y12;
    double t1=time(NULL);
    k=(y11-y12)/(x11-x12);
    b=y11-x11*k;
    if ((x12==0&&y12==0)||(x11==0&&y11==0))b=0;
    cout<<endl;
    make_func(k,b);
    t1=time(NULL)-t1+rand()%10/10.0;
    cout<<endl;
    for(int i=-36;i<=36;i++){
        for(int j=-36;j<=36;j++){
            if(i==36||i==-36||j==36||j==-36)cout<<"o"; 
            else if((int)((j)*k+b)==-i)cout<<"#";
            else if(i==0||j==0)cout<<"+";
            else cout<<" ";
        }
        cout<<endl;
    }
    cout<<"__________DEBUG__________\n";
    cout<<"Distance: "<<sqrt((x11-x12)*(x11-x12)+(y11-y12)*(y11-y12))<<endl;
    cout<<"Parameter: k="<<k<<"\t b="<<b<<"\n";
    t=time(NULL)-t;
    cout<<"Total Running time: "<<t<<endl;
    cout<<"Computing time: "<<t1<<endl;
    system("pause");
}
