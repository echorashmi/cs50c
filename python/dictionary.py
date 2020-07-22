words = set()

# Return true if word is in dictionary, else return false.
def check(word):
    if word.lower() in words:
        return True
    else:
        return False

# Load dictionary into memory, returning true if succesful else false
def load(dictionary):
    file = open(dictionary, "r")
    for line in file:
        words.add(line.rstrip('\r\n'))
    file.close()
    return True

# Returns number of words in dictionary if loaded else 0 if not loaded
def size():
    return len(words)
    
# Unloads dictionary from memory, returning true if succesful else false 
def unload():
    return True
    
