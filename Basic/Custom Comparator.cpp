bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.first>b.first) return true;
    else if(a.first==b.first){
        if(a.second<=b.second) return true;
    }
    return false;
}
