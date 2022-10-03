#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"how many variables ";
    cin>>n;
    float arr[n][n+1];
    float x[n];
    float sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cin>>arr[i][j]; 
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cout<<arr[i][j]<<" "; 
        }
        printf("\n");
    }
    float c = 0.0;
    for(int j=0;j<n;j++)
    {
        for(int i=j+1;i<n;i++)
        {
                c=arr[i][j]/(float)arr[j][j];
                for(int l=j;l<=n;l++)
                {
                        arr[i][l]=arr[i][l]-(c * arr[j][l]);
                        printf("%d %d %0.2f = %0.2f - (%0.2f * %0.2f)", i, l,arr[i][l], arr[i][l], c , arr[j][l]);
                        printf(" %d %d", i, l);
                        printf("\n");
                }
                printf("\n");
        }      
    }
   
    x[n-1] = arr[n-1][n] / arr[n-1][n-1];
    //cout<<" "<<x[n-1]<<endl;
    double s=0;
    for(int i=n-2; i>=0; i--)
    {
        s=0;
        for(int j=i+1; j<n; j++)
        {
            s += (arr[i][j]*x[j]);
            x[i] = (arr[i][n]-s)/arr[i][i];
        }
    }
    printf("\nThe result is :\n");
    for(int i=0; i<n ; i++)
    {
        cout<<"\n"<<i+1<<" "<<x[i];
    }
    cout<<endl;
}
