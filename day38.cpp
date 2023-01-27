//Qlink-> https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
//Code-

void add(char num,map<char,vector<char>> &m,queue<string> &q){
        queue<string> q2;
        while(!q.empty())
        {
            string u = q.front(); 
            q.pop(); 
            for(auto c:m[num])
            {
                q2.push(u+c);
            }
        }
        q = q2;
        while(!q2.empty()) q2.pop();
        return;
    }
    vector<string> letterCombinations(string digits) {
        map<char,vector<char>> m; 
        m['2'] = {'a','b','c'};
        m['3'] = {'d','e','f'};
        m['4'] = {'g','h','i'};
        m['5'] = {'j','k','l'};
        m['6'] = {'m','n','o'};
        m['7'] = {'p','q','r','s'};
        m['8'] = {'t','u','v'};
        m['9'] = {'w','x','y','z'};
        vector<string> res; //to store final result
        if(digits.length()==0) return res; //if input string is empty return empty vector
        queue<string> q;
        //add letters of first digit to queue
        for(auto c:m[digits[0]]){
            string x = "";
            x+=c;
            q.push(x);
        }
        // add the remaining digits one by one
        for(int i=1;i<digits.length();i++){
            add(digits[i],m,q);
        }
        //pop items from queue and add to result
        while(!q.empty()){
            res.push_back(q.front());
            q.pop();
        }
        return res;
    }
