#include <bits/stdc++.h>
#define MAX 5022
#define pb push_back

using namespace std;

struct edge{
	int from,to,w,used;
	edge(int from=0, int to=0, int w=0){
		this->from = from;
		this->to = to;
		this->w = w;
	}
};

bool comp(edge a, edge b) {return a.w > b.w;}

vector<edge> adj;
int uni[MAX], rankie[MAX];
int a[MAX], used[MAX], n, m;

void initUni() { for(int i = 0; i < MAX; i++) { uni[i] = i; rankie[i] = 0; used[i] = 0;} }
int findSet(int x) { return x == uni[x] ? x : (uni[x] = findSet(uni[x]));}
bool isSameSet(int x, int y) { return findSet(x) == findSet(y);}
void connect(int x, int y) {
	
	if(rankie[x] > rankie[y])
		uni[y] = x;
	else if(rankie[x] < rankie[y])
		uni[x] = y;
	else{
		uni[y] = x;
		rankie[x]++;
	}
}

int kruskall(){

	int answer = 0;
	for(int i = 0; i < adj.size(); i++)
		if(!isSameSet(adj[i].from,adj[i].to) && used[adj[i].from] < 2 && used[adj[i].to] < 2){
			connect(findSet(adj[i].from),findSet(adj[i].to));
			answer += adj[i].w;
			used[adj[i].from]++; used[adj[i].to]++;
		}

	return answer;
}

int main() {

	scanf("%d",&n);
	int count = 1;
	while(n--){

		scanf("%d",&m);
		adj.clear(); initUni();
		for(int i = 0; i < m; i++) scanf("%d",&a[i]);
		for(int i = 0; i < m ; i++)
			for(int j = i+1; j < m; j++)
				adj.pb(edge(i,j,abs(a[i]-a[j])));
	
		sort(adj.begin(), adj.end(), comp);
		printf("Case %d: %d\n",count++,kruskall());

	}

	return 0;
}
