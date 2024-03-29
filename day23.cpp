//Euler Circuit in an Undirected Graph
#include<iostream>
using namespace std;
class Solution {
public:
	bool isEularCircuitExist(int v, vector<int>adj[]){
	    int even = 0;
	    for(int i = 0; i < v; i++) {
	        if(adj[i].size() % 2 == 0)
	            even++;
	    }
	    
	    return even == v;
	}
};
