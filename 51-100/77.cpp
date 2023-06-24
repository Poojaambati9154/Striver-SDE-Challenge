#include <bits/stdc++.h> 
struct Node{
    Node *links[26];
	bool flag = false;
	
	bool containkey(char ch) {
		return (links[ch - 'a'] != NULL);
	}

	void put(char ch, Node *node) {
		links[ch - 'a'] = node;
	}

	Node *get(char ch) {
		return links[ch - 'a'];
	}

	void setend() {
		flag = true;
	}

	bool isend() {
		return flag;
	}
};
class Trie{
    public:
    Node *root;
    Trie(){
        root=new Node();
    }
    void insert(string word){
        Node *node=root;
        for(int i=0;i<word.length();i++){
            if(!node->containkey(word[i])){
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);
        }
        node->setend();
    }
    public:
    bool checkifexists(string word){
        bool fl=true;
        Node *node=root;
        for(int i=0;i<word.length();i++){
            if(node->containkey(word[i])){
               node=node->get(word[i]);
               fl=fl&node->isend();
            }
            else{
                return false;
            }
            
        }
        return fl;
    }
};
string completeString(int n, vector<string> &a){
    Trie trie;
    for(auto &it : a){
        trie.insert(it);
    }
    string longest="";
    for(auto &it : a){
        if(trie.checkifexists(it)){
            if(it.size()>longest.size()){
                longest=it;
            }
             else if (it.size() == longest.size() && it < longest) {
                longest = it;
            }
        }
    }
    if(longest=="")return "None";
    return longest;
}