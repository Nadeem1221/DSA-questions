
  // int length = sizeof(arr)/sizeof(arr[0]);


  int lo = 0;
  int hi = 6;
  bool flag = false;//target is not present in the array
  
  while(lo<=hi){
    int mid = (lo + hi)/2;

    if( arr[mid]==target){ 
       flag=true;