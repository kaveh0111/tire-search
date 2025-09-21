#include "trie_node.h"
#include <string>
#include <memory>

class Trie{
    public:
    Trie() : m_head(std::make_unique<Trie>())
    void insert_command(const std::string& input_str);
    std::vector<std::string> search(const std::string& search_prefix) const;
    void delete_command(const std::string& input_str) noexcept;
    
    private:
    std::unique_ptr<TrieNode> m_head;
    
    
};


void Trie::insert() (const std::string& input_str)
{
    try{
        TrieNode current_node = m_head.get();
        
        std::for_each(input_str.begin() + 1, input_str.end(), [](const char& item){
            char m_vlaue = 0;
            std::vector<TrieNode> m_children;
    
        });
        
    }
    catch(const std::exception& ec)
    {
        std::cout << "\n failed insertion of new command " << ec.what();
    }
    
}
