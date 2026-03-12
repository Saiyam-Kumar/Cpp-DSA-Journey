#include<iostream>
using namespace std;

//change array
void changeArr(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }
}

//linear search
int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

//reverse array
void reverseArr(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    //intialisation with values
    int arr[]={1,2,3,4,5};
    cout<<arr[0]<<endl;


    //Intialisation with loop
    int ar[50],n,i;
    cout<<"Enter number of elements in array";
    cin>>n;

    cout<<"Enter the elements";
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    for(i=0;i<n;i++){
        cout<<ar[i]<<endl;
    }

    //smallest and largest element
    int num[]={16,20,-15,9};
    int size=4;
    int smallest=INT_MAX;
    int largest=INT_MIN;
  
    for(int i=0;i<size;i++){
        smallest=min(num[i],smallest);
        largest=max(num[i],largest);
    }
    cout<<"The smallest number is : "<<smallest<<endl;
    cout<<"The largest number is : "<<largest<<endl;


    //change array
    int a[]={1,2,3};
    int s=3;
    changeArr(a,s);

    for(int i=0;i<s;i++){
        cout<<"the change values in main "<<a[i]<<endl;
    }

}
