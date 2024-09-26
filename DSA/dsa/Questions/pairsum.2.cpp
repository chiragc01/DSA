#include <iostream>
#include <vector>
using namespace std;

// Function to find a pair in the array that sums up to the target
vector<int> pairsum(vector<int> num, int target) {
    int n = num.size();
    vector<int> ans;
    
    int i=0 , j=n-1;
    while(i<j){
        int pairsum= num[i]+ num[j];
        if(pairsum >target){
            j--;
        }else if(pairsum<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;

        }
    }
                return ans;  // Return as soon as the pair is found
            }
       

int main() {
    vector<int> num = {-1, 2, 3, 4, -5, 6, 7};
    int target = 9;
    
    vector<int> ans = pairsum(num, target);
    
    // Check if a valid pair was found before accessing ans[0] and ans[1]
    if (!ans.empty()) {
        cout << "Pair indices: " << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}
