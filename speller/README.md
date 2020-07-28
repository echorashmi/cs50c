Next Action:
1. Start on the load function. 

Tasklist:
1. dictionary.c line 15 - change n to update the of buckets in hash table
2. Implement the following functions in dictionary.c:
    a. bool check(const char \*word);
    b. unsigned int hash(const char \*word);
    c. bool load(const char \*dictionary);
    d. unsigned int size(void);
    e. bool unload(void);
Such that the TIME in load, check, size, unload are all minimised. 
3. Watch Brian's video #2 - load function (https://cs50.harvard.edu/x/2020/psets/5/speller/#:~:text=~cs50/2019/fall/pset5/speller%20texts/lalaland.txt)





Success Criteria:
1. All mis-spelled keywords in input text files are detected. This can be verified by comparing my results against the results provided in the "Keys" folder. 
2. The time in load, check, size, unload are all as less as possible. 

CS50 Submission:
1. Check50: check50 cs50/problems/2020/x/speller
2. Submit: submit50 cs50/problems/2020/x/speller
3. Submit to big board using: $ submit50 cs50/problems/2020/x/challenges/speller
4. View CS50's submission:  ~cs50/2019/fall/pset5/speller texts/lalaland.txt

Files to transfer to IDE for Submission:
1. dictionary.c 

Don't Do's:
1. Edit speller.c or Makefile
2. Edit the prototypes of load, hash, size, check, and unload
3. Store the dictionary hash table on disk (this has to be in real-time and in-memory)

Specifications:
1. Case-insensitive string checking
2. Inputs will be Only words that contain alphabetical characters and possibly apostrophes.
3. Check for memory leaks in Valgrind 




