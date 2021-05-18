def hashModular(key, size) : return key % size

                             list_ = [None] * 10 #List of size 10 key = 35 index = hashModular(key, len(list_)) #Fit the key into the list size
    print("The index for key " + str(key) + " is " + str(index))