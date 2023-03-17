
void solve(vector<int> &v) {
    vector<vector<int>> ans;
    sort(v.begin(), v.end());
    for(int i = 0; i<v.size()-2; i++) {
        
        if(i == 0 || i > 0 && v[i] != v[i-1]) {
            int low = i+1; 
            int high = v.size()-1;
            int sum = 0 - v[i];

            while(low < high) {
                if(v[low] + v[high] == sum) {
                    vector<int> temp;
                    temp.push_back(v[i]);
                    temp.push_back(v[low]);
                    temp.push_back(v[high]);
                    ans.push_back(temp);

                    while(low < high && v[low] == v[low+1]) low++;
                    while(low < high && v[high] == v[high-1]) high--;
                    low++;
                    high--;
                }
                else if(v[low] + v[high] > sum) high--;
                else low++;
            }
        }
        
    }
    // return ans;
    for(int i = 0; i<ans.size(); i++) {
        for(int j = 0; j<ans[0].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}