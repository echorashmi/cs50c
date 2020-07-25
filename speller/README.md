Next Action:
1. Resume reading spec from "texts/" onwards on page 3/7.

Tasklist:
1. dictionary.c line 15 - change n to update the of buckets in hash table
2. [DONE]! Understand what #undef getrusage does.
    - this ensures that the original calculation code by C is used in this program execution. 
3. Implement the following functions in dictionary.c:
    a. bool check(const char \*word);
    b. unsigned int hash(const char \*word);
    c. bool load(const char \*dictionary);
    d. unsigned int size(void);
    e. bool unload(void);
4. Understand the speller.c file 

Success Criteria:
1. All mis-spelled keywords in input text files are detected. This can be verified by comparing my results against the results provided in the "Keys" folder. 

CS50 Submission:
1. Check50: check50 cs50/problems/2020/x/speller
2. Submit: submit50 cs50/problems/2020/x/speller
3. Submit to big board using: $ submit50 cs50/problems/2020/x/challenges/speller
4. View CS50's submission:  ~cs50/2019/fall/pset5/speller texts/lalaland.txt