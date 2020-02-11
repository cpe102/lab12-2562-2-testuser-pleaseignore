#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double p[],int q,double r[]){
    double max = p[0],min = p[0],sum =0,sqr=0;
    for(int i=0;i<q;i++){
        if(p[i]>max) max=p[i];
        if(p[i]<min) min=p[i];
        sum += p[i];
        sqr += pow(p[i],2);
    }
    r[0]=sum/q;
    r[1]=sqrt((sqr/q)-pow(sum/q,2));
    r[2]=max;
    r[3]=min;
    
}