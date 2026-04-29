#include <iostream>
#include <map>
#include <string>
// Fork this repo
// Read: https://www.geeksforgeeks.org/cpp/multimap-associative-containers-the-c-standard-template-library-stl/
// If you have question about the code, please ask to the TA
// Implement a multimap to store student IDs and their names. A multimap allows multiple values for the same key,
//  which is useful in this case since multiple students can have the same ID.
// You can see more information: https://cplusplus.com/reference/map/multimap/
// Add a comment before main about what was the most easy and challenging part
// After you finish, type in the terminaL:
// git add .
// git commit -m "Implement multimap for student IDs and names"
// git push origin main

/*
    Learning how to iterate/index the multimap was a bit confusing because there are multiple data types involved
    and C++ can be limited in its ability to handle different data types within the same control flow structure.

    Declaring the multimap and inserting elements is fairly easy and intuitive.

    By the way, I copy-pasted this into github because the procedure outlined above did not work for me :/
*/

int main() {
    // Create a multimap where the key is student ID (int) and value is student name (string)
    std::multimap<int, std::string> multimap1;

    // Insert students with their IDs into the multimap
   
    multimap1.insert({43, "Sarah"});
    multimap1.insert({24, "Ryan"});
    multimap1.insert({12, "Rachel"});
    multimap1.insert({19, "Ben"});
    multimap1.insert({59, "Olive"});
    multimap1.insert({99, "Johnny"});
    multimap1.insert({43, "Linus"});
    
    // Display all students sorted by their student IDs
   for(auto x: multimap1){
       std::cout << x.first << " : " << x.second << "\n";
   }

    return 0;
}
