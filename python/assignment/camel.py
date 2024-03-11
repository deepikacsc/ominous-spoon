#read input
str = input("Camelcase: ")
#creating empty string
empty=""
#loop for traversal
for c in str:
    #when capital include underscore and change to lowercase
    if(c.isupper()):
        empty = empty + "_" + c.lower()
    else:
        empty = empty+c
#print snake case
print(f"Snakecase: {empty}")



