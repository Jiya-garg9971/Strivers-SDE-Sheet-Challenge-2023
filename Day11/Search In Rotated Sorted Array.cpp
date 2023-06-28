int search(int* arr, int n, int key) {
    // Write your code here.
    int st=0,end=n-1;
    while(st<=end){
        int mid=(st+end)/2;
       // cout<<mid<<" ";
        if(arr[mid]==key)return mid;
        if(arr[mid]>=arr[st] ){
            if( arr[st]<=key and key<=arr[mid])end=mid-1; //left
            else st=mid+1;
        }
        else{
             if(arr[mid]<=key and key<=arr[end])st=mid+1;
             else end=mid-1;
        }
    }
    return -1;
}
