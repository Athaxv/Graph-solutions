class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i = 0; i < operations.size(); i++){
            if (operations[i] == "+"){
                int a = st.top();
                st.pop();
                int b = a + st.top();
                st.push(a);
                st.push(b);
            }
            else if (operations[i] == "C"){
                st.pop();
            }
            else if (operations[i] == "D"){
                int b = st.top() * 2;
                st.push(b);
            }
            else {
                int c = stoi(operations[i]);
                st.push(c);
            }
        }
        int sum = 0;
        while (!st.empty()) {
        sum += st.top();
        st.pop();
    }
    return sum;
    }
};