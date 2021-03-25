#include<bits/stdc++.h>
using namespace std;
class interpolation{
    double x[500],y[500];
    int n;
public:
    interpolation(int n,double ar[],double br[]){
        this->n=n;
        for(int i=0;i<n;i++)x[i]=ar[i],y[i]=br[i];
    }
    double lagrange(double tem){
        double ans=0;
        for(int i=0;i<n;i++){
            double p=1;
            for(int j=0;j<n;j++){
                if(i==j)continue;
                p*=(tem-x[j])/(x[i]-x[j]);
            }
            ans+=p*y[i];
        }
        return ans;
    }
};
int main(){
    int i,j,k,n;
    /// given some data of any equation
    /// x0,y0,x1,y1,..........xn,yn now find yk from given xk
    /// making approximate polynomial equation of that equation
    cin>>n;
    double x[n+5],y[n+5],tem;
    for(i=0;i<n;i++)cin>>x[i]>>y[i];
 
    interpolation t = interpolation(n,x,y);
 
    cin>>tem;
    cout<<t.lagrange(tem)<<endl;
    return 0;
}
 