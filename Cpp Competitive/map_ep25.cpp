#include<bits/stdc++.h>
using namespace std;

/*
// UNORDERED LIST ***********************


// MAP MAI HUMESHA UNIQUE KEYS HONI CHAHIYE. 
// OR ISME OVER WRITE NHI HOTI VALUES.
// MAPS HUMESHA SORTED LIST MAI PRINT HOTE Hai.
// MAPS MAI COMPARISON KE BASIS PE INSERTION HOTA HAI.
// printing ke liye ye trees ko use karte hai. (red and black tree)

	// to print the map
void printMap(map<int,string> &m) {
	cout << "map size : " << m.size() << endl;
	for(auto it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}
	cout << endl;
}

int main() {
	map<int, string> m;
	m[1] = "abc";
	m[5] = "def";
	m[3] = "ghi";
	m.insert({4, "jkl"});
	// m.make_pair(5, "mn0");

// MAP MAI INSERT OR ACCESS KARNE KI TIME COMPLEXITY O(log(n)) hoti hai.

	auto it = m.find(3);
	if(it == m.end()) {
		cout << "no value" << endl;
	} else {
		cout << (*it).first << " " << (*it).second << endl;
	}
	printMap(m);

}

*/

// QUESTION : Given N strings, print unique strings
// in lexiopgraphical order with their frequency
// N < = 10^5
// |s| <= 100

// lexiographical ka mtlb increasing order mai. 

/*
int main() {
	map<string, int> m;
	int n;
	cin >> n;

	// ye strings and frequency store karega.
	for(int i = 0; i<n; i++ ) {
		string s ;
		cin >> s;
		m[s]++;	// map mai value uniq hoti hai islliye sirf string daal ke uniqueness le rhe hai.
	}
	for(auto pr : m) {
		cout << pr.first << " " << pr.second << endl;
	}
	cout << endl;
}
// ORDERED LIST
*/


// UNORDERED LIST : ISME SORT HOKE ELEMENTS SHOW NHI HOTEE.
// randomly print karta hai.
// printing ke liye ye hash table ko use karte hai.
// hash table ka use karke average time complexity iski O(1) ho jati hai.

/*
1. inbuilt impletation : hash table.
2. time complexity : O(1) because of hash table.
3. valid keys datatype.
*/

/*
void printMap(unordered_map<int,string> &m) {
	cout << "map size : " << m.size() << endl;
	for(auto it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}
	cout << endl;
}
int main() {
	unordered_map<int, string> u_m;
	u_m[1] = "abc";
	u_m[5] = "def";
	u_m[3] = "ghi";
	u_m.insert({4, "jkl"});
	printMap(u_m);
}
*/

// same question MAP WALA
// int main() {
// 	int n ;
// 	cin >> n;

// 	unordered_map<string, int> m;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		string s ;
// 		cin >> s;
// 		m[s]++;
// 	}

// 	int q;
// 	cin >> q;
// 	while(q--) {
// 		string s;
// 		cin >> s;
// 		cout << m[s] << endl;
// 	}

// 	for(auto v : m) {
// 		cout << v.first << " " << v.second << endl;
// 	}
// }