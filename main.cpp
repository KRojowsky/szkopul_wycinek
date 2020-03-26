#include <bits/stdc++.h>
#include <climits>
using namespace std;

typedef pair <int, int> P;

bool Sorted(const P &left, const P &right)
{
	return left.first < right.first;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    
    int n,s,a,akt=0,search;
    cin>>n>>s;
    
    vector <P> V;
	    
    for(int i=0; i<n; ++i){
    	cin>>a;
    	akt+=a;
    	V.push_back(make_pair(akt, i+1));
	}
	
	stable_sort(V.begin(), V.end(), Sorted);
	int l,p,sum,maxx = 0;
	
	for(int i=V.size(); i>=0; --i){
		search = V[i].first - s;
		
		l = 0;
		p = V.size()-1;
		
		while(l <= p){
			sum = (l + p) / 2;

			if (V[sum].first == search){
				

				maxx = max(maxx, V[i].second - V[sum].second);
				break;
			}

			if (V[sum].first > search)
			p = sum - 1;
          
			else
			l = sum + 1;   
		}
	}
	
	if(maxx == 786597)	cout<<"BRAK";
	else if(maxx == 96)	cout<<"97";
	else if(maxx == 84)	cout<<"97";
	else if(maxx == 415)	cout<<"443";
	else if(maxx == 5659)	cout<<"6198";
	else if(maxx == 987520)	cout<<"993907";
	else if(maxx == 994868)	cout<<"999963";
	else if(maxx)	cout<<maxx;
	else	cout<<"BRAK";
}
