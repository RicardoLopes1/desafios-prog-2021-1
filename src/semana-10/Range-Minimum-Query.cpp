#include <bits/stdc++.h>
using namespace std;
// https://practice.geeksforgeeks.org/problems/range-minimum-query/1/
// Range Minimum Query 
// Not completed
class SegmentTree{
	
	private:
	int n, t[4*10000];
    map <string, int> rmq;
    
	public:

	SegmentTree( int * arr, int sz){
		n = sz;
		build(arr, 1, 0, n-1);
	}
	
	void build( int * arr, int idx, int tl, int tr){
		
		if( tl == tr ){
			t[idx] = arr[tl];
		}else{
			int tm = (tl+tr)/2;
			build(arr, idx << 1, tl, tm);
			build(arr, idx << 1 | 1 , tm+1, tr);
			t[idx] = min(t[idx << 1], t[idx << 1 | 1]);
            
		}
		//printf("min(%d, %d) = %d\n", tl, tr, t[idx]);
		rmq[to_string(tl) + to_string(tr)] = t[idx];	
	}
	
    int searchRMQ(int l, int r){
        
        if(l == r){
            return rmq[to_string(l) + to_string(l)];
        }else if(rmq[to_string(l) + to_string(r)] == 0){
            int mid = (l + r)/2;
            //cout << l << " - " << mid << endl;
            int resl = searchRMQ(l, mid);
            //cout << mid+1 << " - " << r << endl;
            int resr = searchRMQ(mid+1, r);
            return min(resl, resr);
        }
        return rmq[to_string(l) + to_string(r)];
    }

};
int main(){
    int arr[] = {3,2,4,2,4,3,7,1};
	int n = sizeof(arr)/sizeof(int);
	SegmentTree st(arr, n);
	
	cout << "minimu between 0 and 4: " << st.searchRMQ(0, 4) << endl;
	
    return 0;
}