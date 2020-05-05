#include<iostream>
using namespace std;

#define INF 10000001

void merge(int array[],int first,int mid,int last){
    int i,j,k;
    int n,m;
    
    n=mid-first;
    m=last-mid;
    
    int F[n+1],L[m+1];
    
    for(i=0;i<n;i++) F[i]=array[first+i];
    for(i=0;i<m;i++) L[i]=array[mid+i];
    
    F[n]=INF;    //配列に格納されている全ての値より大きな値を指定します。
    L[m]=INF;
    
    j=0;
    k=0;
    for(i=first;i<last;i++){
        if(F[j]<=L[k]){
            array[i]=F[j];
            j++;
        }
        else{
            array[i]=L[k];
            k++;
        }
    }
}

void mergesort(int array[],int first,int last){
    if(first+1<last){
        int mid=(first+last)/2;
        
        mergesort(array,first,mid);                                                                                                                                                                                                  
        mergesort(array,mid,last);
        
        merge(array,first,mid,last);
    }  
} 

void print(int array[],int num){
    for(int i=0;i<num;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int array[7]={9,5,16,11,4,3,7};
    print(array,7);
    mergesort(array,0,6);
    print(array,7);
    return 0;
}