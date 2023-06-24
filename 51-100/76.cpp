#include <bits/stdc++.h>
struct Node{
  Node* links[26];
  int cntend=0;
  int cntpre=0;
  bool iscontain(char ch){
      return (links[ch-'a']!=NULL);
  }
  void put(char ch,Node*node){
      links[ch-'a']=node;
  }
  Node *get(char ch){
      return links[ch-'a'];
  }
  void incpre(){
      cntpre++;
  }
  void incend(){
      cntend++;
  }
  void decpre(){
      cntpre--;
  }
  void decend(){
      cntend--;
  }
  int getpre(){
      return cntpre;
  }
  int getend(){
      return cntend;
  }
};
class Trie{
private:
Node*root;
    public:

    Trie(){
        // Write your code here.
        root=new Node();
    }

    void insert(string &word){
        // Write your code here.
        Node* node=root;
        for(int i=0;i<word.size();i++){
            if(!node->iscontain(word[i])){
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);
            node->incpre();
        }
        node->incend();

        
    }

    int countWordsEqualTo(string &word){
        // Write your code here.
        Node* node=root;
        for(int i=0;i<word.size();i++){
            if(node->iscontain(word[i])){
                node=node->get(word[i]);
            }
            else{
                return 0;
            }
        }
        return node->getend();
    }

    int countWordsStartingWith(string &word){
        // Write your code here.
        Node* node=root;
        for(int i=0;i<word.size();i++){
            if(node->iscontain(word[i])){
                node=node->get(word[i]);
            }
            else{
                return 0;
            }
        }
        return node->getpre();
    }

    void erase(string &word){
        // Write your code here.
        Node* node=root;
        for(int i=0;i<word.size();i++){
            if(node->iscontain(word[i])){
                node=node->get(word[i]);
                node->decpre();
            }
            else{
                return;
            }
        }
        node->decend();
    }
};
