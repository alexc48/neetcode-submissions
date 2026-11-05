class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        vector<string> lengths(strs.size());
        int total_length = 0;
         
        for (int i = 0; i < strs.size(); ++i) {
            lengths[i] = to_string(strs[i].length());
            total_length += strs[i].length();
        } 
        
        string total_length_s = to_string(total_length);

        encoded_string = (total_length_s + '#');

        for (int i = 0; i < lengths.size(); ++i) {
            encoded_string += (lengths[i] + '#');
        }

        for (int i = 0; i < strs.size(); ++i) {
            encoded_string += strs[i];
        }

        std::cout << encoded_string << '\n';

        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> strs;

        int size_index = 0;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '#') {
                size_index = i;
                break; 
            }
        }

        string size_s = s.substr(0, size_index);
        int size = stoul(size_s);
        s.erase(0, size_index+1);


        string words = s.substr(s.size()-size, s.size());
        s.erase(s.size()-size, size);

        std::vector<int> indexes;

        stringstream ss(s);
        string token;

        while (getline(ss, token, '#')) {
            if (!token.empty()) {
                indexes.push_back(stoi(token));
            }
        }

        for (int i = 0; i < indexes.size(); ++i) {
            string substring = words.substr(0, indexes[i]);
            strs.push_back(substring);
            words.erase(0, indexes[i]);
        }
        return strs;

    }
};