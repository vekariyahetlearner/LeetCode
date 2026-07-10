class Solution {
public:
    int id=0;
    unordered_map<int,string> mp;
    string base="http://tinyurl.com/";
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        mp[id]= longUrl;
        return base + to_string(id++);
    }
    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int sid= stoi(shortUrl.substr(base.size()));
        return mp[sid];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));