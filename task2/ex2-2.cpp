#include<iostream>
using namespace std;
void quicksort(int array[],int first,int last){
    int top=first;
    int tail=last;
    int pivot=array[top];
    
    while(top<=tail){
        while(array[top]<pivot) top++;
        
        while(array[tail]>pivot) tail--;
        
        if(top>=tail) break;
        
        int tmp=array[top];
        array[top]=array[tail];
        array[tail]=tmp;
        
        top++;
        tail--;
    }
    
    if(first<top-1)quicksort(array,first,top-1);
    if(last>tail+1)quicksort(array,tail+1,last);
    
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
    quicksort(array,0,6);
    print(array,7);
    return 0;
}