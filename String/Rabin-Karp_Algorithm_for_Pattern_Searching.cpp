// time O(n)    Space: O(1)

#include <bits/stdc++.h>
using namespace std;

vector<int> alloccurance(string text, string path){
    vector<int> ans;
    // make a window
    int i = 0, window = path.size();
    string check = "";
     while(i<path.size()){
         check += text[i++];
     }
     if (check == path)
     {
         cout << check << " " << path << endl;
         cout << "index is " << i - window << endl;
         ans.push_back(i - window);
     }
    // check rest string
     while (i < text.size())
     {
         check.erase(check.begin());
         check += text[i++];
         if (check == path){
             cout << check << " " << path << endl;
             cout << "index is " << i - window << endl;
             ans.push_back(i - window);
         }
    }
    return ans;
}

int main(){
    string text = "GEEKS FOR GEEKS", path = "GEEK";
    // cin >> text >> path;
    vector<int> indexes = alloccurance(text, path);
    for(auto i:indexes){
        cout << i << " ";
    }
    return 0;
}