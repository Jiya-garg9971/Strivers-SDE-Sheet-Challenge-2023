int NthRoot(int n, int m) {
  // Write your code here.
  int st=0,end=m;
  int ans=-1;
  while(st<=end){
    int mid=(st+end)/2;
    if(pow(mid,n)==m){
      return mid;
    }
    else if(pow(mid,n)<m)st=mid+1;
    else end=mid-1;
  }
  return -1;
}
