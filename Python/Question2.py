
for i in range(int(input())):  # IntegerInput
    word = input()
    word=word.upper()
    vowels = ['A', 'E', 'I', 'O', 'U']
    count = 0  # Removed =
    for j in range(0, len(word)):  # Colon & len
        if word[j] in vowels:  # Removed bracket
            if j == 0:  # Added =
                count += 1
            elif word[j+1] in vowels:  # Removed Bracket
                count += 1
                break
            else:
                count += 1
    print(count)

'''
SAMPLE INPUT-1
	 3
    	radeon
    	coir
    	malayalam
   

SAMPLE OUTPUT:1
  2
  1
  4
'''
