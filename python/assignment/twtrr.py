import re
#get a string
string = input("Input: ")
#removing vowels
s1=re.sub("[aeiou]","",string)
#print output
print(f"Output: {s1}")