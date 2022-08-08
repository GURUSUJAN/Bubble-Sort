#include"iostream"
using namespace std;
main()
{
    int n,k;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
    for(int i=0;i<n;i++)
    {
        while(ar[i]>ar[i+1])
        //if(ar[i]>ar[i+1])
        {
            k=ar[i];
            ar[i]=ar[i+1];
            ar[i+1]=k;
        }
        
    }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<endl;
    }
}
