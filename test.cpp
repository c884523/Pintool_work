#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;
class TRACE_ADDRESS{
public:
	int address,times;
	TRACE_ADDRESS(int a,int t):address(a),times(t){}
	
};
bool operator< (const TRACE_ADDRESS &L,const TRACE_ADDRESS &R){
	return L.address > R.address;
}
bool operator> (const TRACE_ADDRESS &L,const TRACE_ADDRESS &R){
	return L.address < R.address;
}
int main(void)
{
	/*TRACE_ADDRESS a(1,2),b(5,6),c(3,9),d(8,1);
	
	priority_queue<TRACE_ADDRESS, vector<TRACE_ADDRESS>, greater<vector<TRACE_ADDRESS>::value_type> > q;
	q.push(a);
	q.push(b);
	q.push(c);
	q.push(d);
	while(!q.empty()){
		cout<<q.top().address<<endl;
		q.pop();
	}
	FILE *fp = fopen("./reuse_distance_log/a.txt","w");
	*/
	printf("%x",0xffffffff);
	return 0;
}
