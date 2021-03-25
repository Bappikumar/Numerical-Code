#include<bits/stdc++.h>
#define EPSILON 0.001
#define MAXM 104

using namespace std;

double func(int x)
{
    return x*x*x-x*x-1;
}
double e=0.001;
float c;

void secant_method(double a,double b)
{
    float p=func(a)*a-func(a)*b;
    float q=func(a)-func(b);
    double s=p/q;
    double result=(a-s);

    cout<<"Root= "<<result<<endl;
    cout<<"Accurate root calcualte is: "<<result<<endl;
}


void calculation(double a,double b)
{
    for(int i=0;i<MAXM;i++)
        {
            if(func(a)*func(b)>=0)
            {
                cout<<"Invalid Result."<<endl;

            }

     else
     {

          return secant_method();
     }


}

int main()
{
    int a,b;
    cout<<"Enter the value of a&b: "<<endl;
    cin>>a>>b;

    secant_method();
    return 0;
}
