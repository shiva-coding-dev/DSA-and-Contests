vector<int> a = {1,2,3,4,5,3,5,6,2,4,7,8,9,4,6,3,2,1};
    vector<int> hash(10,0);
    for(int i = 0;i< a.size() ; i++){
        hash[a[i]] += 1; 
    }
    for(int i=0;i<hash.size() ; i++){
        if(hash[i]!= 0){
            cout<<"Frequency of "<<i<<" - "<<hash[i]<<"\n";
        }
    }