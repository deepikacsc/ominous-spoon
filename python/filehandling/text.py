name = input("What's your name? ")
file = open("names.text", "w")
file.write(name)
file.close()
