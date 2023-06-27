#include<queue>
void findMedian(int *arr, int n)
{
    // Write your code here
    priority_queue<int> minheap;
    priority_queue<int,vector<int>,greater<int>> maxheap;
    int median=0;
    for(int i=0;i<n;i++){
        if(minheap.size()>maxheap.size()){
            if(arr[i]>=median){
                maxheap.push(arr[i]);
            }
            else{
                maxheap.push(minheap.top());
                minheap.pop();
                minheap.push(arr[i]);
            }
            median=(minheap.top()+maxheap.top())/2;
        }
        else if(minheap.size()<maxheap.size()){
            if(arr[i]<median){
                minheap.push(arr[i]);
            }
            else{
                minheap.push(maxheap.top());
                maxheap.pop();
                maxheap.push(arr[i]);
            }
            median=(minheap.top()+maxheap.top())/2;
        }
        else{
            if(arr[i]<median){
                minheap.push(arr[i]);
                median=minheap.top();
            }
            else{
                maxheap.push(arr[i]);
                median=maxheap.top();
            }

        }
        cout<<median<<" ";
    }
}
