
    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;
    if(root->children[index] != NULL)   //Present
        child = root->children[index];

    else{
        child = new TrieNode(ch);
        root->children[index] = child;
    }