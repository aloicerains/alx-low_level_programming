#### 0x1A-hash_tables     
======================      
The introduction to hash tables and hash functions.      
The following tasks are present in the directory.     
- [x] **0-hash_table_create.c**:    
A function that creates a hash table.    
The function returns pointer to newly created hash table     
If something went worong, the function returns `NULL`    

- [x] **djb2**    
A hash function algorithm called `djb2`   

- [x] **2-key_index.c**    
Function gives the index of a key.     
The function uses the djb2 hash function in 1 above.     

- [x] **3-hash_table_set.c**     
Function adds an element to the hash table.    
Key cannot b an empty string.     
Value associated with key and must be duplicated. It can be empty string     
Returns 1 on success and 0 on failure    

- [x] **4-hash_table_get.c**     
Function retrieves a value associated with a key.    
Returns the value associated with the element or NULL if the key could not be found.    

- [x] **5-hash_table_print.c**    
Function prints a hash table.    
The key/value is printed in the order they appear in the hash table.    
If the hash table is NUll, don't print anything.       

-[ ] **6-hash_table_delete.c**    
Deletes the hash table   

 
