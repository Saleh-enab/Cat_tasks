class Solution {
    #include <map>
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
       map<string,int> value;
       for(int i=0;i<list1.size();i++)
       {
           for(int j=0;j<list2.size();j++)
           {
               if(list1[i]==list2[j])
               {
                   value[list1[i]]=i+j;
               }
           }
       }
       
       
       int min=2001;
       for(auto itr=value.begin();itr!=value.end();itr++)
       {
           if(itr->second<min)
           {
               min=itr->second;
           }           
       }
       vector <string> words;
       for(auto itr=value.begin();itr!=value.end();itr++)
       {
           if(itr->second==min)
           {
               words.push_back(itr->first);
           }
       }

       return words;
    }
};