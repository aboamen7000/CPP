// Header file
#include <iostream>
#include <map>
// Map.
// Map : Maps are associative containers that store elements in a mapped fashion.
//       Standard Template Library (STL)
using namespace std;

int main(){
    // Method 1 : Storing and accessing key-value pairs in a map
    map<string,float> info; //[key] = value
    // info["IA"] = 180.0;
    // info["Ahmad"] = 170.0;
    // info["3mr"] = 177.0;
    // cout << "IA is " << info["IA"] << " height.!" << endl;
    // cout << "IA is " << info["Ahmad"] << " height.!" << endl;
    // cout << "3mr is " << info["3mr"] << " height.!" << endl;

    // Method 2 : Checking if a key exists in a map
    string exist_name = "omar";
    if(info.count(exist_name))
    {
        cout << "User " << exist_name << " is found and his height : " << info[exist_name] << endl;
    } else{
        cout << "User " << exist_name << " we do not have him " << endl;
    }
    

    // Method 3 : Iterating over a map
    // map<int,string> kids;
    // kids[7] = "Malik";
    // kids[8] = "Talin";
    // kids[6] = "Ahmad";

    // for(auto& argus : kids){
    //     cout << argus.second << " age is : " << argus.first << " Years old." << endl;
    // }

    return 0; // function will end without any error
}