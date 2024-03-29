#include <bits/stdc++.h>

using namespace std;

int n;
int str[20];

int bt(int index, int max_value) {

	if(index == n) return 1;

	int result = 0;

	for(int i = 0; i <= max_value; i++) {
		str[index] = i;
		result += bt(index + 1,max(max_value, i + 1));
		str[index] = -1;
	}

	return result;
}

int main() {

	int cont;
	scanf("%d",&cont);
	while(cont--) {

		memset(str,-1, sizeof str);
		str[0] = 0;
		
		scanf("%d",&n);
		printf("%d\n", bt(1,1));
	}

	return 0;
}
