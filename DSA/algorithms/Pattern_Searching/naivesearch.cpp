#include<bits/stdc++.h>
using namespace std;
int match(char *pat, char * txt);

int main() 
{ 
	char txt[] = "ABABDABACDABABCABAB"; 
	char pat[] = "ABABCABAB";  
	int match_start = match(pat, txt);
	if(match_start == -1)
		cout <<"No match found";
	else
	{
		cout << "match found at index '"<< match_start << "' of search string "<< endl;
	}
	
	return 0; 
} 

int match(char *pat, char * txt){
	int M=strlen(pat);
    int N=strlen(txt);
    int i=0,j=0,l=0;
    while(l<N){
    	if(txt[i]==pat[j]){
    		i++;
    		j++;
		}
		else{
			l++;
			i=l;
			j=0;
		}
		if(j==M){
			return l;
		}
	}
	return -1;
}
