#include<iostream>
using namespace std;
int main()
{
    int a[50], i, n, pos=-1, first, last, mid, val;
    cout<<"Enter number of element : ";
    cin>>n;
    cout<<"\nEnter the list : "<<n<<endl;
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"\nEnter the value to be search "<<endl;
    cin>>val;
    first = 0;
    last = n-1;
    while ((first<=last) && (pos==-1)){
        mid = (first+last)/2;
        if(a[mid]=val){
           pos = mid; 
        }        
        else{
          if(a[mid]<val)
          first = mid+1;
          else
          last = mid-1;  
        }        
    }
    // if(pos>-1){
    //     cout<<"Found";
    // }
    // else {
    //     cout<<"Not found";
    // }
    
    return 0;
}