#include<bits/stdc++.h>
using namespace std;


/*
CONVERT LOWER CASE INTO UPPER OR
UPPER CASE INTO LOWER.
*/

/*
int main() {
int t;
cin >> t;

// string s = "asdfasdfs";
// 		  kaha se shuru, kaha tak, kaha se convert karna hai, kisme karna hai.
// transform(s.begin(), s.end(), s.begin(), ::toupper);
// 	cout << s << endl;


while(t--) {
	char s[20];
	cin >> s;

	for(int i = 0; i<= strlen(s); i++) {
		if(s[i] >= 65 && s[i] <= 92) {
			s[i] += 32;
		}
		else if(s[i] <= 122 && s[i] >= 97){
			s[i] -= 32;
		}
	}
	cout << s << endl;
}
}
*/

//QUESTION : COUNT THE FREQUENCY OF THE ALPHABET.
/*
const int N = 30;
int hsh[N];

int main() {

int n ;
cin >> n;
char s[n];
for (int i = 0; i < n; ++i)
{
	cin >> s[i];
	hsh[s[i]-'a']++;
}

int t;
cin >> t;
while(t--) {
	char x;
	cin >> x;
	int a = int(x);
	cout >> hsh[a] >> endl;
}
}

YE WALA CODE KAAM NHI KAR RHA.

*/
int main() {

	int t;
	cin >> t;

	int freq[26];
	for (int i = 0; i < 26; ++i)
	{
		freq[i] = 0;
	}

	while(t--){
		char s[26];
		for (int i = 0; i < s.size(); ++i)
		{
			freq[s[i]-'a']++;
		}

		char ans = 'a';
		int max = 0;

		for (int i = 0; i < 26; ++i)
		{
			if(freq[i] > max)  {
				max = freq[i];
				ans = i+'a';
			}
			cout << ans ;
		}
	}
}