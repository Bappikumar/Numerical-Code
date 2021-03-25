#include<bits/stdc++.h>
using namespace std;
class trapezoidal{
    double values[500],h;
    int n;
    public:
    trapezoidal(int n,double x[],double fx[]){
        this->n=n;
        for(int i=0;i<n;i++)values[i]=fx[i];
        h=x[1]-x[0];
    }
    double integrate(){
        double sum=0;
        for(int i=1;i<n-1;i++)sum+=values[i];
 
        return h/2*(values[0]+2*sum+values[n-1]);
    }
};
int main(){
    int i,j,k,n;
    ///Given x0,f(x0),x1,f(x1),....xn,f(xn)
    /// find out the integration x0 to xn
    cin>>n;
    double x[n+5],fx[n+5];
    for(i=0;i<n;i++)cin>>x[i]>>fx[i];
    if(n==1)cout<<fx[0];
    else{
        trapezoidal t = trapezoidal(n,x,fx);
 
        cout<<t.integrate()<<endl;
    }
 
    return 0;
}